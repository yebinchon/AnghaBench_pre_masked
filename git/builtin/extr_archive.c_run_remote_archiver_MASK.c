
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct transport {int dummy; } ;
struct remote {int * url; } ;
struct packet_reader {scalar_t__ line; } ;


 int PACKET_READ_CHOMP_NEWLINE ;
 int PACKET_READ_DIE_ON_ERR_PACKET ;
 scalar_t__ PACKET_READ_FLUSH ;
 scalar_t__ PACKET_READ_NORMAL ;
 int _ (char*) ;
 char* archive_format_from_filename (char const*) ;
 int die (int ,...) ;
 int packet_flush (int) ;
 int packet_reader_init (struct packet_reader*,int,int *,int ,int) ;
 scalar_t__ packet_reader_read (struct packet_reader*) ;
 int packet_write_fmt (int,char*,char const*) ;
 int recv_sideband (char*,int,int) ;
 struct remote* remote_get (char const*) ;
 scalar_t__ starts_with (scalar_t__,char*) ;
 scalar_t__ strcmp (scalar_t__,char*) ;
 int transport_connect (struct transport*,char*,char const*,int*) ;
 int transport_disconnect (struct transport*) ;
 struct transport* transport_get (struct remote*,int ) ;

__attribute__((used)) static int run_remote_archiver(int argc, const char **argv,
          const char *remote, const char *exec,
          const char *name_hint)
{
 int fd[2], i, rv;
 struct transport *transport;
 struct remote *_remote;
 struct packet_reader reader;

 _remote = remote_get(remote);
 if (!_remote->url[0])
  die(_("git archive: Remote with no URL"));
 transport = transport_get(_remote, _remote->url[0]);
 transport_connect(transport, "git-upload-archive", exec, fd);







 if (name_hint) {
  const char *format = archive_format_from_filename(name_hint);
  if (format)
   packet_write_fmt(fd[1], "argument --format=%s\n", format);
 }
 for (i = 1; i < argc; i++)
  packet_write_fmt(fd[1], "argument %s\n", argv[i]);
 packet_flush(fd[1]);

 packet_reader_init(&reader, fd[0], ((void*)0), 0,
      PACKET_READ_CHOMP_NEWLINE |
      PACKET_READ_DIE_ON_ERR_PACKET);

 if (packet_reader_read(&reader) != PACKET_READ_NORMAL)
  die(_("git archive: expected ACK/NAK, got a flush packet"));
 if (strcmp(reader.line, "ACK")) {
  if (starts_with(reader.line, "NACK "))
   die(_("git archive: NACK %s"), reader.line + 5);
  die(_("git archive: protocol error"));
 }

 if (packet_reader_read(&reader) != PACKET_READ_FLUSH)
  die(_("git archive: expected a flush"));


 rv = recv_sideband("archive", fd[0], 1);
 rv |= transport_disconnect(transport);

 return !!rv;
}

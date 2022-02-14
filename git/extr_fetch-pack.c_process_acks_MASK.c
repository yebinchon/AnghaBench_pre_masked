
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct packet_reader {scalar_t__ status; int line; } ;
struct oidset {int dummy; } ;
struct object_id {int dummy; } ;
struct fetch_negotiator {int (* ack ) (struct fetch_negotiator*,struct commit*) ;} ;
struct commit {int dummy; } ;


 scalar_t__ PACKET_READ_DELIM ;
 scalar_t__ PACKET_READ_FLUSH ;
 scalar_t__ PACKET_READ_NORMAL ;
 int _ (char*) ;
 int die (int ,...) ;
 int get_oid_hex (char const*,struct object_id*) ;
 struct commit* lookup_commit (int ,struct object_id*) ;
 int oidset_insert (struct oidset*,struct object_id*) ;
 scalar_t__ packet_reader_read (struct packet_reader*) ;
 int process_section_header (struct packet_reader*,char*,int ) ;
 scalar_t__ skip_prefix (int ,char*,char const**) ;
 int strcmp (int ,char*) ;
 int stub1 (struct fetch_negotiator*,struct commit*) ;
 int the_repository ;

__attribute__((used)) static int process_acks(struct fetch_negotiator *negotiator,
   struct packet_reader *reader,
   struct oidset *common)
{

 int received_ready = 0;
 int received_ack = 0;

 process_section_header(reader, "acknowledgments", 0);
 while (packet_reader_read(reader) == PACKET_READ_NORMAL) {
  const char *arg;

  if (!strcmp(reader->line, "NAK"))
   continue;

  if (skip_prefix(reader->line, "ACK ", &arg)) {
   struct object_id oid;
   if (!get_oid_hex(arg, &oid)) {
    struct commit *commit;
    oidset_insert(common, &oid);
    commit = lookup_commit(the_repository, &oid);
    negotiator->ack(negotiator, commit);
   }
   continue;
  }

  if (!strcmp(reader->line, "ready")) {
   received_ready = 1;
   continue;
  }

  die(_("unexpected acknowledgment line: '%s'"), reader->line);
 }

 if (reader->status != PACKET_READ_FLUSH &&
     reader->status != PACKET_READ_DELIM)
  die(_("error processing acks: %d"), reader->status);
 if (received_ready && reader->status != PACKET_READ_DELIM)
  die(_("expected packfile to be sent after 'ready'"));
 if (!received_ready && reader->status != PACKET_READ_FLUSH)
  die(_("expected no other sections to be sent after no 'ready'"));


 return received_ready ? 2 : (received_ack ? 1 : 0);
}

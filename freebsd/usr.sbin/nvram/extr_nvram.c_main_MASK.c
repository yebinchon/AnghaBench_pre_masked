
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef char uint8_t ;
struct deletelist {char* name; struct deletelist* next; struct deletelist* last; } ;
struct chrp_header {int dummy; } ;
typedef int buf ;
struct TYPE_3__ {int length; int name; } ;
struct TYPE_4__ {TYPE_1__ header; int buf; } ;


 char* DEVICE_NAME ;
 scalar_t__ EINTR ;
 int NVRAM_SIZE ;
 int O_RDWR ;
 int append_var (char*,int,char*,char*) ;
 int bzero (struct deletelist*,int) ;
 int close (int) ;
 TYPE_2__ conv ;
 int err (int,char*) ;
 scalar_t__ errno ;
 int errx (int,char*,char*) ;
 int exit (int ) ;
 int getopt (int,char**,char*) ;
 void* malloc (int) ;
 int memcpy (int ,char*,int) ;
 int open (char*,int ) ;
 char* optarg ;
 scalar_t__ optind ;
 int printf (char*,char*) ;
 int read (int,char*,int) ;
 scalar_t__ remove_var (char*,int,char*) ;
 char* strchr (char*,char) ;
 int strlen (char*) ;
 scalar_t__ strncmp (int ,char*,int) ;
 int usage () ;
 int warnx (char*,char*) ;
 int write (int,char*,int) ;

int
main(int argc, char **argv)
{
 int opt, dump, fd, res, i, size;
 uint8_t buf[NVRAM_SIZE], *cp, *common;
 struct deletelist *dl;

 dump = 0;
 dl = ((void*)0);

 while((opt = getopt(argc, argv, "d:p")) != -1) {
  switch(opt) {
  case 'p':
   dump = 1;
   break;

  case 'd':
   if (dl == ((void*)0)) {
    dl = malloc(sizeof(*dl));
    if (dl == ((void*)0))
     err(1, "malloc");
    bzero(dl, sizeof(*dl));
    dl->last = dl;
   } else {
    dl->last->next = malloc(sizeof(*dl));
    if (dl->last->next == ((void*)0))
     err(1, "malloc");
    dl->last = dl->last->next;
    bzero(dl->last, sizeof(*dl));
   }
   dl->last->name = optarg;
   break;

  default:
   usage();

  }
 }
 argc -= optind;
 argv += optind;

 if (argc == 0 && dump == 0 && dl == ((void*)0)) {
  usage();

 }

 fd = open(DEVICE_NAME, O_RDWR);
 if (fd == -1)
  err(1, DEVICE_NAME);
 for (i = 0; i < (int)sizeof(buf);) {
  res = read(fd, buf + i, sizeof(buf) - i);
  if (res == -1 && errno != EINTR)
   err(1, DEVICE_NAME);
  if (res == 0)
   break;
  if (res > 0)
   i += res;
 }
 if (i != sizeof(buf))
  errx(1, "%s: short read", DEVICE_NAME);


 size = 0;
 for (cp = buf; cp < buf + sizeof(buf); cp += size) {
  memcpy(conv.buf, cp, sizeof(struct chrp_header));
  size = conv.header.length * 0x10;
  if (strncmp(conv.header.name, "common", 7) == 0)
   break;
 }
 if (cp >= buf + sizeof(buf) || size <= (int)sizeof(struct chrp_header))
  errx(1, "%s: no common block", DEVICE_NAME);
 common = cp + sizeof(struct chrp_header);
 size -= sizeof(struct chrp_header);

 if (dump != 0) {
  while (size > 0) {
   i = strlen(common) + 1;
   if (i == 1)
    break;
   printf("%s\n", common);
   size -= i;
   common += i;
  }
  exit(0);
 }

 for (;dl != ((void*)0); dl = dl->next) {
  if (remove_var(common, size, dl->name) == 0)
   warnx("%s: no such variable", dl->name);
 }

 for (; argc > 0; argc--, argv++) {
  cp = strchr(*argv, '=');
  if (cp == ((void*)0))
   errx(1, "%s: invalid argument", *argv);
  cp[0] = '\0';
  cp++;
  remove_var(common, size, *argv);
  if (append_var(common, size, *argv, cp) == -1)
   errx(1, "%s: error setting variable", *argv);
 }

 for (i = 0; i < (int)sizeof(buf);) {
  res = write(fd, buf + i, sizeof(buf) - i);
  if (res == -1 && errno != EINTR)
   err(1, DEVICE_NAME);
  if (res == 0)
   break;
  if (res > 0)
   i += res;
 }
 if (i != sizeof(buf))
  errx(1, "%s: short write", DEVICE_NAME);
 if (close(fd) == -1)
  err(1, DEVICE_NAME);

 exit(0);
}

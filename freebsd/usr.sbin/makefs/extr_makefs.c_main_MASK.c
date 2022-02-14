
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct timeval {int tv_usec; scalar_t__ tv_sec; } ;
struct stat {int st_mode; } ;
struct TYPE_15__ {int (* make_fs ) (char*,char const*,int *,TYPE_2__*) ;int (* prepare_options ) (TYPE_2__*) ;int (* cleanup_options ) (TYPE_2__*) ;int (* parse_options ) (char*,TYPE_2__*) ;} ;
typedef TYPE_1__ fstype_t ;
typedef int fsoptions ;
typedef int fsnode ;
struct TYPE_16__ {int fd; int sectorsize; int needswap; int sparse; int onlyspec; int * fs_specific; void* maxsize; void* minsize; void* roundup; void* offset; void* freefiles; void* freefilepc; void* freeblocks; void* freeblockpc; } ;
typedef TYPE_2__ fsinfo_t ;
struct TYPE_14__ {int tv_nsec; scalar_t__ tv_sec; } ;


 int VAR_0 ;
 int VAR_1 ;
 char* VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

 int VAR_5 ;

 int FUNC_0 (int) ;
 int FUNC_1 (struct timeval,char*) ;
 int FUNC_2 (struct timeval) ;
 int FUNC_3 (char const*,char const*,int *,scalar_t__) ;
 int FUNC_4 (int ,TYPE_10__*) ;
 int FUNC_5 (scalar_t__*) ;
 int VAR_6 ;
 int FUNC_6 (int *) ;
 int VAR_7 ;
 int FUNC_7 (int,char*,...) ;
 int FUNC_8 (int,char*,...) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int *) ;
 TYPE_1__* FUNC_11 (char*) ;
 int FUNC_12 (char*,int *) ;
 int FUNC_13 (int,char**,char*) ;
 int FUNC_14 (struct timeval*,int *) ;
 int FUNC_15 (TYPE_2__*,int ,int) ;
 char* VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (char) ;
 int * FUNC_18 (char*,int *) ;
 int FUNC_19 (char*) ;
 int FUNC_20 (char*) ;
 int VAR_10 ;
 TYPE_10__ VAR_11 ;
 int FUNC_21 (char*,struct stat*) ;
 scalar_t__ FUNC_22 (char*,char*) ;
 int FUNC_23 (char*) ;
 char* FUNC_24 (char**,char*) ;
 void* FUNC_25 (char*,char*,long long,int) ;
 int FUNC_26 (char*,int *,int ) ;
 int FUNC_27 (TYPE_2__*) ;
 int FUNC_28 (char*,TYPE_2__*) ;
 int FUNC_29 (TYPE_2__*) ;
 int FUNC_30 (TYPE_2__*) ;
 int FUNC_31 (char*,char const*,int *,TYPE_2__*) ;
 int FUNC_32 (TYPE_1__*,TYPE_2__*) ;
 int * FUNC_33 (char const*,char*,int *,int *) ;
 int FUNC_34 (char*,char*) ;

int
FUNC_35(int VAR_12, char *VAR_13[])
{
 struct stat VAR_14;
 struct timeval VAR_15;
 fstype_t *VAR_16;
 fsinfo_t VAR_17;
 fsnode *VAR_18;
 int VAR_19, VAR_20, VAR_21;
 const char *VAR_22;
 const char *VAR_23;

 FUNC_19(VAR_13[0]);

 VAR_6 = 0;
 if ((VAR_16 = FUNC_11(VAR_2)) == ((void*)0))
  FUNC_8(1, "Unknown default fs type `%s'.", VAR_2);


 (void)FUNC_15(&VAR_17, 0, sizeof(VAR_17));
 VAR_17.fd = -1;
 VAR_17.sectorsize = -1;

 if (VAR_16->prepare_options)
  VAR_16->prepare_options(&VAR_17);

 VAR_23 = ((void*)0);



 VAR_19 = FUNC_14(&VAR_15, ((void*)0));
 VAR_11.tv_sec = VAR_15.tv_sec;
 VAR_11.tv_nsec = VAR_15.tv_usec * 1000;

 if (VAR_19 == -1)
  FUNC_7(1, "Unable to get system time");


 while ((VAR_19 = FUNC_13(VAR_12, VAR_13, "B:b:Dd:f:F:M:m:N:O:o:pR:s:S:t:T:xZ")) != -1) {
  switch (VAR_19) {

  case 'B':
   if (FUNC_22(VAR_8, "be") == 0 ||
       FUNC_22(VAR_8, "4321") == 0 ||
       FUNC_22(VAR_8, "big") == 0) {

    VAR_17.needswap = 1;

   } else if (FUNC_22(VAR_8, "le") == 0 ||
       FUNC_22(VAR_8, "1234") == 0 ||
       FUNC_22(VAR_8, "little") == 0) {

    VAR_17.needswap = 1;

   } else {
    FUNC_34("Invalid endian `%s'.", VAR_8);
    FUNC_32(VAR_16, &VAR_17);
   }
   break;

  case 'b':
   VAR_21 = FUNC_23(VAR_8) - 1;
   if (VAR_8[VAR_21] == '%') {
    VAR_8[VAR_21] = '\0';
    VAR_17.freeblockpc =
        FUNC_25("free block percentage",
     VAR_8, 0, 99);
   } else {
    VAR_17.freeblocks =
        FUNC_25("free blocks",
     VAR_8, 0, VAR_4);
   }
   break;

  case 'D':
   VAR_7 = 1;
   break;

  case 'd':
   VAR_6 = FUNC_26(VAR_8, ((void*)0), 0);
   break;

  case 'f':
   VAR_21 = FUNC_23(VAR_8) - 1;
   if (VAR_8[VAR_21] == '%') {
    VAR_8[VAR_21] = '\0';
    VAR_17.freefilepc =
        FUNC_25("free file percentage",
     VAR_8, 0, 99);
   } else {
    VAR_17.freefiles =
        FUNC_25("free files",
     VAR_8, 0, VAR_4);
   }
   break;

  case 'F':
   VAR_23 = VAR_8;
   break;

  case 'M':
   VAR_17.minsize =
       FUNC_25("minimum size", VAR_8, 1LL, VAR_4);
   break;

  case 'N':
   if (! FUNC_20(VAR_8))
    FUNC_8(1,
       "Unable to use user and group databases in `%s'",
        VAR_8);
   break;

  case 'm':
   VAR_17.maxsize =
       FUNC_25("maximum size", VAR_8, 1LL, VAR_4);
   break;

  case 'O':
   VAR_17.offset =
       FUNC_25("offset", VAR_8, 0LL, VAR_4);
   break;

  case 'o':
  {
   char *VAR_24;

   while ((VAR_24 = FUNC_24(&VAR_8, ",")) != ((void*)0)) {
    if (*VAR_24 == '\0')
     FUNC_8(1, "Empty option");
    if (! VAR_16->parse_options(VAR_24, &VAR_17))
     FUNC_32(VAR_16, &VAR_17);
   }
   break;
  }
  case 'p':

   VAR_17.sparse = 1;
   break;

  case 'R':

   VAR_17.roundup =
       FUNC_25("roundup-size", VAR_8, 0, VAR_4);
   break;

  case 's':
   VAR_17.minsize = VAR_17.maxsize =
       FUNC_25("size", VAR_8, 1LL, VAR_4);
   break;

  case 'S':
   VAR_17.sectorsize =
       (int)FUNC_25("sector size", VAR_8,
    1LL, VAR_3);
   break;

  case 't':

   if (VAR_16->cleanup_options)
    VAR_16->cleanup_options(&VAR_17);
   VAR_17.fs_specific = ((void*)0);
   if ((VAR_16 = FUNC_11(VAR_8)) == ((void*)0))
    FUNC_8(1, "Unknown fs type `%s'.", VAR_8);
   VAR_16->prepare_options(&VAR_17);
   break;

  case 'T':
   if (FUNC_12(VAR_8, &VAR_10) == -1)
    FUNC_8(1, "Cannot get timestamp from `%s'",
        VAR_8);
   break;

  case 'x':
   VAR_17.onlyspec = 1;
   break;

  case 'Z':

   VAR_17.sparse = 1;
   break;

  case '?':
  default:
   FUNC_32(VAR_16, &VAR_17);


  }
 }
 if (VAR_6) {
  FUNC_16("debug mask: 0x%08x\n", VAR_6);
  FUNC_16("start time: %ld.%ld, %s",
      (long)VAR_11.tv_sec, (long)VAR_11.tv_nsec,
      FUNC_5(&VAR_11.tv_sec));
 }
 VAR_12 -= VAR_9;
 VAR_13 += VAR_9;

 if (VAR_12 < 2)
  FUNC_32(VAR_16, &VAR_17);


 if (VAR_17.onlyspec != 0 && VAR_23 == ((void*)0))
  FUNC_8(1, "-x requires -F mtree-specfile.");


 if (FUNC_22(VAR_13[1], "-") == 0)
  VAR_14.st_mode = 128;
 else {
  if (FUNC_21(VAR_13[1], &VAR_14) == -1)
   FUNC_7(1, "Can't stat `%s'", VAR_13[1]);
 }

 switch (VAR_14.st_mode & VAR_5) {
 case 129:
  VAR_22 = VAR_13[1];
  FUNC_2(VAR_15);
  VAR_18 = FUNC_33(VAR_22, ".", ((void*)0), ((void*)0));
  FUNC_1(VAR_15, "walk_dir");
  break;
 case 128:
  VAR_22 = ".";
  FUNC_2(VAR_15);
  VAR_18 = FUNC_18(VAR_13[1], ((void*)0));
  FUNC_1(VAR_15, "manifest");
  break;
 default:
  FUNC_8(1, "%s: not a file or directory", VAR_13[1]);

 }


 for (VAR_20 = 2; VAR_20 < VAR_12; VAR_20++) {
  if (FUNC_21(VAR_13[VAR_20], &VAR_14) == -1)
   FUNC_7(1, "Can't stat `%s'", VAR_13[VAR_20]);
  if (!FUNC_0(VAR_14.st_mode))
   FUNC_8(1, "%s: not a directory", VAR_13[VAR_20]);
  FUNC_2(VAR_15);
  VAR_18 = FUNC_33(VAR_13[VAR_20], ".", ((void*)0), VAR_18);
  FUNC_1(VAR_15, "walk_dir2");
 }

 if (VAR_23) {
  FUNC_2(VAR_15);
  FUNC_3(VAR_23, VAR_22, VAR_18, VAR_17.onlyspec);
  FUNC_1(VAR_15, "apply_specfile");
 }

 if (VAR_6 & VAR_1) {
  FUNC_16("\nparent: %s\n", VAR_22);
  FUNC_6(VAR_18);
  FUNC_17('\n');
 }


 FUNC_2(VAR_15);
 VAR_16->make_fs(VAR_13[0], VAR_22, VAR_18, &VAR_17);
 FUNC_1(VAR_15, "make_fs");

 FUNC_10(VAR_18);

 FUNC_9(0);

}

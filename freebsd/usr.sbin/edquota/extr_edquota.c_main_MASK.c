
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
typedef scalar_t__ uid_t ;
struct TYPE_2__ {scalar_t__ dqb_itime; scalar_t__ dqb_btime; void* dqb_ihardlimit; void* dqb_isoftlimit; void* dqb_bhardlimit; void* dqb_bsoftlimit; } ;
struct quotause {char* fsname; TYPE_1__ dqblk; struct quotause* next; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (char*) ;
 struct quotause* FUNC_1 (int,int) ;
 int FUNC_2 (int) ;
 void* FUNC_3 (int ,char,char*) ;
 void* FUNC_4 (int ,char,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int,char*,...) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int,scalar_t__,int ) ;
 int FUNC_9 (struct quotause*) ;
 long FUNC_10 (char*,int) ;
 int FUNC_11 () ;
 int FUNC_12 (int,char**,char*) ;
 struct quotause* FUNC_13 (long,int,char*) ;
 scalar_t__ FUNC_14 () ;
 int VAR_4 ;
 int FUNC_15 (char) ;
 int FUNC_16 (int ,int ) ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_17 (long,struct quotause*) ;
 scalar_t__ FUNC_18 (struct quotause*,int ) ;
 scalar_t__ FUNC_19 (struct quotause*,int ) ;
 int FUNC_20 (char*,int,char*,char*) ;
 char* FUNC_21 (char*,char) ;
 int FUNC_22 (char*,char*,int) ;
 scalar_t__ FUNC_23 (char*) ;
 char* FUNC_24 (char**,char*) ;
 scalar_t__ FUNC_25 (char*,char*) ;
 int FUNC_26 (char*,char**,int) ;
 int VAR_7 ;
 int FUNC_27 (int ) ;
 int FUNC_28 () ;
 int FUNC_29 (char*,...) ;
 scalar_t__ FUNC_30 (struct quotause*,int,char*,int) ;
 scalar_t__ FUNC_31 (struct quotause*,int,int) ;

int
FUNC_32(int VAR_8, char *VAR_9[])
{
 struct quotause *VAR_10, *VAR_11, *VAR_12;
 long VAR_13, VAR_14;
 int VAR_15, VAR_16, VAR_17, VAR_18;
 uid_t VAR_19, VAR_20;
 uint64_t VAR_21;
 char *VAR_22, *VAR_23, *VAR_24, *VAR_25;
 int VAR_26 = 0, VAR_27 = 0, VAR_28 = 0, VAR_29;
 char *VAR_30 = ((void*)0);
 char VAR_31[VAR_1];

 if (VAR_8 < 2)
  FUNC_28();
 if (FUNC_14())
  FUNC_6(1, "permission denied");
 VAR_16 = VAR_3;
 VAR_11 = ((void*)0);
 VAR_12 = ((void*)0);
 VAR_22 = ((void*)0);
 while ((VAR_29 = FUNC_12(VAR_8, VAR_9, "ughtf:p:e:")) != -1) {
  switch(VAR_29) {
  case 'f':
   VAR_30 = VAR_5;
   break;
  case 'p':
   if (VAR_26) {
    FUNC_29("cannot specify both -e and -p");
    FUNC_28();

   }
   VAR_22 = VAR_5;
   VAR_28++;
   break;
  case 'g':
   VAR_16 = VAR_0;
   break;
  case 'h':
   VAR_4++;
   break;
  case 'u':
   VAR_16 = VAR_3;
   break;
  case 't':
   VAR_27++;
   break;
  case 'e':
   if (VAR_28) {
    FUNC_29("cannot specify both -e and -p");
    FUNC_28();

   }
   if ((VAR_10 = FUNC_1(1, sizeof(*VAR_10))) == ((void*)0))
    FUNC_6(2, "out of memory");
   VAR_25 = VAR_5;
   for (VAR_15 = 0, VAR_23 = VAR_5;
        (VAR_23 = FUNC_24(&VAR_5, ":")) != ((void*)0); VAR_15++) {
    if (VAR_23 != VAR_25)
     *(VAR_23 - 1) = ':';
    if (VAR_15 > 0 && !FUNC_15(*VAR_23)) {
     FUNC_29("incorrect quota specification: "
         "%s", VAR_25);
     FUNC_28();

    }
    switch (VAR_15) {
    case 0:
     FUNC_22(VAR_10->fsname, VAR_23,
         sizeof(VAR_10->fsname));
     break;
    case 1:
     VAR_21 = FUNC_26(VAR_23, &VAR_24, 10);
     VAR_10->dqblk.dqb_bsoftlimit =
      FUNC_3(VAR_21, *VAR_24,
          "block soft limit");
     continue;
    case 2:
     VAR_21 = FUNC_26(VAR_23, &VAR_24, 10);
     VAR_10->dqblk.dqb_bhardlimit =
      FUNC_3(VAR_21, *VAR_24,
          "block hard limit");
     continue;
    case 3:
     VAR_21 = FUNC_26(VAR_23, &VAR_24, 10);
     VAR_10->dqblk.dqb_isoftlimit =
      FUNC_4(VAR_21, *VAR_24,
          "inode soft limit");
     continue;
    case 4:
     VAR_21 = FUNC_26(VAR_23, &VAR_24, 10);
     VAR_10->dqblk.dqb_ihardlimit =
      FUNC_4(VAR_21, *VAR_24,
          "inode hard limit");
     continue;
    default:
     FUNC_29("incorrect quota specification: "
         "%s", VAR_25);
     FUNC_28();

    }
   }
   if (VAR_11 == ((void*)0)) {
    VAR_11 = VAR_12 = VAR_10;
   } else {
    VAR_12->next = VAR_10;
    VAR_12 = VAR_10;
   }
   VAR_26++;
   break;
  default:
   FUNC_28();

  }
 }
 VAR_8 -= VAR_6;
 VAR_9 += VAR_6;
 if (VAR_28 || VAR_26) {
  if (VAR_28) {
   if ((VAR_14 = FUNC_10(VAR_22, VAR_16)) == -1)
    FUNC_7(1);
   VAR_11 = FUNC_13(VAR_14, VAR_16, VAR_30);
   if (VAR_11 == ((void*)0))
    FUNC_7(0);
   for (VAR_10 = VAR_11; VAR_10; VAR_10 = VAR_10->next) {
    VAR_10->dqblk.dqb_btime = 0;
    VAR_10->dqblk.dqb_itime = 0;
   }
  }
  for (; VAR_8-- > 0; VAR_9++) {
   if (FUNC_25(*VAR_9, "0123456789-") == FUNC_23(*VAR_9) &&
       (VAR_23 = FUNC_21(*VAR_9, '-')) != ((void*)0)) {
    *VAR_23++ = '\0';
    VAR_19 = FUNC_0(*VAR_9);
    VAR_20 = FUNC_0(VAR_23);
    if (VAR_20 < VAR_19)
     FUNC_6(1,
 "ending uid (%d) must be >= starting uid (%d) when using uid ranges",
      VAR_20, VAR_19);
    VAR_17 = 1;
   } else {
    VAR_19 = VAR_20 = 0;
    VAR_17 = 0;
   }
   for ( ; VAR_19 <= VAR_20; VAR_19++) {
    if (VAR_17)
     FUNC_20(VAR_31, sizeof(VAR_31), "%d",
         VAR_19);
    else
     FUNC_20(VAR_31, sizeof(VAR_31), "%s",
      *VAR_9);
    if ((VAR_13 = FUNC_10(VAR_31, VAR_16)) < 0)
     continue;
    if (VAR_28) {
     FUNC_17(VAR_13, VAR_11);
     continue;
    }
    for (VAR_10 = VAR_11; VAR_10; VAR_10 = VAR_10->next) {
     VAR_12 = FUNC_13(VAR_13, VAR_16,
         VAR_10->fsname);
     if (VAR_12 == ((void*)0))
      continue;
     VAR_12->dqblk = VAR_10->dqblk;
     FUNC_17(VAR_13, VAR_12);
     FUNC_9(VAR_12);
    }
   }
  }
  if (VAR_28)
   FUNC_9(VAR_11);
  FUNC_7(0);
 }
 VAR_18 = FUNC_16(VAR_7, VAR_2);
 FUNC_8(VAR_18, FUNC_14(), FUNC_11());
 if (VAR_27) {
  if ((VAR_11 = FUNC_13(0, VAR_16, VAR_30)) != ((void*)0)) {
   if (FUNC_31(VAR_11, VAR_18, VAR_16) != 0 &&
       FUNC_5(VAR_7) && FUNC_19(VAR_11, VAR_7))
    FUNC_17(0L, VAR_11);
   FUNC_9(VAR_11);
  }
  FUNC_2(VAR_18);
  FUNC_27(VAR_7);
  FUNC_7(0);
 }
 for ( ; VAR_8 > 0; VAR_8--, VAR_9++) {
  if ((VAR_13 = FUNC_10(*VAR_9, VAR_16)) == -1)
   continue;
  if ((VAR_12 = FUNC_13(VAR_13, VAR_16, VAR_30)) == ((void*)0))
   FUNC_7(1);
  if (FUNC_30(VAR_12, VAR_18, *VAR_9, VAR_16) == 0)
   continue;
  if (FUNC_5(VAR_7) && FUNC_18(VAR_12, VAR_7))
   FUNC_17(VAR_13, VAR_12);
  FUNC_9(VAR_12);
 }
 FUNC_2(VAR_18);
 FUNC_27(VAR_7);
 FUNC_7(0);
}

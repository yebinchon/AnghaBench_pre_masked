
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat_cmd {scalar_t__ cmd; char* xocontainer; int (* opt ) (int,char**) ;} ;
struct procstat {int dummy; } ;
struct kinfo_proc {int dummy; } ;
typedef int pid_t ;


 long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 struct procstat_cmd* FUNC_1 (char*) ;
 int FUNC_2 (int,char**,char*) ;
 int FUNC_3 (struct kinfo_proc*,int) ;
 char* VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_4 (struct procstat_cmd const*,struct procstat*,struct kinfo_proc*) ;
 int FUNC_5 (struct procstat*) ;
 scalar_t__ VAR_13 ;
 int FUNC_6 (struct procstat*,struct kinfo_proc*) ;
 struct kinfo_proc* FUNC_7 (struct procstat*,int ,int,int*) ;
 scalar_t__ VAR_14 ;
 struct procstat* FUNC_8 (char*) ;
 struct procstat* FUNC_9 (char*,char*) ;
 struct procstat* FUNC_10 () ;
 int VAR_15 ;
 int FUNC_11 (int) ;
 long FUNC_12 (char*,char**,int) ;
 int FUNC_13 (int,char**) ;
 int FUNC_14 () ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;
 int FUNC_17 (int,char*) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int,char**) ;
 int FUNC_22 (int ) ;

int
FUNC_23(int VAR_16, char *VAR_17[])
{
 int VAR_18, VAR_19;
 int VAR_20;
 struct kinfo_proc *VAR_21;
 const struct procstat_cmd *VAR_22;
 struct procstat *VAR_23, *VAR_24;
 long VAR_25;
 pid_t VAR_26;
 char *VAR_27;
 char *VAR_28, *VAR_29;
 int VAR_30;
 int VAR_31;

 VAR_19 = 0;
 VAR_22 = ((void*)0);
 VAR_29 = VAR_28 = ((void*)0);
 VAR_30 = 0;
 VAR_16 = FUNC_21(VAR_16, VAR_17);

 while ((VAR_18 = FUNC_2(VAR_16, VAR_17, "abCcefHhijkLlM:N:nrSstvw:x")) != -1) {
  switch (VAR_18) {
  case 'a':
   VAR_30++;
   break;
  case 'b':
   if (VAR_22 != ((void*)0))
    FUNC_14();
   VAR_22 = FUNC_1("binary");
   break;
  case 'C':
   VAR_15 |= VAR_4;
   break;
  case 'c':
   if (VAR_22 != ((void*)0))
    FUNC_14();
   VAR_22 = FUNC_1("arguments");
   break;
  case 'e':
   if (VAR_22 != ((void*)0))
    FUNC_14();
   VAR_22 = FUNC_1("environment");
   break;
  case 'f':
   if (VAR_22 != ((void*)0))
    FUNC_14();
   VAR_22 = FUNC_1("files");
   break;
  case 'H':
   VAR_15 |= VAR_6;
   break;
  case 'h':
   VAR_15 |= VAR_5;
   break;
  case 'i':
   if (VAR_22 != ((void*)0))
    FUNC_14();
   VAR_22 = FUNC_1("signals");
   break;
  case 'j':
   if (VAR_22 != ((void*)0))
    FUNC_14();
   VAR_22 = FUNC_1("tsignals");
   break;
  case 'k':
   if (VAR_22 != ((void*)0) && VAR_22->cmd == VAR_14) {
    if ((VAR_15 & VAR_8) != 0)
     FUNC_14();
    VAR_15 |= VAR_8;
   } else {
    if (VAR_22 != ((void*)0))
     FUNC_14();
    VAR_22 = FUNC_1("kstack");
   }
   break;
  case 'L':
   if (VAR_22 != ((void*)0))
    FUNC_14();
   VAR_22 = FUNC_1("ptlwpinfo");
   break;
  case 'l':
   if (VAR_22 != ((void*)0))
    FUNC_14();
   VAR_22 = FUNC_1("rlimit");
   break;
  case 'M':
   VAR_29 = VAR_10;
   break;
  case 'N':
   VAR_28 = VAR_10;
   break;
  case 'n':
   VAR_15 |= VAR_7;
   break;
  case 'r':
   if (VAR_22 != ((void*)0))
    FUNC_14();
   VAR_22 = FUNC_1("rusage");
   break;
  case 'S':
   if (VAR_22 != ((void*)0))
    FUNC_14();
   VAR_22 = FUNC_1("cpuset");
   break;
  case 's':
   if (VAR_22 != ((void*)0))
    FUNC_14();
   VAR_22 = FUNC_1("credentials");
   break;
  case 't':
   if (VAR_22 != ((void*)0))
    FUNC_14();
   VAR_22 = FUNC_1("threads");
   break;
  case 'v':
   if (VAR_22 != ((void*)0))
    FUNC_14();
   VAR_22 = FUNC_1("vm");
   break;
  case 'w':
   VAR_25 = FUNC_12(VAR_10, &VAR_27, 10);
   if (*VAR_27 != '\0')
    FUNC_14();
   if (VAR_25 < 1 || VAR_25 > VAR_0)
    FUNC_14();
   VAR_19 = VAR_25;
   break;
  case 'x':
   if (VAR_22 != ((void*)0))
    FUNC_14();
   VAR_22 = FUNC_1("auxv");
   break;
  case '?':
  default:
   FUNC_14();
  }

 }
 VAR_16 -= VAR_11;
 VAR_17 += VAR_11;

 if (VAR_22 == ((void*)0) && VAR_17[0] != ((void*)0) && (VAR_22 = FUNC_1(VAR_17[0])) != ((void*)0)) {
  if ((VAR_15 & VAR_9) != 0)
   FUNC_14();
  if (VAR_22->opt != ((void*)0)) {
   VAR_12 = 1;
   VAR_11 = 1;
   VAR_22->opt(VAR_16, VAR_17);
   VAR_16 -= VAR_11;
   VAR_17 += VAR_11;
  } else {
   VAR_16 -= 1;
   VAR_17 += 1;
  }
 } else {
  if (VAR_22 == ((void*)0))
   VAR_22 = FUNC_1("basic");
  if (VAR_22->cmd != VAR_13 &&
      (VAR_15 & VAR_4) != 0)
   FUNC_14();
 }


 if (!(VAR_30 == 1 && VAR_16 == 0) && !(VAR_30 == 0 && VAR_16 > 0))
  FUNC_14();

 if (VAR_29 != ((void*)0))
  VAR_23 = FUNC_9(VAR_28, VAR_29);
 else
  VAR_23 = FUNC_10();
 if (VAR_23 == ((void*)0))
  FUNC_17(1, "procstat_open()");
 do {
  FUNC_22(VAR_3);
  FUNC_20("procstat");
  FUNC_20(VAR_22->xocontainer);

  if (VAR_30) {
   VAR_21 = FUNC_7(VAR_23, VAR_2, 0, &VAR_31);
   if (VAR_21 == ((void*)0))
    FUNC_17(1, "procstat_getprocs()");
   FUNC_3(VAR_21, VAR_31);
   for (VAR_20 = 0; VAR_20 < VAR_31; VAR_20++) {
    FUNC_4(VAR_22, VAR_23, &VAR_21[VAR_20]);


    VAR_15 |= VAR_5;
    FUNC_19();
   }
   FUNC_6(VAR_23, VAR_21);
  }
  for (VAR_20 = 0; VAR_20 < VAR_16; VAR_20++) {
   VAR_25 = FUNC_12(VAR_17[VAR_20], &VAR_27, 10);
   if (*VAR_27 == '\0') {
    if (VAR_25 < 0)
     FUNC_14();
    VAR_26 = VAR_25;

    VAR_21 = FUNC_7(VAR_23, VAR_1,
        VAR_26, &VAR_31);
    if (VAR_21 == ((void*)0))
     FUNC_17(1, "procstat_getprocs()");
    if (VAR_31 != 0)
     FUNC_4(VAR_22, VAR_23, VAR_21);
    FUNC_6(VAR_23, VAR_21);
   } else {
    VAR_24 = FUNC_8(VAR_17[VAR_20]);
    if (VAR_24 == ((void*)0)) {
     FUNC_15("procstat_open()");
     continue;
    }
    VAR_21 = FUNC_7(VAR_24, VAR_1,
        -1, &VAR_31);
    if (VAR_21 == ((void*)0))
     FUNC_17(1, "procstat_getprocs()");
    if (VAR_31 != 0)
     FUNC_4(VAR_22, VAR_24, VAR_21);
    FUNC_6(VAR_24, VAR_21);
    FUNC_5(VAR_24);
   }

   VAR_15 |= VAR_5;
  }

  FUNC_16(VAR_22->xocontainer);
  FUNC_16("procstat");
  FUNC_18();
  if (VAR_19)
   FUNC_11(VAR_19);
 } while (VAR_19);

 FUNC_5(VAR_23);

 FUNC_0(0);
}

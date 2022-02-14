
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct procstat {int dummy; } ;
struct passwd {int pw_uid; } ;
struct kinfo_proc {scalar_t__ ki_stat; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 int VAR_4 ;
 int FUNC_1 (struct procstat*,struct kinfo_proc*) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int) ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_4 (char*) ;
 int FUNC_5 (int,char**,char*) ;
 struct passwd* FUNC_6 (int *) ;
 int FUNC_7 (int ) ;
 int * VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int * VAR_9 ;
 int * VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct procstat*) ;
 int FUNC_10 (struct procstat*,struct kinfo_proc*) ;
 struct kinfo_proc* FUNC_11 (struct procstat*,int,int,int*) ;
 struct procstat* FUNC_12 (int *,int *) ;
 struct procstat* FUNC_13 () ;
 int FUNC_14 (char) ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_15 () ;
 int VAR_15 ;
 int FUNC_16 (char*) ;

int
FUNC_17(int VAR_16, char **VAR_17)
{
 struct kinfo_proc *VAR_18;
 struct passwd *VAR_19;
 struct procstat *VAR_20;
 int VAR_21, VAR_22, VAR_23;
 int VAR_24, VAR_25;

 VAR_21 = 0;
 VAR_23 = VAR_1;
 VAR_9 = VAR_6 = ((void*)0);
 while ((VAR_22 = FUNC_5(VAR_16, VAR_17, "fmnp:su:vN:M:")) != -1)
  switch((char)VAR_22) {
  case 'f':
   VAR_5 = 1;
   break;
  case 'M':
   VAR_6 = VAR_10;
   break;
  case 'N':
   VAR_9 = VAR_10;
   break;
  case 'm':
   VAR_7 = 1;
   break;
  case 'n':
   VAR_8 = 1;
   break;
  case 'p':
   if (VAR_12++)
    FUNC_15();
   if (!FUNC_7(*VAR_10)) {
    FUNC_16("-p requires a process id");
    FUNC_15();
   }
   VAR_23 = VAR_0;
   VAR_21 = FUNC_0(VAR_10);
   break;
  case 's':
   VAR_13 = 1;
   break;
  case 'u':
   if (VAR_14++)
    FUNC_15();
   if (!(VAR_19 = FUNC_6(VAR_10)))
    FUNC_2(1, "%s: unknown uid", VAR_10);
   VAR_23 = VAR_2;
   VAR_21 = VAR_19->pw_uid;
   break;
  case 'v':
   VAR_15 = 1;
   break;
  case '?':
  default:
   FUNC_15();
  }

 if (*(VAR_17 += VAR_11)) {
  for (; *VAR_17; ++VAR_17) {
   if (FUNC_4(*VAR_17))
    VAR_4 = 1;
  }
  if (!VAR_4)
   FUNC_3(1);
 }

 if (VAR_5 && !VAR_4) {

  if (FUNC_4(".") == 0)
   FUNC_3(1);
  VAR_4 = 1;
 }

 if (VAR_6 != ((void*)0))
  VAR_20 = FUNC_12(VAR_9, VAR_6);
 else
  VAR_20 = FUNC_13();
 if (VAR_20 == ((void*)0))
  FUNC_2(1, "procstat_open()");
 VAR_18 = FUNC_11(VAR_20, VAR_23, VAR_21, &VAR_24);
 if (VAR_18 == ((void*)0))
  FUNC_2(1, "procstat_getprocs()");




 if (VAR_8)
  FUNC_8("%s",
"USER     CMD          PID   FD  DEV    INUM       MODE SZ|DV R/W");
 else
  FUNC_8("%s",
"USER     CMD          PID   FD MOUNT      INUM MODE         SZ|DV R/W");
 if (VAR_4 && VAR_5 == 0)
  FUNC_8(" NAME\n");
 else
  FUNC_14('\n');




 for (VAR_25 = 0; VAR_25 < VAR_24; VAR_25++) {
  if (VAR_18[VAR_25].ki_stat == VAR_3)
   continue;
  FUNC_1(VAR_20, &VAR_18[VAR_25]);
 }
 FUNC_10(VAR_20, VAR_18);
 FUNC_9(VAR_20);
 return (0);
}

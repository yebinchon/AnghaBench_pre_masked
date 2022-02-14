
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int pid_t ;
struct TYPE_2__ {int sc_canptrace_errno; int sc_canktrace_errno; int sc_cansighup_errno; int sc_cansigsegv_errno; int sc_cansee_errno; int sc_cansched_errno; char* sc_name; int sc_cred2; int sc_cred1; } ;


 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;





 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 int VAR_8 ;
 char* FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int,int ) ;
 int FUNC_8 (char*,int ,int ,int) ;
 char* FUNC_9 (char*) ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int,int *,int ) ;
 TYPE_1__* VAR_9 ;
 int FUNC_12 (int ,int,int ) ;
 int FUNC_13 (int) ;
 int VAR_10 ;
 int FUNC_14 (char*) ;
 int FUNC_15 (int,int *,int ) ;

__attribute__((used)) static int
FUNC_16(int VAR_11)
{
 pid_t VAR_12, VAR_13;
 char *VAR_14, *VAR_15;
 int VAR_16, VAR_17, VAR_18;

 for (VAR_18 = 0; VAR_18 < VAR_2+1; VAR_18++) {



  VAR_12 = FUNC_4();
  switch (VAR_12) {
  case -1:
   return (-1);
  case 0:

   VAR_16 = FUNC_1(VAR_9[VAR_11].sc_cred2);
   if (VAR_16) {
    FUNC_10("cred_set");
    return (VAR_16);
   }

   FUNC_13(200);
   FUNC_3(0);
  default:

   break;
  }
  FUNC_13(1);




  VAR_13 = FUNC_4();
  switch (VAR_13) {
  case -1:
   return (-1);

  case 0:

   VAR_16 = FUNC_1(VAR_9[VAR_11].sc_cred1);
   if (VAR_16) {
    FUNC_10("cred_set");
    return (VAR_16);
   }
   VAR_8 = 0;
   switch (VAR_18) {
   case 132:
    VAR_16 = FUNC_11(VAR_4, VAR_12, ((void*)0), 0);
    VAR_16 = VAR_8;
    VAR_14 = "ptrace";
    VAR_17 =
        VAR_9[VAR_11].sc_canptrace_errno;
    break;
   case 133:
    VAR_15 = FUNC_9("/tmp/testuid_ktrace.XXXXXX");
    if (VAR_15 == ((void*)0)) {
     VAR_16 = VAR_8;
     FUNC_10("mktemp");
     break;
    }
    VAR_16 = FUNC_8(VAR_15, VAR_1,
        VAR_0, VAR_12);
    VAR_16 = VAR_8;
    VAR_14 = "ktrace";
    VAR_17 =
        VAR_9[VAR_11].sc_canktrace_errno;
    FUNC_14(VAR_15);
    break;
   case 129:
    VAR_16 = FUNC_7(VAR_12, VAR_5);
    VAR_16 = VAR_8;
    VAR_14 = "sighup";
    VAR_17 =
        VAR_9[VAR_11].sc_cansighup_errno;
    break;
   case 128:
    VAR_16 = FUNC_7(VAR_12, VAR_7);
    VAR_16 = VAR_8;
    VAR_14 = "sigsegv";
    VAR_17 =
        VAR_9[VAR_11].sc_cansigsegv_errno;
    break;
   case 130:
    FUNC_6(VAR_3, VAR_12);
    VAR_16 = VAR_8;
    VAR_14 = "see";
    VAR_17 =
        VAR_9[VAR_11].sc_cansee_errno;
    break;
   case 131:
    VAR_16 = FUNC_12(VAR_3, VAR_12,
       0);
    VAR_16 = VAR_8;
    VAR_14 = "sched";
    VAR_17 =
        VAR_9[VAR_11].sc_cansched_errno;
    break;
   default:
    VAR_14 = "broken";
   }

   if (VAR_16 != VAR_17) {
    FUNC_5(VAR_10,
        "[%s].%s: expected %s, got %s\n  ",
        VAR_9[VAR_11].sc_name, VAR_14,
        FUNC_2(VAR_17),
        FUNC_2(VAR_16));
    FUNC_0(VAR_10,
        VAR_9[VAR_11].sc_cred1);
    FUNC_0(VAR_10,
        VAR_9[VAR_11].sc_cred2);
    FUNC_5(VAR_10, "\n");
   }

   FUNC_3(0);

  default:

   break;
  }

  VAR_16 = FUNC_15(VAR_13, ((void*)0), 0);






  FUNC_7(VAR_12, VAR_6);
  VAR_16 = FUNC_15(VAR_13, ((void*)0), 0);
 }

 return (0);
}

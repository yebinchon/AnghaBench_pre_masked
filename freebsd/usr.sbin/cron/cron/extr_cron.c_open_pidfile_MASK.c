
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pidfile ;
typedef int buf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 () ;
 int FUNC_2 (char*,int ,char*,char*) ;
 int * VAR_7 ;
 int * FUNC_3 (char*,int,int*) ;
 int FUNC_4 (char*,int,char*,...) ;
 char* FUNC_5 (scalar_t__) ;

__attribute__((used)) static void
FUNC_6(void)
{
 char VAR_8[VAR_2];
 char VAR_9[VAR_3];
 int VAR_10;

 (void) FUNC_4(VAR_8, sizeof(VAR_8), VAR_5, VAR_4);
 VAR_7 = FUNC_3(VAR_8, 0600, &VAR_10);
 if (VAR_7 == ((void*)0)) {
  if (VAR_6 == VAR_0) {
   FUNC_4(VAR_9, sizeof(VAR_9),
       "cron already running, pid: %d", VAR_10);
  } else {
   FUNC_4(VAR_9, sizeof(VAR_9),
       "can't open or create %s: %s", VAR_8,
       FUNC_5(VAR_6));
  }
  FUNC_2("CRON", FUNC_1(), "DEATH", VAR_9);
  FUNC_0(VAR_1, "%s", VAR_9);
 }
}

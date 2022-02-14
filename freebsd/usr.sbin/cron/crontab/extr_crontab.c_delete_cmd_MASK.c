
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int n ;


 char* FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_1 (int ,char*,char*) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (int ,char*,char*) ;
 int VAR_9 ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int ,char*,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (char*,int,char*) ;
 int VAR_10 ;
 scalar_t__ FUNC_9 (char*) ;

__attribute__((used)) static void
FUNC_10() {
 char VAR_11[VAR_3];
 int VAR_12, VAR_13;

 if (!VAR_9 && FUNC_5(VAR_6)) {
  (void)FUNC_3(VAR_10, "remove crontab for %s? ", VAR_7);
  VAR_13 = VAR_12 = FUNC_4();
  while (VAR_12 != '\n' && VAR_12 != VAR_1)
   VAR_12 = FUNC_4();
  if (VAR_13 != 'y' && VAR_13 != 'Y')
   return;
 }

 FUNC_6(VAR_5, VAR_4, "DELETE", VAR_7);
 (void) FUNC_8(VAR_11, sizeof(VAR_11), FUNC_0(VAR_7));
 if (FUNC_9(VAR_11)) {
  if (VAR_8 == VAR_0)
   FUNC_2(VAR_2, "no crontab for %s", VAR_7);
  else
   FUNC_1(VAR_2, "%s", VAR_11);
 }
 FUNC_7();
}

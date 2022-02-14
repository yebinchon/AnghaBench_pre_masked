
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (unsigned int) ;
 int FUNC_1 (int ) ;
 char* FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int ) ;
 char VAR_5 ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ,char*,int) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (int ,char*,int) ;
 scalar_t__ VAR_6 ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static void
FUNC_10(int VAR_7)
{
 char VAR_8;
 int VAR_9 = 0;

 VAR_8 = VAR_7;
 FUNC_5(VAR_3, &VAR_8, 1);
 if (FUNC_4(FUNC_9(VAR_0)) > 0 && VAR_7 != '\r')
  FUNC_8(FUNC_4(FUNC_9(VAR_0)));
 if (!FUNC_1(FUNC_9(VAR_1))) {
  if (FUNC_4(FUNC_9(VAR_4)) > 0 && VAR_7 == '\r')
   FUNC_8(FUNC_4(FUNC_9(VAR_4)));
  return;
 }
tryagain:
 VAR_6 = 0;
 FUNC_0((unsigned int)FUNC_3(VAR_2));
 FUNC_7(VAR_3, &VAR_8, 1);
 FUNC_0(0);
 if (VAR_6) {
  FUNC_6("\r\ntimeout error (%s)\r\n", FUNC_2(VAR_7));
  if (VAR_9++ > 3)
   return;
  FUNC_5(VAR_3, &VAR_5, 1);
  goto tryagain;
 }
}

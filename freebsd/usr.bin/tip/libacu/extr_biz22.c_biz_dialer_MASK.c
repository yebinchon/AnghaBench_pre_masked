
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int cbuf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 scalar_t__ VAR_4 ;
 int FUNC_4 (int ,char*,char*,char*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*,int,char*,char*) ;
 int FUNC_8 (char*,char*,int) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_12(char *VAR_5, char *VAR_6)
{
 int VAR_7 = 0;
 char VAR_8[40];

 if (FUNC_1(FUNC_10(VAR_3)))
  FUNC_6("\nstarting call...");




 if (FUNC_2("\02K\r")) {
  FUNC_6("can't initialize bizcomp...");
  return (0);
 }
 (void)FUNC_8(VAR_8, "\02.\r", sizeof VAR_8);
 VAR_8[1] = *VAR_6;
 if (FUNC_2(VAR_8)) {
  FUNC_6("can't set dialing mode...");
  return (0);
 }
 (void)FUNC_7(VAR_8, sizeof(VAR_8), "\02D%s\r", VAR_5);
 FUNC_11(VAR_1, VAR_8, FUNC_9(VAR_8));
 if (!FUNC_3("7\r")) {
  FUNC_6("can't get dial tone...");
  return (0);
 }
 if (FUNC_1(FUNC_10(VAR_3)))
  FUNC_6("ringing...");





 VAR_7 = FUNC_3("1\r");
 if (VAR_4)
  FUNC_0();
 return (VAR_7);
}

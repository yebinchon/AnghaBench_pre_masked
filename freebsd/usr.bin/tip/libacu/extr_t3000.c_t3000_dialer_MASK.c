
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,...) ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*,int,char*,int ) ;
 int VAR_9 ;
 int FUNC_7 (char*) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 (char*) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (int ,char*,int) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 (int ,struct termios*) ;
 int FUNC_16 (int ,int ,struct termios*) ;
 int FUNC_17 (int ) ;

int
FUNC_18(char *VAR_10, char *VAR_11)
{
 char *VAR_12;
 struct termios VAR_13;




 if (FUNC_0(FUNC_17(VAR_6)))
  FUNC_4("Using \"%s\"\n", VAR_11);

 FUNC_15(VAR_1, &VAR_13);
 VAR_13.c_cflag |= VAR_3;
 FUNC_16(VAR_1, VAR_5, &VAR_13);



 if (!FUNC_11()) {
badsynch:
  FUNC_4("can't synchronize with t3000\n");



  return (0);
 }
 FUNC_13(VAR_1, "AT E0\r", 6);
 FUNC_5(1);




 FUNC_14(VAR_1, VAR_4);
 FUNC_13(VAR_1, "AT E0 H0 Q0 X4 V1\r", 18);
 if (!FUNC_10("\r\nOK\r\n"))
  goto badsynch;
 FUNC_1(VAR_9);
 FUNC_13(VAR_1, "AT D", 4);
 for (VAR_12 = VAR_10; *VAR_12; VAR_12++)
  if (*VAR_12 == '=')
   *VAR_12 = ',';
 FUNC_13(VAR_1, VAR_10, FUNC_7(VAR_10));
 FUNC_13(VAR_1, "\r", 1);
 VAR_7 = FUNC_8();







 if (VAR_8)
  FUNC_9();
 return (VAR_7);
}

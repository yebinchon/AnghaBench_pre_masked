
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
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_10 ;
 int FUNC_1 (char) ;
 int FUNC_2 (int ) ;
 char FUNC_3 (char*) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int ,char*,char*,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (char*,int,char*,int ) ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_10 (char*) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,struct termios*) ;
 int FUNC_13 (int ,int ,struct termios*) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ,char*,int) ;

int
FUNC_16(char *VAR_13, char *VAR_14)
{
 char *VAR_15;
 int VAR_16 = 0;
 char VAR_17;
 struct termios VAR_18;



 if (FUNC_5() == 0)
  return(0);
 if (FUNC_0(FUNC_14(VAR_9)))
  FUNC_8("\ndialing...");
 FUNC_2(VAR_12);
 FUNC_12(VAR_4, &VAR_18);
 VAR_18.c_cflag |= VAR_6;
 FUNC_13(VAR_4, VAR_8, &VAR_18);
 FUNC_11(VAR_4, VAR_7);
 FUNC_15(VAR_4, "ATv0\r", 5);
 FUNC_3("\r");
 FUNC_3("\r");
 FUNC_15(VAR_4, "ATTD", 4);
 for (VAR_15 = VAR_13; *VAR_15; VAR_15++)
  if (*VAR_15 == '=')
   *VAR_15 = ',';
 FUNC_15(VAR_4, VAR_13, FUNC_10(VAR_13));
 VAR_11 = VAR_1;
 FUNC_15(VAR_4, "\r", 1);
 VAR_16 = 0;
 if (FUNC_3("\r")) {
  if ((VAR_17 = FUNC_3("01234")) != '1')
   FUNC_1(VAR_17);
  else
   VAR_16 = 1;
 }
 if (VAR_16)
  VAR_11 = VAR_0;
 else {
  VAR_11 = VAR_3;
  return (VAR_16);
 }
 FUNC_11(VAR_4, VAR_7);







 if (VAR_10)
  FUNC_4();
 return (VAR_16);
}

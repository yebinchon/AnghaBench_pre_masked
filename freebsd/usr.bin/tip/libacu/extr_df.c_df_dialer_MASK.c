
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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int) ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct termios*) ;
 int FUNC_3 (struct termios*,int) ;
 int FUNC_4 (struct termios*,int) ;
 int FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int,int ,int*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (int,char*,int) ;
 scalar_t__ FUNC_10 (int ) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int) ;
 int VAR_13 ;
 int FUNC_13 (char*) ;
 int FUNC_14 (int,int ) ;
 int FUNC_15 (int,struct termios*) ;
 int FUNC_16 (int,int ,struct termios*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int,char*,int) ;

__attribute__((used)) static int
FUNC_19(char *VAR_14, char *VAR_15, int VAR_16)
{
 int VAR_17 = VAR_1;
 struct termios VAR_18;
 int VAR_19 = 0;
 char VAR_20 = '\0';

 FUNC_15(VAR_17, &VAR_18);
 VAR_18.c_cflag |= VAR_2;
 FUNC_16(VAR_17, VAR_7, &VAR_18);
 if (FUNC_10(VAR_4)) {
  FUNC_8("connection timed out\r\n");
  FUNC_5();
  return (0);
 }
 if (FUNC_1(FUNC_17(VAR_11)))
  FUNC_8("\ndialing...");
 FUNC_6(VAR_13);
 FUNC_11(VAR_3, VAR_12);
 FUNC_0(5 * FUNC_13(VAR_14) + 10);
 FUNC_14(VAR_17, VAR_5);
 FUNC_18(VAR_17, "\001", 1);
 FUNC_12(1);
 FUNC_18(VAR_17, "\002", 1);
 FUNC_18(VAR_17, VAR_14, FUNC_13(VAR_14));
 FUNC_9(VAR_17, &VAR_20, 1);







 return (VAR_20 == 'A');
}

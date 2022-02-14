
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
 int FUNC_1 (int,int) ;
 scalar_t__ VAR_7 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char,char*) ;
 scalar_t__ FUNC_5 (char) ;
 int FUNC_6 (int ,char*,char*,char*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (char*,int,char*,int ) ;
 int VAR_8 ;
 char* FUNC_10 (char*,char) ;
 int FUNC_11 (int ,int ) ;
 int FUNC_12 (int ,struct termios*) ;
 int FUNC_13 (int ,int ,struct termios*) ;
 char FUNC_14 (char) ;
 int FUNC_15 (int ) ;
 int FUNC_16 () ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ,char*,int) ;

int
FUNC_19(char *VAR_9, char *VAR_10)
{
 char *VAR_11;
 int VAR_12 = 0;
 char *VAR_13, VAR_14[80];
 struct termios VAR_15;




 if (!FUNC_17(VAR_1)) {
  FUNC_8("can't synchronize with ventel\n");



  return (0);
 }
 if (FUNC_0(FUNC_15(VAR_6)))
  FUNC_8("\ndialing...");
 FUNC_3(VAR_8);
 FUNC_12(VAR_1, &VAR_15);
 VAR_15.c_cflag |= VAR_3;
 FUNC_13(VAR_1, VAR_5, &VAR_15);
 FUNC_2("#k$\r$\n$D$I$A$L$:$ ");
 for (VAR_11 = VAR_9; *VAR_11; VAR_11++) {
  FUNC_1(1, 10);
  FUNC_18(VAR_1, VAR_11, 1);
 }
 FUNC_1(1, 10);
 FUNC_18(VAR_1, "\r", 1);
 FUNC_4('\n', VAR_14);
 if (FUNC_4('\n', VAR_14))
  VAR_12 = FUNC_4('!', VAR_14);
 FUNC_11(VAR_1, VAR_4);







 if (VAR_7)
  FUNC_16();
 if (VAR_12 || VAR_7 || !FUNC_0(FUNC_15(VAR_6)))
  return (VAR_12);

 VAR_11 = FUNC_10(VAR_14, '\r');
 if (VAR_11)
  *VAR_11 = '\0';
 for (VAR_11 = VAR_14; (VAR_11 = FUNC_10(VAR_11, ' ')) != ((void*)0); VAR_11++)
  if (VAR_11[1] == ' ')
   break;
 if (VAR_11) {
  while (*VAR_11 == ' ')
   VAR_11++;
  VAR_13 = VAR_11;
  while (*VAR_11) {
   if (FUNC_5(*VAR_11))
    *VAR_11 = FUNC_14(*VAR_11);
   VAR_11++;
  }
  FUNC_8("%s...", VAR_13);
 }
 return (VAR_12);
}

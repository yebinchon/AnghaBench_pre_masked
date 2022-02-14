
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct termios {int c_cflag; } ;


 char* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (int) ;
 int VAR_13 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_14 ;
 int FUNC_2 (int ) ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int VAR_17 ;
 int FUNC_6 (int,int ) ;
 int FUNC_7 (char*,int) ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (int) ;
 int VAR_18 ;
 int FUNC_12 (char*) ;
 int FUNC_13 (int ,struct termios*) ;
 int FUNC_14 (int ,int ,struct termios*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int*) ;
 int FUNC_17 (int ,char*,int) ;

int
FUNC_18(char *VAR_19, char *VAR_20)
{
 int VAR_21, VAR_22;
 int VAR_23;
 struct termios VAR_24;

 if (FUNC_1(FUNC_15(VAR_12)))
  FUNC_8("\nstarting call...");
 if ((VAR_15 = FUNC_7(VAR_20, 1)) < 0) {
  if (VAR_16 == VAR_1)
   FUNC_8("line busy...");
  else
   FUNC_8("acu open error...");
  return (0);
 }
 if (FUNC_9(VAR_17)) {
  FUNC_6(VAR_14, VAR_7);
  FUNC_2(VAR_15);
  return (0);
 }
 FUNC_10(VAR_5, VAR_13);
 VAR_23 = 5 * FUNC_12(VAR_19);
 FUNC_0(VAR_23 < 30 ? 30 : VAR_23);
 if ((VAR_14 = FUNC_5()) == 0) {



  FUNC_10(VAR_5, VAR_10);
  FUNC_10(VAR_6, VAR_10);
  FUNC_10(VAR_8, VAR_10);
  FUNC_11(2);
  VAR_22 = FUNC_17(VAR_15, VAR_19, VAR_21 = FUNC_12(VAR_19));
  FUNC_3(VAR_22 != VAR_21);
 }



 if ((VAR_3 = FUNC_7(VAR_0, 2)) < 0) {
  if (VAR_16 == VAR_2)
   FUNC_8("lost carrier...");
  else
   FUNC_8("dialup line open failed...");
  FUNC_0(0);
  FUNC_6(VAR_14, VAR_7);
  FUNC_2(VAR_15);
  return (0);
 }
 FUNC_0(0);
 FUNC_13(VAR_15, &VAR_24);
 VAR_24.c_cflag |= VAR_4;
 FUNC_14(VAR_15, VAR_11, &VAR_24);
 FUNC_10(VAR_5, VAR_9);
 while ((VAR_22 = FUNC_16(&VAR_21)) != VAR_14 && VAR_22 != -1)
  ;
 FUNC_4(VAR_18);
 FUNC_2(VAR_15);
 if (VAR_21 != 0) {
  FUNC_2(VAR_3);
  return (0);
 }
 return (1);
}

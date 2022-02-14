
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct termios {int dummy; } ;
typedef int sig_t ;
struct TYPE_2__ {int c_cflag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,char*,char*,char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int) ;
 int FUNC_7 (char*,int,char*,char*) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (int ,struct termios*) ;
 int FUNC_10 (int ,int ,struct termios*) ;
 TYPE_1__ VAR_9 ;
 int FUNC_11 (int ) ;
 int FUNC_12 (char*,int) ;

int
FUNC_13(char *VAR_10, char *VAR_11)
{
 sig_t VAR_12;
 int VAR_13;
 int VAR_14 = FUNC_3(FUNC_11(VAR_0)) < 1200;
 char VAR_15[50];
 struct termios VAR_16;




 FUNC_12("I\r", 1 + VAR_14);
 FUNC_12("I\r", 1 + VAR_14);
 FUNC_12("I\r", 1 + VAR_14);
 FUNC_12("\005\r", 2 + VAR_14);
 if (!FUNC_1("READY")) {
  FUNC_4("can't synchronize with vadic 3451\n");



  return (0);
 }
 FUNC_9(VAR_1, &VAR_16);
 VAR_9.c_cflag |= VAR_3;
 FUNC_10(VAR_1, VAR_7, &VAR_16);
 FUNC_6(1);
 FUNC_12("D\r", 2 + VAR_14);
 if (!FUNC_1("NUMBER?")) {
  FUNC_4("Vadic will not accept dial command\n");



  return (0);
 }
 (void)FUNC_7(VAR_15, sizeof VAR_15, "%s\r", VAR_10);
 FUNC_12(VAR_15, 1 + VAR_14);
 if (!FUNC_1(VAR_15)) {
  FUNC_4("Vadic will not accept phone number\n");



  return (0);
 }
 VAR_12 = FUNC_5(VAR_4,VAR_5);





 FUNC_12("\r", 1 + VAR_14);
 FUNC_12("\r", 1 + VAR_14);
 if (!FUNC_1("DIALING:")) {
  FUNC_4("Vadic failed to dial\n");



  return (0);
 }
 if (FUNC_0(FUNC_11(VAR_8)))
  FUNC_4("\ndialing...");
 VAR_13 = FUNC_1("ON LINE");
 FUNC_5(VAR_4, VAR_12);
 if (!VAR_13) {
  FUNC_4("call failed\n");



  return (0);
 }
 FUNC_8(VAR_1, VAR_6);
 return (1);
}

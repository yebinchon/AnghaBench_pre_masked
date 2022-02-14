
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (int,char*,char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,int ,int*) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*) ;

__attribute__((used)) static void
FUNC_5(char *VAR_1)
{
 int VAR_2;

 if (!FUNC_4(VAR_1, "off")) {
  VAR_2 = 0x01;
 } else if (!FUNC_4(VAR_1, "on")) {
  VAR_2 = 0x02;
 } else {
  FUNC_3();
  FUNC_1(1, "argument to -S must be either on or off");
 }

 if (FUNC_2(0, VAR_0, &VAR_2) == -1) {
  FUNC_3();
  FUNC_0(1, "turning %s vty switching",
       VAR_2 == 0x01 ? "off" : "on");
 }
}

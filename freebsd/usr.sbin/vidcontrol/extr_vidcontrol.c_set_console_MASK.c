
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 () ;
 scalar_t__ FUNC_5 (char*) ;
 scalar_t__ FUNC_6 (char*,char*) ;

__attribute__((used)) static void
FUNC_7(char *VAR_1)
{
 int VAR_2;

 if(!VAR_1 || FUNC_6(VAR_1,"0123456789") != FUNC_5(VAR_1)) {
  FUNC_4();
  FUNC_2(1, "bad console number");
 }

 VAR_2 = FUNC_0(VAR_1);

 if (VAR_2 < 1 || VAR_2 > 16) {
  FUNC_4();
  FUNC_2(1, "console number out of range");
 } else if (FUNC_3(0, VAR_0, VAR_2) == -1) {
  FUNC_4();
  FUNC_1(1, "switching vty");
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int ,int ,int*) ;
 int FUNC_4 () ;
 int FUNC_5 (char*,char*) ;

__attribute__((used)) static void
FUNC_6(char *VAR_1)
{
 int VAR_2;

 if (!FUNC_5(VAR_1, "off")) {
  VAR_2 = 0;
 } else {
  VAR_2 = FUNC_0(VAR_1);

  if ((*VAR_1 == '\0') || (VAR_2 < 1)) {
   FUNC_4();
   FUNC_2(1, "argument must be a positive number");
  }
 }

 if (FUNC_3(0, VAR_0, &VAR_2) == -1) {
  FUNC_4();
  FUNC_1(1, "setting screensaver period");
 }
}

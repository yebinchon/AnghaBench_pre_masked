
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int *) ;
 int FUNC_1 (char*,char*,char*) ;
 char* VAR_0 ;
 int FUNC_2 (char*) ;
 int FUNC_3 () ;
 int FUNC_4 (int ) ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 (char*) ;
 int VAR_1 ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (char*,char*) ;
 int FUNC_10 () ;

int
FUNC_11(int VAR_2, char *VAR_3[])
{
 FUNC_0(&VAR_1);

 if (VAR_2 == 1 || FUNC_9(VAR_3[1], "show") == 0) {
  FUNC_6();
  FUNC_3();
 } else if (FUNC_9(VAR_3[1], "add") == 0) {
  if (VAR_2 < 5)
   FUNC_10();
  FUNC_1(VAR_3[2], VAR_3[3], VAR_3[4]);
 } else if (FUNC_9(VAR_3[1], "delete") == 0) {
  if (VAR_2 < 3)
   FUNC_10();
  FUNC_2(VAR_3[2]);
 } else if (FUNC_9(VAR_3[1], "flush") == 0) {
  FUNC_6();
  FUNC_5();
 } else if (FUNC_9(VAR_3[1], "install") == 0) {
  if (VAR_2 < 3)
   FUNC_10();
  VAR_0 = VAR_3[2];
  FUNC_7(VAR_0);
  FUNC_8();
 } else
  FUNC_10();

 FUNC_4(0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(int VAR_0, int *VAR_1,
          int *VAR_2, int *VAR_3)
{

 if (VAR_0 % 2 == 0) {
  if (VAR_0 == 2) {
   *VAR_1 = 2;
   *VAR_2 = 1;
   *VAR_3 = 1;
  } else if (VAR_0 % 4 == 0) {
   *VAR_1 = 2;
   *VAR_2 = VAR_0 / 4;
   *VAR_3 = 2;
  } else if (VAR_0 % 6 == 0) {
   *VAR_1 = 3;
   *VAR_2 = VAR_0 / 6;
   *VAR_3 = 2;
  } else if (VAR_0 % 5 == 0) {
   *VAR_1 = 5;
   *VAR_2 = VAR_0 / 10;
   *VAR_3 = 2;
  } else if (VAR_0 % 14 == 0) {
   *VAR_1 = 7;
   *VAR_2 = VAR_0 / 14;
   *VAR_3 = 2;
  }
 } else {
  if (VAR_0 == 3 || VAR_0 == 5 || VAR_0 == 7) {
   *VAR_1 = VAR_0;
   *VAR_2 = 1;
   *VAR_3 = 1;
  } else {
   *VAR_1 = VAR_0 / 3;
   *VAR_2 = 1;
   *VAR_3 = 3;
  }
 }
}

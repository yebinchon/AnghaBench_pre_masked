
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned int VAR_0,
          unsigned int *VAR_1 ,
          unsigned int *VAR_2 ,
          unsigned int *VAR_3 )
{

 if (VAR_0 % 2 == 0) {
  unsigned int VAR_4 = VAR_0 / 2;

  if (VAR_4 == 1 || VAR_4 == 2 || VAR_4 == 3 || VAR_4 == 5) {
   *VAR_1 = 2;
   *VAR_2 = 1;
   *VAR_3 = VAR_4;
  } else if (VAR_4 % 2 == 0) {
   *VAR_1 = 2;
   *VAR_2 = VAR_4 / 2;
   *VAR_3 = 2;
  } else if (VAR_4 % 3 == 0) {
   *VAR_1 = 3;
   *VAR_2 = VAR_4 / 3;
   *VAR_3 = 2;
  } else if (VAR_4 % 7 == 0) {
   *VAR_1 = 7;
   *VAR_2 = VAR_4 / 7;
   *VAR_3 = 2;
  }
 } else if (VAR_0 == 3 || VAR_0 == 9) {
  *VAR_1 = 3;
  *VAR_2 = 1;
  *VAR_3 = VAR_0 / 3;
 } else if (VAR_0 == 5 || VAR_0 == 7) {
  *VAR_1 = VAR_0;
  *VAR_2 = 1;
  *VAR_3 = 1;
 } else if (VAR_0 == 15) {
  *VAR_1 = 3;
  *VAR_2 = 1;
  *VAR_3 = 5;
 } else if (VAR_0 == 21) {
  *VAR_1 = 7;
  *VAR_2 = 1;
  *VAR_3 = 3;
 } else if (VAR_0 == 35) {
  *VAR_1 = 7;
  *VAR_2 = 1;
  *VAR_3 = 5;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;

__attribute__((used)) static void FUNC_1(int VAR_0, int VAR_1, int *VAR_2,
    int *VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 *VAR_3 = 0;
 if (VAR_1 == 0) {
  *VAR_2 = 0;
  return;
 }
 *VAR_2 = VAR_0/VAR_1;
 VAR_4 = VAR_0 % VAR_1;
 if (VAR_4) {
  while (VAR_4 <= VAR_1) {
   VAR_4 *= 10;
   VAR_5++;
  }
  *VAR_3 = (VAR_4 / VAR_1) * FUNC_0(10, 6 - VAR_5);
 }
}

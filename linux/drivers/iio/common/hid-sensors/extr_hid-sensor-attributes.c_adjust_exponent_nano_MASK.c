
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;
 int FUNC_1 (int,int) ;

__attribute__((used)) static void FUNC_2(int *VAR_0, int *VAR_1, int VAR_2,
      int VAR_3, int VAR_4)
{
 int VAR_5;
 int VAR_6;
 int VAR_7;
 int VAR_8;
 int VAR_9;

 if (VAR_4 > 0) {
  *VAR_0 = VAR_2 * FUNC_1(10, VAR_4);
  VAR_8 = 0;
  if (VAR_4 > 9) {
   *VAR_1 = 0;
   return;
  }
  for (VAR_6 = 0; VAR_6 < VAR_4; ++VAR_6) {
   VAR_5 = FUNC_1(10, 8 - VAR_6);
   VAR_7 = VAR_3 / VAR_5;
   VAR_8 += FUNC_1(10, VAR_4 - 1 - VAR_6) * VAR_7;
   VAR_3 = VAR_3 % VAR_5;
  }
  *VAR_0 += VAR_8;
  *VAR_1 = VAR_3 * FUNC_1(10, VAR_4);
 } else if (VAR_4 < 0) {
  VAR_4 = FUNC_0(VAR_4);
  if (VAR_4 > 9) {
   *VAR_0 = *VAR_1 = 0;
   return;
  }
  VAR_5 = FUNC_1(10, VAR_4);
  *VAR_0 = VAR_2 / VAR_5;
  VAR_9 = VAR_2 % VAR_5;
  VAR_8 = 0;
  for (VAR_6 = 0; VAR_6 < (9 - VAR_4); ++VAR_6) {
   VAR_5 = FUNC_1(10, 8 - VAR_6);
   VAR_7 = VAR_3 / VAR_5;
   VAR_8 += FUNC_1(10, 8 - VAR_4 - VAR_6) * VAR_7;
   VAR_3 = VAR_3 % VAR_5;
  }
  *VAR_1 = VAR_9 * FUNC_1(10, 9 - VAR_4) + VAR_8;
 } else {
  *VAR_0 = VAR_2;
  *VAR_1 = VAR_3;
 }
}

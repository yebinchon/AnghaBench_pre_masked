
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int) ;

__attribute__((used)) static void FUNC_1(int VAR_0, int VAR_1, int *VAR_2,
   int *VAR_3, int *VAR_4)
{
 int VAR_5, VAR_6, VAR_7, VAR_8, VAR_9 = VAR_1;
 for (VAR_5 = 1; VAR_5 <= 16; VAR_5++)
  for (VAR_6 = 1; VAR_6 <= 32; VAR_6++)
   for (VAR_7 = 1; VAR_7 <= 32; VAR_7++) {
    VAR_8 = FUNC_0(VAR_0 / VAR_6 * VAR_5 / VAR_7 - VAR_1);
    if (VAR_8 < VAR_9) {
     VAR_9 = VAR_8;
     *VAR_4 = VAR_5;
     *VAR_2 = VAR_6;
     *VAR_3 = VAR_7;
    }
   }
}

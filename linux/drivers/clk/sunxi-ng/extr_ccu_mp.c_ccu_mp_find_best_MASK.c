
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
__attribute__((used)) static void FUNC_0(unsigned long VAR_0, unsigned long VAR_1,
        unsigned int VAR_2, unsigned int VAR_3,
        unsigned int *VAR_4, unsigned int *VAR_5)
{
 unsigned long VAR_6 = 0;
 unsigned int VAR_7 = 0, VAR_8 = 0;
 unsigned int VAR_9, VAR_10;

 for (VAR_10 = 1; VAR_10 <= VAR_3; VAR_10 <<= 1) {
  for (VAR_9 = 1; VAR_9 <= VAR_2; VAR_9++) {
   unsigned long VAR_11 = VAR_0 / VAR_10 / VAR_9;

   if (VAR_11 > VAR_1)
    continue;

   if ((VAR_1 - VAR_11) < (VAR_1 - VAR_6)) {
    VAR_6 = VAR_11;
    VAR_7 = VAR_9;
    VAR_8 = VAR_10;
   }
  }
 }

 *VAR_4 = VAR_7;
 *VAR_5 = VAR_8;
}

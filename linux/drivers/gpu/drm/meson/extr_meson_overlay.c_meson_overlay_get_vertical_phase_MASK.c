
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int* VAR_0 ;

__attribute__((used)) static void FUNC_0(unsigned int VAR_1, int *VAR_2,
          int *VAR_3, bool VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;

 if (!VAR_4 && VAR_1 > (1 << 18))
  VAR_6 = (1 * VAR_1) >> 10;

 while ((VAR_5 + (4 << 8)) <= VAR_6) {
  VAR_7++;
  VAR_5 += 4 << 8;
 }

 *VAR_2 = (VAR_6 - VAR_5) >> 2;

 if (*VAR_2 > 0x100)
  VAR_7++;

 *VAR_2 = *VAR_2 & 0xff;

 if (VAR_7 > 5)
  VAR_7 = 5;

 *VAR_3 = VAR_0[VAR_7];
}

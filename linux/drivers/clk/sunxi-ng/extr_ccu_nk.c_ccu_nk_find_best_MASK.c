
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _ccu_nk {unsigned int min_k; unsigned int max_k; unsigned int min_n; unsigned int max_n; unsigned int k; unsigned int n; } ;



__attribute__((used)) static void FUNC_0(unsigned long VAR_0, unsigned long VAR_1,
        struct _ccu_nk *VAR_2)
{
 unsigned long VAR_3 = 0;
 unsigned int VAR_4 = 0, VAR_5 = 0;
 unsigned int VAR_6, VAR_7;

 for (VAR_6 = VAR_2->min_k; VAR_6 <= VAR_2->max_k; VAR_6++) {
  for (VAR_7 = VAR_2->min_n; VAR_7 <= VAR_2->max_n; VAR_7++) {
   unsigned long VAR_8 = VAR_0 * VAR_7 * VAR_6;

   if (VAR_8 > VAR_1)
    continue;

   if ((VAR_1 - VAR_8) < (VAR_1 - VAR_3)) {
    VAR_3 = VAR_8;
    VAR_4 = VAR_6;
    VAR_5 = VAR_7;
   }
  }
 }

 VAR_2->k = VAR_4;
 VAR_2->n = VAR_5;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _ccu_nm {unsigned long min_n; unsigned long max_n; unsigned long min_m; unsigned long max_m; unsigned long n; unsigned long m; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0, unsigned long VAR_1,
        struct _ccu_nm *VAR_2)
{
 unsigned long VAR_3 = 0;
 unsigned long VAR_4 = 0, VAR_5 = 0;
 unsigned long VAR_6, VAR_7;

 for (VAR_6 = VAR_2->min_n; VAR_6 <= VAR_2->max_n; VAR_6++) {
  for (VAR_7 = VAR_2->min_m; VAR_7 <= VAR_2->max_m; VAR_7++) {
   unsigned long VAR_8 = FUNC_0(VAR_0,
          VAR_6, VAR_7);

   if (VAR_8 > VAR_1)
    continue;

   if ((VAR_1 - VAR_8) < (VAR_1 - VAR_3)) {
    VAR_3 = VAR_8;
    VAR_4 = VAR_6;
    VAR_5 = VAR_7;
   }
  }
 }

 VAR_2->n = VAR_4;
 VAR_2->m = VAR_5;
}

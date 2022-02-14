
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _ccu_nkmp {unsigned long min_k; unsigned long max_k; unsigned long min_n; unsigned long max_n; unsigned long min_m; unsigned long max_m; unsigned long min_p; unsigned long max_p; unsigned long n; unsigned long k; unsigned long m; unsigned long p; } ;


 unsigned long FUNC_0 (unsigned long,unsigned long,unsigned long,unsigned long,unsigned long) ;

__attribute__((used)) static void FUNC_1(unsigned long VAR_0, unsigned long VAR_1,
          struct _ccu_nkmp *VAR_2)
{
 unsigned long VAR_3 = 0;
 unsigned long VAR_4 = 0, VAR_5 = 0, VAR_6 = 0, VAR_7 = 0;
 unsigned long VAR_8, VAR_9, VAR_10, VAR_11;

 for (VAR_9 = VAR_2->min_k; VAR_9 <= VAR_2->max_k; VAR_9++) {
  for (VAR_8 = VAR_2->min_n; VAR_8 <= VAR_2->max_n; VAR_8++) {
   for (VAR_10 = VAR_2->min_m; VAR_10 <= VAR_2->max_m; VAR_10++) {
    for (VAR_11 = VAR_2->min_p; VAR_11 <= VAR_2->max_p; VAR_11 <<= 1) {
     unsigned long VAR_12;

     VAR_12 = FUNC_0(VAR_0,
              VAR_8, VAR_9,
              VAR_10, VAR_11);

     if (VAR_12 > VAR_1)
      continue;

     if ((VAR_1 - VAR_12) < (VAR_1 - VAR_3)) {
      VAR_3 = VAR_12;
      VAR_4 = VAR_8;
      VAR_5 = VAR_9;
      VAR_6 = VAR_10;
      VAR_7 = VAR_11;
     }
    }
   }
  }
 }

 VAR_2->n = VAR_4;
 VAR_2->k = VAR_5;
 VAR_2->m = VAR_6;
 VAR_2->p = VAR_7;
}

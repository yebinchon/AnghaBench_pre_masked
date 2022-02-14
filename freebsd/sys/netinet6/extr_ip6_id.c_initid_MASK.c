
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u_int32_t ;
struct randomtab {unsigned int ru_x; unsigned int ru_m; unsigned int ru_seed; int ru_bits; unsigned int ru_seed2; unsigned int ru_b; unsigned int ru_n; size_t* pfacts; unsigned int ru_msb; scalar_t__ ru_out; scalar_t__ ru_reseed; scalar_t__ ru_counter; int ru_gen; void* ru_g; int ru_agen; void* ru_a; } ;


 unsigned int FUNC_0 () ;
 void* FUNC_1 (int ,size_t,unsigned int) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static void
FUNC_2(struct randomtab *VAR_1)
{
 u_int32_t VAR_2, VAR_3;
 int VAR_4 = 1;

 VAR_1->ru_x = FUNC_0() % VAR_1->ru_m;


 VAR_1->ru_seed = FUNC_0() & (~0U >> (32 - VAR_1->ru_bits + 1));
 VAR_1->ru_seed2 = FUNC_0() & (~0U >> (32 - VAR_1->ru_bits + 1));


 VAR_1->ru_b = (FUNC_0() & (~0U >> (32 - VAR_1->ru_bits))) | 1;
 VAR_1->ru_a = FUNC_1(VAR_1->ru_agen,
     (FUNC_0() & (~0U >> (32 - VAR_1->ru_bits))) & (~1U), VAR_1->ru_m);
 while (VAR_1->ru_b % 3 == 0)
  VAR_1->ru_b += 2;

 VAR_2 = FUNC_0() % VAR_1->ru_n;






 while (VAR_4) {
  for (VAR_3 = 0; VAR_1->pfacts[VAR_3] > 0; VAR_3++)
   if (VAR_2 % VAR_1->pfacts[VAR_3] == 0)
    break;

  if (VAR_1->pfacts[VAR_3] == 0)
   VAR_4 = 0;
  else
   VAR_2 = (VAR_2 + 1) % VAR_1->ru_n;
 }

 VAR_1->ru_g = FUNC_1(VAR_1->ru_gen, VAR_2, VAR_1->ru_n);
 VAR_1->ru_counter = 0;

 VAR_1->ru_reseed = VAR_0 + VAR_1->ru_out;
 VAR_1->ru_msb = VAR_1->ru_msb ? 0 : (1U << (VAR_1->ru_bits - 1));
}

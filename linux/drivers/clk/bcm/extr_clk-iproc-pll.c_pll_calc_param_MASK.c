
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct iproc_pll_vco_param {int ndiv_int; int ndiv_frac; int pdiv; unsigned long rate; } ;


 int VAR_0 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static int FUNC_1(unsigned long VAR_1,
   unsigned long VAR_2,
   struct iproc_pll_vco_param *VAR_3)
{
 u64 VAR_4, VAR_5, VAR_6;

 VAR_4 = VAR_1 / VAR_2;

 if (!VAR_4 || (VAR_4 > 255))
  return -VAR_0;

 VAR_6 = VAR_1 - (VAR_4 * VAR_2);
 VAR_6 <<= 20;





 VAR_6 += (VAR_2 / 2);
 VAR_5 = FUNC_0((u64)VAR_6, (u64)VAR_2);

 VAR_3->ndiv_int = VAR_4;
 VAR_3->ndiv_frac = VAR_5;
 VAR_3->pdiv = 1;

 VAR_3->rate = VAR_3->ndiv_int * VAR_2;
 VAR_6 = (u64)VAR_3->ndiv_frac * (u64)VAR_2;
 VAR_6 >>= 20;
 VAR_3->rate += VAR_6;

 return 0;
}

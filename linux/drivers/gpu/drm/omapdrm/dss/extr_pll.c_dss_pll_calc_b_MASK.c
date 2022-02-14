
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned long u64 ;
typedef unsigned int u32 ;
struct dss_pll_hw {int fint_max; int clkdco_min; } ;
struct dss_pll_clock_info {unsigned int n; unsigned int m; unsigned int mf; unsigned int* mX; unsigned int sd; unsigned long fint; unsigned long clkdco; unsigned long* clkout; } ;
struct dss_pll {struct dss_pll_hw* hw; } ;


 unsigned int FUNC_0 (unsigned long,int) ;
 int FUNC_1 (char*,unsigned long,unsigned long,...) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (unsigned long,int) ;
 unsigned long FUNC_4 (int ,unsigned long) ;

bool FUNC_5(const struct dss_pll *VAR_0, unsigned long VAR_1,
 unsigned long VAR_2, struct dss_pll_clock_info *VAR_3)
{
 unsigned long VAR_4, VAR_5, VAR_6;
 unsigned long VAR_7;
 unsigned long VAR_8;
 unsigned int VAR_9, VAR_10, VAR_11, VAR_12, VAR_13;
 const struct dss_pll_hw *VAR_14 = VAR_0->hw;

 FUNC_1("clkin %lu, target clkout %lu\n", VAR_1, VAR_2);


 VAR_9 = FUNC_0(VAR_1, VAR_14->fint_max);
 VAR_4 = VAR_1 / VAR_9;


 VAR_8 = FUNC_4(VAR_14->clkdco_min, VAR_4);
 VAR_12 = FUNC_0(VAR_8, VAR_2);
 if (VAR_12 == 0)
  VAR_12 = 1;

 VAR_7 = VAR_2 * VAR_12;
 VAR_10 = VAR_7 / VAR_4;

 VAR_5 = VAR_4 * VAR_10;


 if (FUNC_2(VAR_7 - VAR_5 > VAR_4))
  VAR_11 = 0;
 else
  VAR_11 = (u32)FUNC_3(262144ull * (VAR_7 - VAR_5), VAR_4);

 if (VAR_11 > 0)
  VAR_5 += (u32)FUNC_3((u64)VAR_11 * VAR_4, 262144);

 VAR_6 = VAR_5 / VAR_12;


 VAR_13 = FUNC_0(VAR_4 * VAR_10, 250000000);

 FUNC_1("N = %u, M = %u, M.f = %u, M2 = %u, SD = %u\n",
  VAR_9, VAR_10, VAR_11, VAR_12, VAR_13);
 FUNC_1("Fint %lu, clkdco %lu, clkout %lu\n", VAR_4, VAR_5, VAR_6);

 VAR_3->n = VAR_9;
 VAR_3->m = VAR_10;
 VAR_3->mf = VAR_11;
 VAR_3->mX[0] = VAR_12;
 VAR_3->sd = VAR_13;

 VAR_3->fint = VAR_4;
 VAR_3->clkdco = VAR_5;
 VAR_3->clkout[0] = VAR_6;

 return 1;
}

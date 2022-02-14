
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_pll_hw {unsigned long clkdco_max; unsigned long fint_min; unsigned long fint_max; scalar_t__ errata_i886; int m_max; int n_max; } ;
struct dss_pll {struct dss_pll_hw* hw; } ;
typedef scalar_t__ (* dss_pll_calc_func ) (int,int,unsigned long,unsigned long,void*) ;


 unsigned long FUNC_0 (unsigned long,int) ;
 unsigned long VAR_0 ;
 int FUNC_1 (unsigned long,unsigned long) ;
 int FUNC_2 (unsigned int,int ) ;
 int FUNC_3 (unsigned int,unsigned int,int ) ;
 int FUNC_4 (int,int) ;

bool FUNC_5(const struct dss_pll *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3, unsigned long VAR_4,
  dss_pll_calc_func VAR_5, void *VAR_6)
{
 const struct dss_pll_hw *VAR_7 = VAR_1->hw;
 int VAR_8, VAR_9, VAR_10, VAR_11;
 int VAR_12, VAR_13, VAR_14, VAR_15;
 unsigned long VAR_16, VAR_17;
 unsigned long VAR_18;
 unsigned long VAR_19, VAR_20;

 VAR_18 = VAR_7->clkdco_max;

 VAR_19 = VAR_7->fint_min;
 VAR_20 = VAR_7->fint_max;

 VAR_9 = FUNC_1(FUNC_0(VAR_2, VAR_20), 1ul);
 VAR_10 = FUNC_2((unsigned)(VAR_2 / VAR_19), VAR_7->n_max);
 VAR_11 = 1;

 if (VAR_7->errata_i886) {
  FUNC_4(VAR_9, VAR_10);
  VAR_11 = -1;
 }

 VAR_4 = VAR_4 ? VAR_4 : VAR_0;

 for (VAR_8 = VAR_9; VAR_8 != VAR_10; VAR_8 += VAR_11) {
  VAR_16 = VAR_2 / VAR_8;

  VAR_13 = FUNC_1(FUNC_0(FUNC_0(VAR_3, VAR_16), 2),
    1ul);
  VAR_14 = FUNC_3((unsigned)(VAR_4 / VAR_16 / 2),
    (unsigned)(VAR_18 / VAR_16 / 2),
    VAR_7->m_max);
  VAR_15 = 1;

  if (VAR_7->errata_i886) {
   FUNC_4(VAR_13, VAR_14);
   VAR_15 = -1;
  }

  for (VAR_12 = VAR_13; VAR_12 != VAR_14; VAR_12 += VAR_15) {
   VAR_17 = 2 * VAR_12 * VAR_16;

   if (VAR_5(VAR_8, VAR_12, VAR_16, VAR_17, VAR_6))
    return 1;
  }
 }

 return 0;
}

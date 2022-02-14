
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dss_pll_hw {int mX_max; } ;
struct dss_pll {struct dss_pll_hw* hw; } ;
typedef scalar_t__ (* dss_hsdiv_calc_func ) (int,unsigned long,void*) ;


 int FUNC_0 (unsigned long,unsigned long) ;
 unsigned long VAR_0 ;
 int FUNC_1 (int ,unsigned long) ;
 int FUNC_2 (unsigned int,int ) ;

bool FUNC_3(const struct dss_pll *VAR_1, unsigned long VAR_2,
  unsigned long VAR_3, unsigned long VAR_4,
  dss_hsdiv_calc_func VAR_5, void *VAR_6)
{
 const struct dss_pll_hw *VAR_7 = VAR_1->hw;
 int VAR_8, VAR_9, VAR_10;
 unsigned long VAR_11;

 VAR_3 = VAR_3 ? VAR_3 : 1;
 VAR_4 = VAR_4 ? VAR_4 : VAR_0;

 VAR_9 = FUNC_1(FUNC_0(VAR_2, VAR_4), 1ul);

 VAR_10 = FUNC_2((unsigned)(VAR_2 / VAR_3), VAR_7->mX_max);

 for (VAR_8 = VAR_9; VAR_8 <= VAR_10; ++VAR_8) {
  VAR_11 = VAR_2 / VAR_8;

  if (VAR_5(VAR_8, VAR_11, VAR_6))
   return 1;
 }

 return 0;
}

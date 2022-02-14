
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct clk_sccg_pll_setup {int fout; int fout_request; int fout_error; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct clk_sccg_pll_setup*,struct clk_sccg_pll_setup*,int) ;

__attribute__((used)) static int FUNC_2(struct clk_sccg_pll_setup *VAR_0,
     struct clk_sccg_pll_setup *VAR_1)
{
 int VAR_2 = VAR_1->fout - VAR_1->fout_request;
 int VAR_3 = VAR_1->fout_error;

 if (FUNC_0(VAR_3) > FUNC_0(VAR_2)) {
  VAR_1->fout_error = VAR_2;
  FUNC_1(VAR_0, VAR_1, sizeof(struct clk_sccg_pll_setup));

  if (VAR_1->fout_request == VAR_1->fout)
   return 0;
 }
 return -1;
}

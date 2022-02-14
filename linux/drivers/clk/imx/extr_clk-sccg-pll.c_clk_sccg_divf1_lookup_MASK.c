
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct clk_sccg_pll_setup {scalar_t__ divf1; int ref; int bypass; scalar_t__ divr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct clk_sccg_pll_setup*,struct clk_sccg_pll_setup*,int) ;
 int FUNC_1 (int,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct clk_sccg_pll_setup *VAR_3,
    struct clk_sccg_pll_setup *VAR_4)
{
 int VAR_5 = -VAR_0;

 for (VAR_4->divf1 = 0; VAR_4->divf1 <= VAR_2;
      VAR_4->divf1++) {
  uint64_t VAR_6 = VAR_4->ref;

  FUNC_1(VAR_6, VAR_4->divr1 + 1);
  VAR_6 *= 2;
  VAR_6 *= VAR_4->divf1 + 1;

  VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_6);
  if (!VAR_5) {
   VAR_4->bypass = VAR_1;
   return VAR_5;
  }
 }

 return VAR_5;
}

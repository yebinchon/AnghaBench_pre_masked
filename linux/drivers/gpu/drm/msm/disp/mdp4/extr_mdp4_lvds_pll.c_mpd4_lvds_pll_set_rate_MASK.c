
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mdp4_lvds_pll {unsigned long pixclk; } ;
struct clk_hw {int dummy; } ;


 struct mdp4_lvds_pll* FUNC_0 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_1(struct clk_hw *VAR_0, unsigned long VAR_1,
  unsigned long VAR_2)
{
 struct mdp4_lvds_pll *VAR_3 = FUNC_0(VAR_0);
 VAR_3->pixclk = VAR_1;
 return 0;
}

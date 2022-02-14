
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsdk_pll_clk {int dummy; } ;
struct hsdk_pll_cfg {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct hsdk_pll_clk*) ;
 int FUNC_1 (struct hsdk_pll_clk*) ;
 int FUNC_2 (struct hsdk_pll_clk*,struct hsdk_pll_cfg const*) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct hsdk_pll_clk *VAR_3,
         unsigned long VAR_4,
         const struct hsdk_pll_cfg *VAR_5)
{
 FUNC_2(VAR_3, VAR_5);





 FUNC_3(VAR_2);
 if (!FUNC_1(VAR_3))
  return -VAR_1;

 if (FUNC_0(VAR_3))
  return -VAR_0;

 return 0;
}

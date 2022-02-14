
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hsdk_pll_clk {int spec_regs; } ;
struct hsdk_pll_cfg {int dummy; } ;


 unsigned long VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct hsdk_pll_clk*) ;
 int FUNC_1 (struct hsdk_pll_clk*) ;
 int FUNC_2 (struct hsdk_pll_clk*,struct hsdk_pll_cfg const*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct hsdk_pll_clk *VAR_6,
         unsigned long VAR_7,
         const struct hsdk_pll_cfg *VAR_8)
{




 if (VAR_7 > VAR_0)
  FUNC_3(VAR_2, VAR_6->spec_regs);

 FUNC_2(VAR_6, VAR_8);





 FUNC_4(VAR_5);
 if (!FUNC_1(VAR_6))
  return -VAR_4;

 if (FUNC_0(VAR_6))
  return -VAR_3;





 if (VAR_7 <= VAR_0)
  FUNC_3(VAR_1, VAR_6->spec_regs);

 return 0;
}

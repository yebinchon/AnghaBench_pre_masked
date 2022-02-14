
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


union omap4_timeout {int member_0; } ;
typedef int u32 ;
struct clk_hw_omap {int flags; scalar_t__ clkdm; int enable_reg; int enable_bit; } ;
struct clk_hw {int clk; } ;
struct TYPE_2__ {int (* clkdm_clk_disable ) (scalar_t__,int ) ;int (* clk_readl ) (int *) ;int (* clk_writel ) (int ,int *) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (union omap4_timeout*,int ) ;
 int FUNC_2 (struct clk_hw*) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__,int ) ;
 TYPE_1__* VAR_3 ;
 struct clk_hw_omap* FUNC_8 (struct clk_hw*) ;

__attribute__((used)) static void FUNC_9(struct clk_hw *VAR_4)
{
 struct clk_hw_omap *VAR_5 = FUNC_8(VAR_4);
 u32 VAR_6;
 union omap4_timeout VAR_7 = { 0 };

 if (!VAR_5->enable_bit)
  goto exit;

 VAR_6 = VAR_3->clk_readl(&VAR_5->enable_reg);

 VAR_6 &= ~VAR_2;

 VAR_3->clk_writel(VAR_6, &VAR_5->enable_reg);

 if (VAR_5->flags & VAR_0)
  goto exit;


 while (!FUNC_0(VAR_3->clk_readl(&VAR_5->enable_reg))) {
  if (FUNC_1(&VAR_7,
          VAR_1)) {
   FUNC_3("%s: failed to disable\n", FUNC_2(VAR_4));
   break;
  }
 }

exit:
 if (VAR_5->clkdm)
  VAR_3->clkdm_clk_disable(VAR_5->clkdm, VAR_4->clk);
}

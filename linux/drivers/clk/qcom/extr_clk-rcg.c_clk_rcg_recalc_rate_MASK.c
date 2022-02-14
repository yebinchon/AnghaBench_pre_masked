
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mn {scalar_t__ width; } ;
struct TYPE_2__ {scalar_t__ enable_reg; int regmap; } ;
struct clk_rcg {scalar_t__ ns_reg; scalar_t__ md_reg; TYPE_1__ clkr; struct mn mn; int p; } ;
struct clk_hw {int dummy; } ;


 unsigned long FUNC_0 (unsigned long,int ,int ,int ,int ) ;
 int FUNC_1 (struct mn*,int ) ;
 int FUNC_2 (struct mn*,int ,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (struct mn*,int ) ;
 int FUNC_5 (int ,scalar_t__,int *) ;
 struct clk_rcg* FUNC_6 (struct clk_hw*) ;

__attribute__((used)) static unsigned long
FUNC_7(struct clk_hw *VAR_0, unsigned long VAR_1)
{
 struct clk_rcg *VAR_2 = FUNC_6(VAR_0);
 u32 VAR_3, VAR_4 = 0, VAR_5 = 0, VAR_6, VAR_7, VAR_8 = 0;
 struct mn *VAR_9 = &VAR_2->mn;

 FUNC_5(VAR_2->clkr.regmap, VAR_2->ns_reg, &VAR_6);
 VAR_3 = FUNC_3(&VAR_2->p, VAR_6);

 if (VAR_2->mn.width) {
  FUNC_5(VAR_2->clkr.regmap, VAR_2->md_reg, &VAR_7);
  VAR_4 = FUNC_1(VAR_9, VAR_7);
  VAR_5 = FUNC_2(VAR_9, VAR_6, VAR_4);

  if (VAR_2->clkr.enable_reg != VAR_2->ns_reg)
   FUNC_5(VAR_2->clkr.regmap, VAR_2->clkr.enable_reg, &VAR_8);
  else
   VAR_8 = VAR_6;
  VAR_8 = FUNC_4(VAR_9, VAR_8);
 }

 return FUNC_0(VAR_1, VAR_4, VAR_5, VAR_8, VAR_3);
}

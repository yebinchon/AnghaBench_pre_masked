
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hsdk_pll_clk {int dev; TYPE_1__* pll_devdata; } ;
struct hsdk_pll_cfg {unsigned long rate; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {struct hsdk_pll_cfg* pll_cfg; } ;


 long VAR_0 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (int ,char*,unsigned long) ;
 struct hsdk_pll_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static long FUNC_3(struct clk_hw *VAR_1, unsigned long VAR_2,
    unsigned long *VAR_3)
{
 int VAR_4;
 unsigned long VAR_5;
 struct hsdk_pll_clk *VAR_6 = FUNC_2(VAR_1);
 const struct hsdk_pll_cfg *VAR_7 = VAR_6->pll_devdata->pll_cfg;

 if (VAR_7[0].rate == 0)
  return -VAR_0;

 VAR_5 = VAR_7[0].rate;

 for (VAR_4 = 1; VAR_7[VAR_4].rate != 0; VAR_4++) {
  if (FUNC_0(VAR_2 - VAR_7[VAR_4].rate) < FUNC_0(VAR_2 - VAR_5))
   VAR_5 = VAR_7[VAR_4].rate;
 }

 FUNC_1(VAR_6->dev, "chosen best rate: %lu\n", VAR_5);

 return VAR_5;
}

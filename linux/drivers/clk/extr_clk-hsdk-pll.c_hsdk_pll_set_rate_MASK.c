
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct hsdk_pll_clk {int dev; TYPE_1__* pll_devdata; } ;
struct hsdk_pll_cfg {unsigned long rate; } ;
struct clk_hw {int dummy; } ;
struct TYPE_2__ {int (* update_rate ) (struct hsdk_pll_clk*,unsigned long,struct hsdk_pll_cfg const*) ;struct hsdk_pll_cfg* pll_cfg; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,unsigned long,unsigned long) ;
 int FUNC_1 (struct hsdk_pll_clk*,unsigned long,struct hsdk_pll_cfg const*) ;
 struct hsdk_pll_clk* FUNC_2 (struct clk_hw*) ;

__attribute__((used)) static int FUNC_3(struct clk_hw *VAR_1, unsigned long VAR_2,
        unsigned long VAR_3)
{
 int VAR_4;
 struct hsdk_pll_clk *VAR_5 = FUNC_2(VAR_1);
 const struct hsdk_pll_cfg *VAR_6 = VAR_5->pll_devdata->pll_cfg;

 for (VAR_4 = 0; VAR_6[VAR_4].rate != 0; VAR_4++) {
  if (VAR_6[VAR_4].rate == VAR_2) {
   return VAR_5->pll_devdata->update_rate(VAR_5, VAR_2,
            &VAR_6[VAR_4]);
  }
 }

 FUNC_0(VAR_5->dev, "invalid rate=%ld, parent_rate=%ld\n", VAR_2,
   VAR_3);

 return -VAR_0;
}

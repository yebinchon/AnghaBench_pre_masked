
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pic32_sys_pll_data {int lock_mask; scalar_t__ status_reg; scalar_t__ ctrl_reg; int init_data; } ;
struct TYPE_2__ {int * init; } ;
struct pic32_sys_pll {int idiv; TYPE_1__ hw; scalar_t__ ctrl_reg; int lock_mask; scalar_t__ status_reg; struct pic32_clk_common* core; } ;
struct pic32_clk_common {int dev; scalar_t__ iobase; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct clk*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ,char*) ;
 struct clk* FUNC_3 (int ,TYPE_1__*) ;
 struct pic32_sys_pll* FUNC_4 (int ,int,int ) ;
 int FUNC_5 (scalar_t__) ;

struct clk *FUNC_6(const struct pic32_sys_pll_data *VAR_4,
        struct pic32_clk_common *VAR_5)
{
 struct pic32_sys_pll *VAR_6;
 struct clk *VAR_7;

 VAR_6 = FUNC_4(VAR_5->dev, sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return FUNC_0(-VAR_0);

 VAR_6->core = VAR_5;
 VAR_6->hw.init = &VAR_4->init_data;
 VAR_6->ctrl_reg = VAR_4->ctrl_reg + VAR_5->iobase;
 VAR_6->status_reg = VAR_4->status_reg + VAR_5->iobase;
 VAR_6->lock_mask = VAR_4->lock_mask;


 VAR_6->idiv = (FUNC_5(VAR_6->ctrl_reg) >> VAR_3) & VAR_2;
 VAR_6->idiv += 1;

 VAR_7 = FUNC_3(VAR_5->dev, &VAR_6->hw);
 if (FUNC_1(VAR_7))
  FUNC_2(VAR_5->dev, "sys_pll: clk_register() failed\n");

 return VAR_7;
}

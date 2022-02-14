
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pic32_sec_osc_data {scalar_t__ status_reg; scalar_t__ enable_reg; int status_mask; int enable_mask; int fixed_rate; int init_data; } ;
struct TYPE_2__ {int * init; } ;
struct pic32_sec_osc {TYPE_1__ hw; scalar_t__ status_reg; scalar_t__ enable_reg; int status_mask; int enable_mask; int fixed_rate; struct pic32_clk_common* core; } ;
struct pic32_clk_common {int dev; scalar_t__ iobase; } ;
struct clk {int dummy; } ;


 int VAR_0 ;
 struct clk* FUNC_0 (int ) ;
 int VAR_1 ;
 struct clk* FUNC_1 (int ,TYPE_1__*) ;
 struct pic32_sec_osc* FUNC_2 (int ,int,int ) ;

struct clk *FUNC_3(const struct pic32_sec_osc_data *VAR_2,
        struct pic32_clk_common *VAR_3)
{
 struct pic32_sec_osc *VAR_4;

 VAR_4 = FUNC_2(VAR_3->dev, sizeof(*VAR_4), VAR_1);
 if (!VAR_4)
  return FUNC_0(-VAR_0);

 VAR_4->core = VAR_3;
 VAR_4->hw.init = &VAR_2->init_data;
 VAR_4->fixed_rate = VAR_2->fixed_rate;
 VAR_4->enable_mask = VAR_2->enable_mask;
 VAR_4->status_mask = VAR_2->status_mask;
 VAR_4->enable_reg = VAR_2->enable_reg + VAR_3->iobase;
 VAR_4->status_reg = VAR_2->status_reg + VAR_3->iobase;

 return FUNC_1(VAR_3->dev, &VAR_4->hw);
}

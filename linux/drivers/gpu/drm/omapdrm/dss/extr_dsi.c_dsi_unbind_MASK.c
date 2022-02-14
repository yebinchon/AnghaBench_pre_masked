
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int regs; int irqs; int clks; } ;
struct dsi_data {scalar_t__ scp_clk_refcount; int pll; TYPE_1__ debugfs; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 struct dsi_data* FUNC_1 (struct device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_0, struct device *VAR_1, void *VAR_2)
{
 struct dsi_data *VAR_3 = FUNC_1(VAR_0);

 FUNC_2(VAR_3->debugfs.clks);
 FUNC_2(VAR_3->debugfs.irqs);
 FUNC_2(VAR_3->debugfs.regs);

 FUNC_0(VAR_3->scp_clk_refcount > 0);

 FUNC_3(&VAR_3->pll);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regulator_bulk_data {int consumer; } ;
struct msm_dsi_host {TYPE_3__* cfg_hnd; struct regulator_bulk_data* supplies; } ;
struct dsi_reg_entry {scalar_t__ disable_load; } ;
struct TYPE_6__ {TYPE_2__* cfg; } ;
struct TYPE_4__ {int num; struct dsi_reg_entry* regs; } ;
struct TYPE_5__ {TYPE_1__ reg_cfg; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (int,struct regulator_bulk_data*) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct msm_dsi_host *VAR_0)
{
 struct regulator_bulk_data *VAR_1 = VAR_0->supplies;
 const struct dsi_reg_entry *VAR_2 = VAR_0->cfg_hnd->cfg->reg_cfg.regs;
 int VAR_3 = VAR_0->cfg_hnd->cfg->reg_cfg.num;
 int VAR_4;

 FUNC_0("");
 for (VAR_4 = VAR_3 - 1; VAR_4 >= 0; VAR_4--)
  if (VAR_2[VAR_4].disable_load >= 0)
   FUNC_2(VAR_1[VAR_4].consumer,
        VAR_2[VAR_4].disable_load);

 FUNC_1(VAR_3, VAR_1);
}

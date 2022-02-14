
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct regulator_bulk_data {int consumer; } ;
struct msm_dsi_phy {TYPE_3__* cfg; TYPE_1__* pdev; struct regulator_bulk_data* supplies; } ;
struct dsi_reg_entry {scalar_t__ enable_load; scalar_t__ disable_load; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int num; struct dsi_reg_entry* regs; } ;
struct TYPE_6__ {TYPE_2__ reg_cfg; } ;
struct TYPE_4__ {struct device dev; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct device*,char*,int,...) ;
 int FUNC_2 (int,struct regulator_bulk_data*) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct msm_dsi_phy *VAR_0)
{
 struct regulator_bulk_data *VAR_1 = VAR_0->supplies;
 const struct dsi_reg_entry *VAR_2 = VAR_0->cfg->reg_cfg.regs;
 struct device *VAR_3 = &VAR_0->pdev->dev;
 int VAR_4 = VAR_0->cfg->reg_cfg.num;
 int VAR_5, VAR_6;

 FUNC_0("");
 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++) {
  if (VAR_2[VAR_6].enable_load >= 0) {
   VAR_5 = FUNC_3(VAR_1[VAR_6].consumer,
       VAR_2[VAR_6].enable_load);
   if (VAR_5 < 0) {
    FUNC_1(VAR_3,
     "regulator %d set op mode failed, %d\n",
     VAR_6, VAR_5);
    goto fail;
   }
  }
 }

 VAR_5 = FUNC_2(VAR_4, VAR_1);
 if (VAR_5 < 0) {
  FUNC_1(VAR_3, "regulator enable failed, %d\n", VAR_5);
  goto fail;
 }

 return 0;

fail:
 for (VAR_6--; VAR_6 >= 0; VAR_6--)
  FUNC_3(VAR_1[VAR_6].consumer, VAR_2[VAR_6].disable_load);
 return VAR_5;
}

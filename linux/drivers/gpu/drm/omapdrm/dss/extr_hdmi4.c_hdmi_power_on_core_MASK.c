
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int core_pwr_cnt; } ;
struct omap_hdmi {int core_enabled; TYPE_1__ core; int vdda_reg; int dss; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (struct omap_hdmi*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct omap_hdmi *VAR_1)
{
 int VAR_2;

 if (VAR_1->core.core_pwr_cnt++)
  return 0;

 VAR_2 = FUNC_4(VAR_1->vdda_reg);
 if (VAR_2)
  goto err_reg_enable;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2)
  goto err_runtime_get;

 FUNC_1(&VAR_1->core);


 FUNC_0(VAR_1->dss, VAR_0);

 VAR_1->core_enabled = 1;

 return 0;

err_runtime_get:
 FUNC_3(VAR_1->vdda_reg);
err_reg_enable:
 VAR_1->core.core_pwr_cnt--;

 return VAR_2;
}

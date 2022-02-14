
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_hdmi {int core_enabled; int vdda_reg; int dss; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct omap_hdmi*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct omap_hdmi *VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_3(VAR_1->vdda_reg);
 if (VAR_2)
  return VAR_2;

 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2)
  goto err_runtime_get;


 FUNC_0(VAR_1->dss, VAR_0);

 VAR_1->core_enabled = 1;

 return 0;

err_runtime_get:
 FUNC_2(VAR_1->vdda_reg);

 return VAR_2;
}

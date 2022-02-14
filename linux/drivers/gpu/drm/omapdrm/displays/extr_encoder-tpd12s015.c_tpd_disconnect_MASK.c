
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {int ls_oe_gpio; int ct_cp_hpd_gpio; } ;
struct omap_dss_device {int next; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (struct omap_dss_device*,int ) ;
 struct panel_drv_data* FUNC_2 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_3(struct omap_dss_device *VAR_0,
      struct omap_dss_device *VAR_1)
{
 struct panel_drv_data *VAR_2 = FUNC_2(VAR_1);

 FUNC_0(VAR_2->ct_cp_hpd_gpio, 0);
 FUNC_0(VAR_2->ls_oe_gpio, 0);

 FUNC_1(VAR_1, VAR_1->next);
}

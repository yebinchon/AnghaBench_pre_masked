
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {int hpd_lock; int * hpd_cb_data; int * hpd_cb; } ;
struct omap_dss_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct panel_drv_data* FUNC_2 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_3(struct omap_dss_device *VAR_0)
{
 struct panel_drv_data *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(&VAR_1->hpd_lock);
 VAR_1->hpd_cb = ((void*)0);
 VAR_1->hpd_cb_data = ((void*)0);
 FUNC_1(&VAR_1->hpd_lock);
}

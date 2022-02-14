
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {void (* hpd_cb ) (void*,int) ;int hpd_lock; void* hpd_cb_data; } ;
struct omap_dss_device {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct panel_drv_data* FUNC_2 (struct omap_dss_device*) ;

__attribute__((used)) static void FUNC_3(struct omap_dss_device *VAR_0,
      void (*VAR_1)(void *VAR_2,
         enum drm_connector_status VAR_3),
      void *VAR_4)
{
 struct panel_drv_data *VAR_5 = FUNC_2(VAR_0);

 FUNC_0(&VAR_5->hpd_lock);
 VAR_5->hpd_cb = VAR_1;
 VAR_5->hpd_cb_data = VAR_4;
 FUNC_1(&VAR_5->hpd_lock);
}

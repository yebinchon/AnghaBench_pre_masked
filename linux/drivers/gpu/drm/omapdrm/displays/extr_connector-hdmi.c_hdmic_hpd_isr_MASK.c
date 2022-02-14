
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct panel_drv_data {int hpd_lock; int hpd_cb_data; int (* hpd_cb ) (int ,int) ;int dssdev; } ;
typedef int irqreturn_t ;
typedef enum drm_connector_status { ____Placeholder_drm_connector_status } drm_connector_status ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static irqreturn_t FUNC_4(int VAR_3, void *VAR_4)
{
 struct panel_drv_data *VAR_5 = VAR_4;

 FUNC_1(&VAR_5->hpd_lock);
 if (VAR_5->hpd_cb) {
  enum drm_connector_status VAR_6;

  if (FUNC_0(&VAR_5->dssdev))
   VAR_6 = VAR_1;
  else
   VAR_6 = VAR_2;

  VAR_5->hpd_cb(VAR_5->hpd_cb_data, VAR_6);
 }
 FUNC_2(&VAR_5->hpd_lock);

 return VAR_0;
}

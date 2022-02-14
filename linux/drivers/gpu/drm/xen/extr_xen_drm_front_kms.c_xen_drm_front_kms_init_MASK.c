
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct xen_drm_front_drm_pipeline {int dummy; } ;
struct xen_drm_front_drm_info {struct xen_drm_front_drm_pipeline* pipeline; TYPE_3__* front_info; struct drm_device* drm_dev; } ;
struct xen_drm_front_cfg_connector {int dummy; } ;
struct TYPE_4__ {int max_width; int max_height; int * funcs; scalar_t__ min_height; scalar_t__ min_width; } ;
struct drm_device {TYPE_1__ mode_config; } ;
struct TYPE_5__ {int num_connectors; struct xen_drm_front_cfg_connector* connectors; } ;
struct TYPE_6__ {TYPE_2__ cfg; } ;


 int FUNC_0 (struct xen_drm_front_drm_info*,int,struct xen_drm_front_cfg_connector*,struct xen_drm_front_drm_pipeline*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (struct drm_device*) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct drm_device*) ;
 int VAR_0 ;

int FUNC_5(struct xen_drm_front_drm_info *VAR_1)
{
 struct drm_device *VAR_2 = VAR_1->drm_dev;
 int VAR_3, VAR_4;

 FUNC_3(VAR_2);

 VAR_2->mode_config.min_width = 0;
 VAR_2->mode_config.min_height = 0;
 VAR_2->mode_config.max_width = 4095;
 VAR_2->mode_config.max_height = 2047;
 VAR_2->mode_config.funcs = &VAR_0;

 for (VAR_3 = 0; VAR_3 < VAR_1->front_info->cfg.num_connectors; VAR_3++) {
  struct xen_drm_front_cfg_connector *VAR_5 =
    &VAR_1->front_info->cfg.connectors[VAR_3];
  struct xen_drm_front_drm_pipeline *VAR_6 =
    &VAR_1->pipeline[VAR_3];

  VAR_4 = FUNC_0(VAR_1, VAR_3, VAR_5, VAR_6);
  if (VAR_4) {
   FUNC_2(VAR_2);
   return VAR_4;
  }
 }

 FUNC_4(VAR_2);
 FUNC_1(VAR_2);
 return 0;
}

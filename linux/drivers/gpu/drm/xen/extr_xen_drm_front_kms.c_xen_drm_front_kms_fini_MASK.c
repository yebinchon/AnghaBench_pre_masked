
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xen_drm_front_drm_pipeline {int pflip_to_worker; } ;
struct xen_drm_front_drm_info {struct xen_drm_front_drm_pipeline* pipeline; TYPE_2__* front_info; } ;
struct TYPE_3__ {int num_connectors; } ;
struct TYPE_4__ {TYPE_1__ cfg; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct xen_drm_front_drm_pipeline*) ;

void FUNC_2(struct xen_drm_front_drm_info *VAR_0)
{
 int VAR_1;

 for (VAR_1 = 0; VAR_1 < VAR_0->front_info->cfg.num_connectors; VAR_1++) {
  struct xen_drm_front_drm_pipeline *VAR_2 =
    &VAR_0->pipeline[VAR_1];

  FUNC_0(&VAR_2->pflip_to_worker);

  FUNC_1(VAR_2);
 }
}

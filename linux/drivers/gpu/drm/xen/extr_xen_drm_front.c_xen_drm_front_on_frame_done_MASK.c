
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int num_connectors; } ;
struct xen_drm_front_info {TYPE_1__ cfg; struct xen_drm_front_drm_info* drm_info; } ;
struct xen_drm_front_drm_info {int * pipeline; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int *,int ) ;

void FUNC_2(struct xen_drm_front_info *VAR_0,
     int VAR_1, u64 VAR_2)
{
 struct xen_drm_front_drm_info *VAR_3 = VAR_0->drm_info;

 if (FUNC_0(VAR_1 >= VAR_0->cfg.num_connectors))
  return;

 FUNC_1(&VAR_3->pipeline[VAR_1],
     VAR_2);
}

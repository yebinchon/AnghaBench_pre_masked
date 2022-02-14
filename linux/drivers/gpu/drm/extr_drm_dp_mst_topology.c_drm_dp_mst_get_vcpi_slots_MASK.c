
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_dp_mst_topology_mgr {int dummy; } ;
struct TYPE_2__ {int num_slots; } ;
struct drm_dp_mst_port {TYPE_1__ vcpi; } ;


 struct drm_dp_mst_port* FUNC_0 (struct drm_dp_mst_topology_mgr*,struct drm_dp_mst_port*) ;
 int FUNC_1 (struct drm_dp_mst_port*) ;

int FUNC_2(struct drm_dp_mst_topology_mgr *VAR_0, struct drm_dp_mst_port *VAR_1)
{
 int VAR_2 = 0;
 VAR_1 = FUNC_0(VAR_0, VAR_1);
 if (!VAR_1)
  return VAR_2;

 VAR_2 = VAR_1->vcpi.num_slots;
 FUNC_1(VAR_1);
 return VAR_2;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_dp_mst_topology_mgr {int dummy; } ;
struct TYPE_2__ {scalar_t__ vcpi; scalar_t__ aligned_pbn; scalar_t__ pbn; scalar_t__ num_slots; } ;
struct drm_dp_mst_port {TYPE_1__ vcpi; } ;


 int FUNC_0 (struct drm_dp_mst_topology_mgr*,scalar_t__) ;
 int FUNC_1 (struct drm_dp_mst_port*) ;

void FUNC_2(struct drm_dp_mst_topology_mgr *VAR_0,
    struct drm_dp_mst_port *VAR_1)
{
 if (!VAR_1->vcpi.vcpi)
  return;

 FUNC_0(VAR_0, VAR_1->vcpi.vcpi);
 VAR_1->vcpi.num_slots = 0;
 VAR_1->vcpi.pbn = 0;
 VAR_1->vcpi.aligned_pbn = 0;
 VAR_1->vcpi.vcpi = 0;
 FUNC_1(VAR_1);
}

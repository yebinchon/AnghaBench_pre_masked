
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_dp_payload {int payload_state; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;
struct TYPE_2__ {int pbn; } ;
struct drm_dp_mst_port {TYPE_1__ vcpi; } ;


 int VAR_0 ;
 int FUNC_0 (struct drm_dp_mst_topology_mgr*,struct drm_dp_mst_port*,int,int ) ;

__attribute__((used)) static int FUNC_1(struct drm_dp_mst_topology_mgr *VAR_1,
           struct drm_dp_mst_port *VAR_2,
           int VAR_3,
           struct drm_dp_payload *VAR_4)
{
 int VAR_5;
 VAR_5 = FUNC_0(VAR_1, VAR_2, VAR_3, VAR_2->vcpi.pbn);
 if (VAR_5 < 0)
  return VAR_5;
 VAR_4->payload_state = VAR_0;
 return VAR_5;
}

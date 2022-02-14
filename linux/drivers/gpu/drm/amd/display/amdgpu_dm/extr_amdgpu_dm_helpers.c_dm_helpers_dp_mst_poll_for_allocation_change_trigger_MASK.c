
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_dp_mst_topology_mgr {int mst_state; } ;
struct dc_stream_state {scalar_t__ dm_stream_context; } ;
struct dc_context {int dummy; } ;
struct amdgpu_dm_connector {TYPE_1__* mst_port; } ;
struct TYPE_2__ {struct drm_dp_mst_topology_mgr mst_mgr; } ;


 int FUNC_0 (struct drm_dp_mst_topology_mgr*) ;

bool FUNC_1(
  struct dc_context *VAR_0,
  const struct dc_stream_state *VAR_1)
{
 struct amdgpu_dm_connector *VAR_2;
 struct drm_dp_mst_topology_mgr *VAR_3;
 int VAR_4;

 VAR_2 = (struct amdgpu_dm_connector *)VAR_1->dm_stream_context;

 if (!VAR_2 || !VAR_2->mst_port)
  return 0;

 VAR_3 = &VAR_2->mst_port->mst_mgr;

 if (!VAR_3->mst_state)
  return 0;

 VAR_4 = FUNC_0(VAR_3);

 if (VAR_4)
  return 0;

 return 1;
}

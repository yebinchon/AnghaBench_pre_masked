
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct drm_dp_mst_topology_mgr {int mst_state; } ;
struct drm_dp_mst_port {int dummy; } ;
struct dc_stream_state {scalar_t__ dm_stream_context; } ;
struct dc_context {int dummy; } ;
struct amdgpu_dm_connector {TYPE_1__* mst_port; struct drm_dp_mst_port* port; } ;
struct TYPE_2__ {struct drm_dp_mst_topology_mgr mst_mgr; } ;


 int FUNC_0 (struct drm_dp_mst_topology_mgr*,struct drm_dp_mst_port*) ;
 int FUNC_1 (struct drm_dp_mst_topology_mgr*) ;

bool FUNC_2(
  struct dc_context *VAR_0,
  const struct dc_stream_state *VAR_1,
  bool VAR_2)
{
 struct amdgpu_dm_connector *VAR_3;
 struct drm_dp_mst_topology_mgr *VAR_4;
 struct drm_dp_mst_port *VAR_5;
 int VAR_6;

 VAR_3 = (struct amdgpu_dm_connector *)VAR_1->dm_stream_context;

 if (!VAR_3 || !VAR_3->mst_port)
  return 0;

 VAR_5 = VAR_3->port;

 VAR_4 = &VAR_3->mst_port->mst_mgr;

 if (!VAR_4->mst_state)
  return 0;

 VAR_6 = FUNC_1(VAR_4);

 if (VAR_6)
  return 0;

 if (!VAR_2)
  FUNC_0(VAR_4, VAR_5);

 return 1;
}

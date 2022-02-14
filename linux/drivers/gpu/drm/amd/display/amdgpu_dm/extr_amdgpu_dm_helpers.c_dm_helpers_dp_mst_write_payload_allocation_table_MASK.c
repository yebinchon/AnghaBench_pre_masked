
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct drm_dp_mst_topology_mgr {int mst_state; } ;
struct drm_dp_mst_port {int dummy; } ;
struct dp_mst_stream_allocation_table {int dummy; } ;
struct TYPE_4__ {int pix_clk_100hz; int display_color_depth; } ;
struct dc_stream_state {TYPE_2__ timing; scalar_t__ dm_stream_context; } ;
struct dc_context {int dummy; } ;
struct amdgpu_dm_connector {struct drm_dp_mst_port* port; TYPE_1__* mst_port; } ;
struct TYPE_3__ {struct drm_dp_mst_topology_mgr mst_mgr; } ;


 int FUNC_0 (int) ;






 int FUNC_1 (int,int) ;
 int FUNC_2 (struct drm_dp_mst_topology_mgr*,int) ;
 int FUNC_3 (struct drm_dp_mst_topology_mgr*,struct drm_dp_mst_port*,int,int) ;
 int FUNC_4 (struct drm_dp_mst_topology_mgr*,struct drm_dp_mst_port*) ;
 int FUNC_5 (struct drm_dp_mst_topology_mgr*) ;
 int FUNC_6 (struct amdgpu_dm_connector*,struct dp_mst_stream_allocation_table*) ;

bool FUNC_7(
  struct dc_context *VAR_0,
  const struct dc_stream_state *VAR_1,
  struct dp_mst_stream_allocation_table *VAR_2,
  bool VAR_3)
{
 struct amdgpu_dm_connector *VAR_4;
 struct drm_dp_mst_topology_mgr *VAR_5;
 struct drm_dp_mst_port *VAR_6;
 int VAR_7 = 0;
 bool VAR_8;
 int VAR_9;
 int VAR_10 = 0;
 int VAR_11 = 0;

 VAR_4 = (struct amdgpu_dm_connector *)VAR_1->dm_stream_context;

 if (!VAR_4 || !VAR_4->mst_port)
  return 0;

 VAR_5 = &VAR_4->mst_port->mst_mgr;

 if (!VAR_5->mst_state)
  return 0;

 VAR_6 = VAR_4->port;

 if (VAR_3) {
  VAR_9 = VAR_1->timing.pix_clk_100hz / 10;

  switch (VAR_1->timing.display_color_depth) {

  case 129:
   VAR_10 = 6;
   break;
  case 128:
   VAR_10 = 8;
   break;
  case 133:
   VAR_10 = 10;
   break;
  case 132:
   VAR_10 = 12;
   break;
  case 131:
   VAR_10 = 14;
   break;
  case 130:
   VAR_10 = 16;
   break;
  default:
   FUNC_0(VAR_10 != 0);
   break;
  }

  VAR_10 = VAR_10 * 3;



  VAR_11 = FUNC_1(VAR_9, VAR_10);

  VAR_7 = FUNC_2(VAR_5, VAR_11);
  VAR_8 = FUNC_3(VAR_5, VAR_6, VAR_11, VAR_7);

  if (!VAR_8)
   return 0;

 } else {
  FUNC_4(VAR_5, VAR_6);
 }

 VAR_8 = FUNC_5(VAR_5);






 FUNC_6(VAR_4, VAR_2);

 if (VAR_8)
  return 0;

 return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ reply_type; } ;
struct drm_dp_sideband_msg_tx {TYPE_1__ reply; int dst; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;
struct drm_dp_mst_port {int parent; int port_num; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct drm_dp_sideband_msg_tx*,int ,int) ;
 struct drm_dp_mst_port* FUNC_1 (struct drm_dp_mst_topology_mgr*,struct drm_dp_mst_port*) ;
 int FUNC_2 (struct drm_dp_mst_port*) ;
 int FUNC_3 (int ,struct drm_dp_sideband_msg_tx*) ;
 int FUNC_4 (struct drm_dp_mst_topology_mgr*,struct drm_dp_sideband_msg_tx*) ;
 int FUNC_5 (struct drm_dp_sideband_msg_tx*) ;
 struct drm_dp_sideband_msg_tx* FUNC_6 (int,int ) ;

int FUNC_7(struct drm_dp_mst_topology_mgr *VAR_4,
     struct drm_dp_mst_port *VAR_5, bool VAR_6)
{
 struct drm_dp_sideband_msg_tx *VAR_7;
 int VAR_8, VAR_9;

 VAR_5 = FUNC_1(VAR_4, VAR_5);
 if (!VAR_5)
  return -VAR_1;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_3);
 if (!VAR_7) {
  FUNC_2(VAR_5);
  return -VAR_2;
 }

 VAR_7->dst = VAR_5->parent;
 VAR_8 = FUNC_0(VAR_7, VAR_5->port_num, VAR_6);
 FUNC_4(VAR_4, VAR_7);

 VAR_9 = FUNC_3(VAR_5->parent, VAR_7);
 if (VAR_9 > 0) {
  if (VAR_7->reply.reply_type == VAR_0)
   VAR_9 = -VAR_1;
  else
   VAR_9 = 0;
 }
 FUNC_5(VAR_7);
 FUNC_2(VAR_5);

 return VAR_9;
}

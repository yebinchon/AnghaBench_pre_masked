
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {scalar_t__ reply_type; } ;
struct drm_dp_sideband_msg_tx {TYPE_1__ reply; struct drm_dp_mst_branch* dst; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;
struct drm_dp_mst_port {int port_num; int parent; } ;
struct drm_dp_mst_branch {int dummy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct drm_dp_sideband_msg_tx*,int ,int,int,int *) ;
 struct drm_dp_mst_branch* FUNC_1 (struct drm_dp_mst_topology_mgr*,int ) ;
 int FUNC_2 (struct drm_dp_mst_branch*) ;
 int FUNC_3 (struct drm_dp_mst_branch*,struct drm_dp_sideband_msg_tx*) ;
 int FUNC_4 (struct drm_dp_mst_topology_mgr*,struct drm_dp_sideband_msg_tx*) ;
 int FUNC_5 (struct drm_dp_sideband_msg_tx*) ;
 struct drm_dp_sideband_msg_tx* FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct drm_dp_mst_topology_mgr *VAR_5,
      struct drm_dp_mst_port *VAR_6,
      int VAR_7, int VAR_8, u8 *VAR_9)
{
 int VAR_10;
 int VAR_11;
 struct drm_dp_sideband_msg_tx *VAR_12;
 struct drm_dp_mst_branch *VAR_13;

 VAR_13 = FUNC_1(VAR_5, VAR_6->parent);
 if (!VAR_13)
  return -VAR_1;

 VAR_12 = FUNC_6(sizeof(*VAR_12), VAR_4);
 if (!VAR_12) {
  VAR_11 = -VAR_3;
  goto fail_put;
 }

 VAR_10 = FUNC_0(VAR_12, VAR_6->port_num, VAR_7, VAR_8, VAR_9);
 VAR_12->dst = VAR_13;

 FUNC_4(VAR_5, VAR_12);

 VAR_11 = FUNC_3(VAR_13, VAR_12);
 if (VAR_11 > 0) {
  if (VAR_12->reply.reply_type == VAR_0)
   VAR_11 = -VAR_2;
  else
   VAR_11 = 0;
 }
 FUNC_5(VAR_12);
fail_put:
 FUNC_2(VAR_13);
 return VAR_11;
}

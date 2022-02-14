
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ port_number; int avail_payload_bw_number; int full_payload_bw_number; } ;
struct TYPE_5__ {TYPE_1__ path_resources; } ;
struct TYPE_6__ {scalar_t__ reply_type; TYPE_2__ u; } ;
struct drm_dp_sideband_msg_tx {TYPE_3__ reply; struct drm_dp_mst_branch* dst; } ;
struct drm_dp_mst_topology_mgr {int dummy; } ;
struct drm_dp_mst_port {scalar_t__ port_num; int available_pbn; } ;
struct drm_dp_mst_branch {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (struct drm_dp_sideband_msg_tx*,scalar_t__) ;
 int FUNC_3 (struct drm_dp_mst_branch*,struct drm_dp_sideband_msg_tx*) ;
 int FUNC_4 (struct drm_dp_mst_topology_mgr*,struct drm_dp_sideband_msg_tx*) ;
 int FUNC_5 (struct drm_dp_sideband_msg_tx*) ;
 struct drm_dp_sideband_msg_tx* FUNC_6 (int,int ) ;

__attribute__((used)) static int FUNC_7(struct drm_dp_mst_topology_mgr *VAR_3,
        struct drm_dp_mst_branch *VAR_4,
        struct drm_dp_mst_port *VAR_5)
{
 int VAR_6;
 struct drm_dp_sideband_msg_tx *VAR_7;
 int VAR_8;

 VAR_7 = FUNC_6(sizeof(*VAR_7), VAR_2);
 if (!VAR_7)
  return -VAR_1;

 VAR_7->dst = VAR_4;
 VAR_6 = FUNC_2(VAR_7, VAR_5->port_num);

 FUNC_4(VAR_3, VAR_7);

 VAR_8 = FUNC_3(VAR_4, VAR_7);
 if (VAR_8 > 0) {
  if (VAR_7->reply.reply_type == VAR_0) {
   FUNC_0("enum path resources nak received\n");
  } else {
   if (VAR_5->port_num != VAR_7->reply.u.path_resources.port_number)
    FUNC_1("got incorrect port in response\n");
   FUNC_0("enum path resources %d: %d %d\n", VAR_7->reply.u.path_resources.port_number, VAR_7->reply.u.path_resources.full_payload_bw_number,
          VAR_7->reply.u.path_resources.avail_payload_bw_number);
   VAR_5->available_pbn = VAR_7->reply.u.path_resources.avail_payload_bw_number;
  }
 }

 FUNC_5(VAR_7);
 return 0;
}

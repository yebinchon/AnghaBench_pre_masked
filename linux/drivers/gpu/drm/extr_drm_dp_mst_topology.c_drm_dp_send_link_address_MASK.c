
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int nports; TYPE_4__* ports; int guid; } ;
struct TYPE_6__ {TYPE_1__ link_addr; } ;
struct TYPE_7__ {scalar_t__ reply_type; TYPE_2__ u; } ;
struct drm_dp_sideband_msg_tx {TYPE_3__ reply; struct drm_dp_mst_branch* dst; } ;
struct drm_dp_mst_topology_mgr {int dev; } ;
struct drm_dp_mst_branch {int link_address_sent; } ;
struct TYPE_8__ {int num_sdp_stream_sinks; int num_sdp_streams; int legacy_device_plug_status; int ddps; int mcs; int dpcd_revision; int port_number; int peer_device_type; int input_port; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int FUNC_1 (struct drm_dp_sideband_msg_tx*) ;
 int FUNC_2 (struct drm_dp_mst_branch*,int ,TYPE_4__*) ;
 int FUNC_3 (struct drm_dp_mst_branch*,int ) ;
 int FUNC_4 (struct drm_dp_mst_branch*,struct drm_dp_sideband_msg_tx*) ;
 int FUNC_5 (struct drm_dp_mst_topology_mgr*,struct drm_dp_sideband_msg_tx*) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct drm_dp_sideband_msg_tx*) ;
 struct drm_dp_sideband_msg_tx* FUNC_8 (int,int ) ;

__attribute__((used)) static void FUNC_9(struct drm_dp_mst_topology_mgr *VAR_2,
         struct drm_dp_mst_branch *VAR_3)
{
 int VAR_4;
 struct drm_dp_sideband_msg_tx *VAR_5;
 int VAR_6;

 VAR_5 = FUNC_8(sizeof(*VAR_5), VAR_1);
 if (!VAR_5)
  return;

 VAR_5->dst = VAR_3;
 VAR_4 = FUNC_1(VAR_5);

 VAR_3->link_address_sent = 1;
 FUNC_5(VAR_2, VAR_5);

 VAR_6 = FUNC_4(VAR_3, VAR_5);
 if (VAR_6 > 0) {
  int VAR_7;

  if (VAR_5->reply.reply_type == VAR_0) {
   FUNC_0("link address nak received\n");
  } else {
   FUNC_0("link address reply: %d\n", VAR_5->reply.u.link_addr.nports);
   for (VAR_7 = 0; VAR_7 < VAR_5->reply.u.link_addr.nports; VAR_7++) {
    FUNC_0("port %d: input %d, pdt: %d, pn: %d, dpcd_rev: %02x, mcs: %d, ddps: %d, ldps %d, sdp %d/%d\n", VAR_7,
           VAR_5->reply.u.link_addr.ports[VAR_7].input_port,
           VAR_5->reply.u.link_addr.ports[VAR_7].peer_device_type,
           VAR_5->reply.u.link_addr.ports[VAR_7].port_number,
           VAR_5->reply.u.link_addr.ports[VAR_7].dpcd_revision,
           VAR_5->reply.u.link_addr.ports[VAR_7].mcs,
           VAR_5->reply.u.link_addr.ports[VAR_7].ddps,
           VAR_5->reply.u.link_addr.ports[VAR_7].legacy_device_plug_status,
           VAR_5->reply.u.link_addr.ports[VAR_7].num_sdp_streams,
           VAR_5->reply.u.link_addr.ports[VAR_7].num_sdp_stream_sinks);
   }

   FUNC_3(VAR_3, VAR_5->reply.u.link_addr.guid);

   for (VAR_7 = 0; VAR_7 < VAR_5->reply.u.link_addr.nports; VAR_7++) {
    FUNC_2(VAR_3, VAR_2->dev, &VAR_5->reply.u.link_addr.ports[VAR_7]);
   }
   FUNC_6(VAR_2->dev);
  }
 } else {
  VAR_3->link_address_sent = 0;
  FUNC_0("link address failed %d\n", VAR_6);
 }

 FUNC_7(VAR_5);
}

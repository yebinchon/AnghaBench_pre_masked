
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct drm_dp_sideband_msg_rx {int dummy; } ;
struct TYPE_8__ {int available_pbn; int port_number; int guid; } ;
struct TYPE_11__ {int peer_device_type; int input_port; int message_capability_status; int displayport_device_plug_status; int legacy_device_plug_status; int port_number; int guid; } ;
struct TYPE_9__ {TYPE_2__ resource_stat; TYPE_5__ conn_stat; } ;
struct drm_dp_sideband_msg_req_body {scalar_t__ req_type; TYPE_3__ u; } ;
struct TYPE_7__ {int seqno; int lct; int rad; int broadcast; } ;
struct TYPE_10__ {TYPE_1__ initial_hdr; scalar_t__ have_eomt; } ;
struct drm_dp_mst_topology_mgr {TYPE_4__ up_req_recv; int mst_primary; int dev; } ;
struct drm_dp_mst_branch {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int ,...) ;
 struct drm_dp_mst_branch* FUNC_1 (struct drm_dp_mst_topology_mgr*,int ,int ) ;
 struct drm_dp_mst_branch* FUNC_2 (struct drm_dp_mst_topology_mgr*,int ) ;
 int FUNC_3 (struct drm_dp_mst_topology_mgr*,int) ;
 int FUNC_4 (struct drm_dp_mst_branch*) ;
 int FUNC_5 (struct drm_dp_mst_topology_mgr*,int ,scalar_t__,int,int) ;
 int FUNC_6 (TYPE_4__*,struct drm_dp_sideband_msg_req_body*) ;
 int FUNC_7 (struct drm_dp_mst_branch*,TYPE_5__*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (TYPE_4__*,int ,int) ;

__attribute__((used)) static int FUNC_10(struct drm_dp_mst_topology_mgr *VAR_2)
{
 int VAR_3 = 0;

 if (!FUNC_3(VAR_2, 1)) {
  FUNC_9(&VAR_2->up_req_recv, 0,
         sizeof(struct drm_dp_sideband_msg_rx));
  return 0;
 }

 if (VAR_2->up_req_recv.have_eomt) {
  struct drm_dp_sideband_msg_req_body VAR_4;
  struct drm_dp_mst_branch *VAR_5 = ((void*)0);
  bool VAR_6;

  if (!VAR_2->up_req_recv.initial_hdr.broadcast) {
   VAR_5 = FUNC_1(VAR_2,
           VAR_2->up_req_recv.initial_hdr.lct,
           VAR_2->up_req_recv.initial_hdr.rad);
   if (!VAR_5) {
    FUNC_0("Got MST reply from unknown device %d\n", VAR_2->up_req_recv.initial_hdr.lct);
    FUNC_9(&VAR_2->up_req_recv, 0, sizeof(struct drm_dp_sideband_msg_rx));
    return 0;
   }
  }

  VAR_6 = VAR_2->up_req_recv.initial_hdr.seqno;
  FUNC_6(&VAR_2->up_req_recv, &VAR_4);

  if (VAR_4.req_type == VAR_0) {
   FUNC_5(VAR_2, VAR_2->mst_primary, VAR_4.req_type, VAR_6, 0);

   if (!VAR_5)
    VAR_5 = FUNC_2(VAR_2, VAR_4.u.conn_stat.guid);

   if (!VAR_5) {
    FUNC_0("Got MST reply from unknown device %d\n", VAR_2->up_req_recv.initial_hdr.lct);
    FUNC_9(&VAR_2->up_req_recv, 0, sizeof(struct drm_dp_sideband_msg_rx));
    return 0;
   }

   FUNC_7(VAR_5, &VAR_4.u.conn_stat);

   FUNC_0("Got CSN: pn: %d ldps:%d ddps: %d mcs: %d ip: %d pdt: %d\n", VAR_4.u.conn_stat.port_number, VAR_4.u.conn_stat.legacy_device_plug_status, VAR_4.u.conn_stat.displayport_device_plug_status, VAR_4.u.conn_stat.message_capability_status, VAR_4.u.conn_stat.input_port, VAR_4.u.conn_stat.peer_device_type);
   FUNC_8(VAR_2->dev);

  } else if (VAR_4.req_type == VAR_1) {
   FUNC_5(VAR_2, VAR_2->mst_primary, VAR_4.req_type, VAR_6, 0);
   if (!VAR_5)
    VAR_5 = FUNC_2(VAR_2, VAR_4.u.resource_stat.guid);

   if (!VAR_5) {
    FUNC_0("Got MST reply from unknown device %d\n", VAR_2->up_req_recv.initial_hdr.lct);
    FUNC_9(&VAR_2->up_req_recv, 0, sizeof(struct drm_dp_sideband_msg_rx));
    return 0;
   }

   FUNC_0("Got RSN: pn: %d avail_pbn %d\n", VAR_4.u.resource_stat.port_number, VAR_4.u.resource_stat.available_pbn);
  }

  if (VAR_5)
   FUNC_4(VAR_5);

  FUNC_9(&VAR_2->up_req_recv, 0, sizeof(struct drm_dp_sideband_msg_rx));
 }
 return VAR_3;
}

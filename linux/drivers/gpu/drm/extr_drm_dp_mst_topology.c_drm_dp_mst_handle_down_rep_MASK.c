
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_6__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {int nak_data; int reason; } ;
struct TYPE_9__ {TYPE_2__ nak; } ;
struct TYPE_11__ {scalar_t__ reply_type; TYPE_3__ u; struct drm_dp_mst_branch* req_type; } ;
struct drm_dp_sideband_msg_tx {int state; TYPE_6__ reply; } ;
struct drm_dp_sideband_msg_rx {int dummy; } ;
struct TYPE_7__ {int seqno; int * rad; int lct; } ;
struct TYPE_10__ {int * msg; TYPE_1__ initial_hdr; scalar_t__ have_eomt; } ;
struct drm_dp_mst_topology_mgr {int tx_waitq; int qlock; TYPE_4__ down_rep_recv; } ;
struct drm_dp_mst_branch {struct drm_dp_sideband_msg_tx** tx_slots; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,struct drm_dp_mst_branch*,...) ;
 int VAR_1 ;
 struct drm_dp_mst_branch* FUNC_1 (struct drm_dp_mst_topology_mgr*,int ,int *) ;
 int FUNC_2 (struct drm_dp_mst_topology_mgr*,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct drm_dp_mst_branch*) ;
 int FUNC_5 (struct drm_dp_mst_branch*) ;
 int FUNC_6 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_7 (TYPE_4__*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(struct drm_dp_mst_topology_mgr *VAR_2)
{
 int VAR_3 = 0;

 if (!FUNC_2(VAR_2, 0)) {
  FUNC_7(&VAR_2->down_rep_recv, 0,
         sizeof(struct drm_dp_sideband_msg_rx));
  return 0;
 }

 if (VAR_2->down_rep_recv.have_eomt) {
  struct drm_dp_sideband_msg_tx *VAR_4;
  struct drm_dp_mst_branch *VAR_5;
  int VAR_6 = -1;
  VAR_5 = FUNC_1(VAR_2,
          VAR_2->down_rep_recv.initial_hdr.lct,
          VAR_2->down_rep_recv.initial_hdr.rad);

  if (!VAR_5) {
   FUNC_0("Got MST reply from unknown device %d\n", VAR_2->down_rep_recv.initial_hdr.lct);
   FUNC_7(&VAR_2->down_rep_recv, 0, sizeof(struct drm_dp_sideband_msg_rx));
   return 0;
  }


  VAR_6 = VAR_2->down_rep_recv.initial_hdr.seqno;
  FUNC_8(&VAR_2->qlock);
  VAR_4 = VAR_5->tx_slots[VAR_6];

  FUNC_9(&VAR_2->qlock);

  if (!VAR_4) {
   FUNC_0("Got MST reply with no msg %p %d %d %02x %02x\n",
          VAR_5,
          VAR_2->down_rep_recv.initial_hdr.seqno,
          VAR_2->down_rep_recv.initial_hdr.lct,
          VAR_2->down_rep_recv.initial_hdr.rad[0],
          VAR_2->down_rep_recv.msg[0]);
   FUNC_5(VAR_5);
   FUNC_7(&VAR_2->down_rep_recv, 0, sizeof(struct drm_dp_sideband_msg_rx));
   return 0;
  }

  FUNC_6(&VAR_2->down_rep_recv, &VAR_4->reply);

  if (VAR_4->reply.reply_type == VAR_0)
   FUNC_0("Got NAK reply: req 0x%02x (%s), reason 0x%02x (%s), nak data 0x%02x\n",
          VAR_4->reply.req_type,
          FUNC_4(VAR_4->reply.req_type),
          VAR_4->reply.u.nak.reason,
          FUNC_3(VAR_4->reply.u.nak.reason),
          VAR_4->reply.u.nak.nak_data);

  FUNC_7(&VAR_2->down_rep_recv, 0, sizeof(struct drm_dp_sideband_msg_rx));
  FUNC_5(VAR_5);

  FUNC_8(&VAR_2->qlock);
  VAR_4->state = VAR_1;
  VAR_5->tx_slots[VAR_6] = ((void*)0);
  FUNC_9(&VAR_2->qlock);

  FUNC_10(&VAR_2->tx_waitq);
 }
 return VAR_3;
}

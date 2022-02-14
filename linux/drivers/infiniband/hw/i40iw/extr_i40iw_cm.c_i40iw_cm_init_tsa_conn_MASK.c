
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_9__ ;
typedef struct TYPE_19__ TYPE_8__ ;
typedef struct TYPE_18__ TYPE_7__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;
typedef struct TYPE_11__ TYPE_10__ ;


typedef int u64 ;
struct i40iwarp_offload_info {int ord_size; int rd_enable; int rdmap_ver; int ddp_ver; int snd_mark_en; scalar_t__ snd_mark_offset; int pd_id; int ird_size; } ;
struct i40iw_tcp_offload_info {int snd_nxt; int tos; int src_mac_addr_idx; int tcp_state; } ;
struct i40iw_sc_dev {TYPE_9__* iw_priv_qp_ops; } ;
struct i40iw_qp_host_ctx_info {int tcp_info_valid; int iwarp_info_valid; int add_to_qoslist; int user_pri; int rcv_cq_num; int send_cq_num; struct i40iw_tcp_offload_info* tcp_info; } ;
struct TYPE_11__ {scalar_t__ va; } ;
struct i40iw_qp {TYPE_10__ host_ctx; int sc_qp; TYPE_8__* iwpd; TYPE_6__* iwrcq; TYPE_3__* iwscq; struct i40iw_qp_host_ctx_info ctx_info; struct i40iwarp_offload_info iwarp_info; struct i40iw_device* iwdev; } ;
struct i40iw_device {int mac_ip_table_idx; struct i40iw_sc_dev sc_dev; } ;
struct i40iw_cm_node {int ord_size; int tos; int state; scalar_t__ lsmm_size; scalar_t__ snd_mark_en; int user_pri; int ird_size; } ;
struct TYPE_20__ {int (* qp_setctx ) (int *,int *,struct i40iw_qp_host_ctx_info*) ;} ;
struct TYPE_18__ {int pd_id; } ;
struct TYPE_19__ {TYPE_7__ sc_pd; } ;
struct TYPE_15__ {int cq_id; } ;
struct TYPE_16__ {TYPE_4__ cq_uk; } ;
struct TYPE_17__ {TYPE_5__ sc_cq; } ;
struct TYPE_12__ {int cq_id; } ;
struct TYPE_13__ {TYPE_1__ cq_uk; } ;
struct TYPE_14__ {TYPE_2__ sc_cq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct i40iw_cm_node*,struct i40iw_tcp_offload_info*,struct i40iw_qp*) ;
 int FUNC_2 (struct i40iw_tcp_offload_info*,int,int) ;
 int FUNC_3 (int *,int *,struct i40iw_qp_host_ctx_info*) ;

__attribute__((used)) static void FUNC_4(struct i40iw_qp *VAR_3,
       struct i40iw_cm_node *VAR_4)
{
 struct i40iw_tcp_offload_info VAR_5;
 struct i40iwarp_offload_info *VAR_6;
 struct i40iw_qp_host_ctx_info *VAR_7;
 struct i40iw_device *VAR_8 = VAR_3->iwdev;
 struct i40iw_sc_dev *VAR_9 = &VAR_3->iwdev->sc_dev;

 FUNC_2(&VAR_5, 0x00, sizeof(struct i40iw_tcp_offload_info));
 VAR_6 = &VAR_3->iwarp_info;
 VAR_7 = &VAR_3->ctx_info;

 VAR_7->tcp_info = &VAR_5;
 VAR_7->send_cq_num = VAR_3->iwscq->sc_cq.cq_uk.cq_id;
 VAR_7->rcv_cq_num = VAR_3->iwrcq->sc_cq.cq_uk.cq_id;

 VAR_6->ord_size = VAR_4->ord_size;
 VAR_6->ird_size = FUNC_0(VAR_4->ird_size);

 if (VAR_6->ord_size == 1)
  VAR_6->ord_size = 2;

 VAR_6->rd_enable = 1;
 VAR_6->rdmap_ver = 1;
 VAR_6->ddp_ver = 1;

 VAR_6->pd_id = VAR_3->iwpd->sc_pd.pd_id;

 VAR_7->tcp_info_valid = 1;
 VAR_7->iwarp_info_valid = 1;
 VAR_7->add_to_qoslist = 1;
 VAR_7->user_pri = VAR_4->user_pri;

 FUNC_1(VAR_4, &VAR_5, VAR_3);
 if (VAR_4->snd_mark_en) {
  VAR_6->snd_mark_en = 1;
  VAR_6->snd_mark_offset = (VAR_5.snd_nxt &
    VAR_2) + VAR_4->lsmm_size;
 }

 VAR_4->state = VAR_0;
 VAR_5.tcp_state = VAR_1;
 VAR_5.src_mac_addr_idx = VAR_8->mac_ip_table_idx;
 VAR_5.tos = VAR_4->tos;

 VAR_9->iw_priv_qp_ops->qp_setctx(&VAR_3->sc_qp, (u64 *)(VAR_3->host_ctx.va), VAR_7);


 VAR_7->tcp_info_valid = 0;
 VAR_7->iwarp_info_valid = 0;
 VAR_7->add_to_qoslist = 0;
}

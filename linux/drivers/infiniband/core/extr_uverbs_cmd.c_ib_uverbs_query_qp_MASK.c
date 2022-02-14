
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uverbs_attr_bundle {int dummy; } ;
struct ib_uverbs_query_qp_resp {int sq_sig_all; int max_inline_data; int max_recv_sge; int max_send_sge; int max_recv_wr; int max_send_wr; int alt_dest; int dest; int alt_timeout; int alt_port_num; int rnr_retry; int retry_cnt; int timeout; int port_num; int min_rnr_timer; int max_dest_rd_atomic; int max_rd_atomic; int sq_draining; int alt_pkey_index; int pkey_index; int qp_access_flags; int dest_qp_num; int sq_psn; int rq_psn; int qkey; int path_mig_state; int path_mtu; int cur_qp_state; int qp_state; } ;
struct ib_uverbs_query_qp {int attr_mask; int qp_handle; } ;
struct TYPE_2__ {int max_inline_data; int max_recv_sge; int max_send_sge; int max_recv_wr; int max_send_wr; } ;
struct ib_qp_init_attr {scalar_t__ sq_sig_type; TYPE_1__ cap; int alt_ah_attr; int ah_attr; int alt_timeout; int alt_port_num; int rnr_retry; int retry_cnt; int timeout; int port_num; int min_rnr_timer; int max_dest_rd_atomic; int max_rd_atomic; int sq_draining; int alt_pkey_index; int pkey_index; int qp_access_flags; int dest_qp_num; int sq_psn; int rq_psn; int qkey; int path_mig_state; int path_mtu; int cur_qp_state; int qp_state; } ;
struct ib_qp_attr {scalar_t__ sq_sig_type; TYPE_1__ cap; int alt_ah_attr; int ah_attr; int alt_timeout; int alt_port_num; int rnr_retry; int retry_cnt; int timeout; int port_num; int min_rnr_timer; int max_dest_rd_atomic; int max_rd_atomic; int sq_draining; int alt_pkey_index; int pkey_index; int qp_access_flags; int dest_qp_num; int sq_psn; int rq_psn; int qkey; int path_mig_state; int path_mtu; int cur_qp_state; int qp_state; } ;
struct ib_qp {int dummy; } ;
typedef int resp ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct ib_qp*,struct ib_qp_init_attr*,int ,struct ib_qp_init_attr*) ;
 int FUNC_2 (struct ib_qp_init_attr*) ;
 struct ib_qp_init_attr* FUNC_3 (int,int ) ;
 int FUNC_4 (struct ib_uverbs_query_qp_resp*,int ,int) ;
 struct ib_qp* FUNC_5 (struct ib_qp*,int ,int ,struct uverbs_attr_bundle*) ;
 int FUNC_6 (struct ib_qp*) ;
 int FUNC_7 (struct uverbs_attr_bundle*,struct ib_uverbs_query_qp*,int) ;
 int FUNC_8 (struct uverbs_attr_bundle*,struct ib_uverbs_query_qp_resp*,int) ;

__attribute__((used)) static int FUNC_9(struct uverbs_attr_bundle *VAR_5)
{
 struct ib_uverbs_query_qp VAR_6;
 struct ib_uverbs_query_qp_resp VAR_7;
 struct ib_qp *VAR_8;
 struct ib_qp_attr *VAR_9;
 struct ib_qp_init_attr *VAR_10;
 int VAR_11;

 VAR_11 = FUNC_7(VAR_5, &VAR_6, sizeof(VAR_6));
 if (VAR_11)
  return VAR_11;

 VAR_9 = FUNC_3(sizeof *VAR_9, VAR_2);
 VAR_10 = FUNC_3(sizeof *VAR_10, VAR_2);
 if (!VAR_9 || !VAR_10) {
  VAR_11 = -VAR_1;
  goto out;
 }

 VAR_8 = FUNC_5(VAR_8, VAR_4, VAR_6.qp_handle, VAR_5);
 if (!VAR_8) {
  VAR_11 = -VAR_0;
  goto out;
 }

 VAR_11 = FUNC_1(VAR_8, VAR_9, VAR_6.attr_mask, VAR_10);

 FUNC_6(VAR_8);

 if (VAR_11)
  goto out;

 FUNC_4(&VAR_7, 0, sizeof VAR_7);

 VAR_7.qp_state = VAR_9->qp_state;
 VAR_7.cur_qp_state = VAR_9->cur_qp_state;
 VAR_7.path_mtu = VAR_9->path_mtu;
 VAR_7.path_mig_state = VAR_9->path_mig_state;
 VAR_7.qkey = VAR_9->qkey;
 VAR_7.rq_psn = VAR_9->rq_psn;
 VAR_7.sq_psn = VAR_9->sq_psn;
 VAR_7.dest_qp_num = VAR_9->dest_qp_num;
 VAR_7.qp_access_flags = VAR_9->qp_access_flags;
 VAR_7.pkey_index = VAR_9->pkey_index;
 VAR_7.alt_pkey_index = VAR_9->alt_pkey_index;
 VAR_7.sq_draining = VAR_9->sq_draining;
 VAR_7.max_rd_atomic = VAR_9->max_rd_atomic;
 VAR_7.max_dest_rd_atomic = VAR_9->max_dest_rd_atomic;
 VAR_7.min_rnr_timer = VAR_9->min_rnr_timer;
 VAR_7.port_num = VAR_9->port_num;
 VAR_7.timeout = VAR_9->timeout;
 VAR_7.retry_cnt = VAR_9->retry_cnt;
 VAR_7.rnr_retry = VAR_9->rnr_retry;
 VAR_7.alt_port_num = VAR_9->alt_port_num;
 VAR_7.alt_timeout = VAR_9->alt_timeout;

 FUNC_0(&VAR_7.dest, &VAR_9->ah_attr);
 FUNC_0(&VAR_7.alt_dest, &VAR_9->alt_ah_attr);

 VAR_7.max_send_wr = VAR_10->cap.max_send_wr;
 VAR_7.max_recv_wr = VAR_10->cap.max_recv_wr;
 VAR_7.max_send_sge = VAR_10->cap.max_send_sge;
 VAR_7.max_recv_sge = VAR_10->cap.max_recv_sge;
 VAR_7.max_inline_data = VAR_10->cap.max_inline_data;
 VAR_7.sq_sig_all = VAR_10->sq_sig_type == VAR_3;

 VAR_11 = FUNC_8(VAR_5, &VAR_7, sizeof(VAR_7));

out:
 FUNC_2(VAR_9);
 FUNC_2(VAR_10);

 return VAR_11;
}

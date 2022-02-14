
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct qedr_qp {int dummy; } ;
struct qedr_dev {int gsi_ll2_handle; int rdma_ctx; TYPE_4__* ops; TYPE_3__* ndev; int cdev; } ;
struct qed_ll2_cbs {struct qedr_dev* cookie; void* tx_release_cb; int rx_release_cb; void* tx_comp_cb; int rx_comp_cb; } ;
struct TYPE_6__ {int rx_drop_ttl0_flg; int rx_vlan_removal_en; int gsi_enable; void* ai_err_no_buf; void* ai_err_packet_too_big; int tx_dest; scalar_t__ tx_tc; int tx_num_desc; int rx_num_desc; int mtu; int conn_type; } ;
struct qed_ll2_acquire_data {struct qed_ll2_cbs* cbs; int * p_connection_handle; TYPE_2__ input; } ;
struct TYPE_5__ {int max_send_wr; int max_recv_wr; } ;
struct ib_qp_init_attr {TYPE_1__ cap; } ;
typedef int data ;
struct TYPE_8__ {int (* ll2_acquire_connection ) (int ,struct qed_ll2_acquire_data*) ;int (* ll2_establish_connection ) (int ,int ) ;int (* ll2_set_mac_filter ) (int ,int *,int ) ;int (* ll2_release_connection ) (int ,int ) ;int (* ll2_terminate_connection ) (int ,int ) ;} ;
struct TYPE_7__ {int dev_addr; int mtu; } ;


 int FUNC_0 (struct qedr_dev*,char*,int) ;
 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct qed_ll2_acquire_data*,int ,int) ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ,struct qed_ll2_acquire_data*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int *,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(struct qedr_dev *VAR_6,
     struct ib_qp_init_attr *VAR_7, struct qedr_qp *VAR_8)
{
 struct qed_ll2_acquire_data VAR_9;
 struct qed_ll2_cbs VAR_10;
 int VAR_11;


 VAR_10.rx_comp_cb = VAR_3;
 VAR_10.tx_comp_cb = VAR_4;
 VAR_10.rx_release_cb = VAR_5;
 VAR_10.tx_release_cb = VAR_4;
 VAR_10.cookie = VAR_6;

 FUNC_1(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.input.conn_type = VAR_2;
 VAR_9.input.mtu = VAR_6->ndev->mtu;
 VAR_9.input.rx_num_desc = VAR_7->cap.max_recv_wr;
 VAR_9.input.rx_drop_ttl0_flg = 1;
 VAR_9.input.rx_vlan_removal_en = 0;
 VAR_9.input.tx_num_desc = VAR_7->cap.max_send_wr;
 VAR_9.input.tx_tc = 0;
 VAR_9.input.tx_dest = VAR_1;
 VAR_9.input.ai_err_packet_too_big = VAR_0;
 VAR_9.input.ai_err_no_buf = VAR_0;
 VAR_9.input.gsi_enable = 1;
 VAR_9.p_connection_handle = &VAR_6->gsi_ll2_handle;
 VAR_9.cbs = &VAR_10;

 VAR_11 = VAR_6->ops->ll2_acquire_connection(VAR_6->rdma_ctx, &VAR_9);
 if (VAR_11) {
  FUNC_0(VAR_6,
         "ll2 start: failed to acquire LL2 connection (rc=%d)\n",
         VAR_11);
  return VAR_11;
 }

 VAR_11 = VAR_6->ops->ll2_establish_connection(VAR_6->rdma_ctx,
      VAR_6->gsi_ll2_handle);
 if (VAR_11) {
  FUNC_0(VAR_6,
         "ll2 start: failed to establish LL2 connection (rc=%d)\n",
         VAR_11);
  goto err1;
 }

 VAR_11 = VAR_6->ops->ll2_set_mac_filter(VAR_6->cdev, ((void*)0), VAR_6->ndev->dev_addr);
 if (VAR_11)
  goto err2;

 return 0;

err2:
 VAR_6->ops->ll2_terminate_connection(VAR_6->rdma_ctx, VAR_6->gsi_ll2_handle);
err1:
 VAR_6->ops->ll2_release_connection(VAR_6->rdma_ctx, VAR_6->gsi_ll2_handle);

 return VAR_11;
}

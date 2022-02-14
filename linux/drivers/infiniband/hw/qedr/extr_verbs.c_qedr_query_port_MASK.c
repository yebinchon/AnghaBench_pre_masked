
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct qedr_dev {int ibdev; TYPE_2__* ndev; int rdma_ctx; TYPE_1__* ops; } ;
struct qed_rdma_port {scalar_t__ port_state; int max_msg_size; int link_speed; int pkey_bad_counter; } ;
struct ib_port_attr {int ip_gids; int gid_tbl_len; int pkey_tbl_len; int max_vl_num; int max_msg_sz; int active_width; int active_speed; scalar_t__ qkey_viol_cntr; int bad_pkey_cntr; scalar_t__ sm_sl; scalar_t__ sm_lid; scalar_t__ lmc; scalar_t__ lid; int active_mtu; int max_mtu; int phys_state; int state; } ;
struct ib_device {int dummy; } ;
struct TYPE_4__ {int mtu; } ;
struct TYPE_3__ {struct qed_rdma_port* (* rdma_query_port ) (int ) ;} ;


 int FUNC_0 (struct qedr_dev*,char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_1 (int ,int *,int *) ;
 struct qedr_dev* FUNC_2 (struct ib_device*) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int *,int) ;
 struct qed_rdma_port* FUNC_5 (int ) ;

int FUNC_6(struct ib_device *VAR_9, u8 VAR_10, struct ib_port_attr *VAR_11)
{
 struct qedr_dev *VAR_12;
 struct qed_rdma_port *VAR_13;

 VAR_12 = FUNC_2(VAR_9);

 if (!VAR_12->rdma_ctx) {
  FUNC_0(VAR_12, "rdma_ctx is NULL\n");
  return -VAR_0;
 }

 VAR_13 = VAR_12->ops->rdma_query_port(VAR_12->rdma_ctx);


 if (VAR_13->port_state == VAR_8) {
  VAR_11->state = VAR_2;
  VAR_11->phys_state = VAR_5;
 } else {
  VAR_11->state = VAR_3;
  VAR_11->phys_state = VAR_4;
 }
 VAR_11->max_mtu = VAR_1;
 VAR_11->active_mtu = FUNC_3(VAR_12->ndev->mtu);
 VAR_11->lid = 0;
 VAR_11->lmc = 0;
 VAR_11->sm_lid = 0;
 VAR_11->sm_sl = 0;
 VAR_11->ip_gids = 1;
 if (FUNC_4(&VAR_12->ibdev, 1)) {
  VAR_11->gid_tbl_len = 1;
  VAR_11->pkey_tbl_len = 1;
 } else {
  VAR_11->gid_tbl_len = VAR_6;
  VAR_11->pkey_tbl_len = VAR_7;
 }
 VAR_11->bad_pkey_cntr = VAR_13->pkey_bad_counter;
 VAR_11->qkey_viol_cntr = 0;
 FUNC_1(VAR_13->link_speed,
     &VAR_11->active_speed, &VAR_11->active_width);
 VAR_11->max_msg_sz = VAR_13->max_msg_size;
 VAR_11->max_vl_num = 4;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct rdma_cm_id {struct ib_qp* qp; } ;
struct isert_device {int pd; scalar_t__ pi_capable; TYPE_2__* ib_device; } ;
struct isert_conn {struct isert_device* device; } ;
struct isert_comp {int cq; } ;
struct TYPE_6__ {int max_recv_sge; int max_send_sge; int max_rdma_ctxs; scalar_t__ max_recv_wr; scalar_t__ max_send_wr; } ;
struct ib_qp_init_attr {int create_flags; int qp_type; int sq_sig_type; TYPE_3__ cap; int recv_cq; int send_cq; struct isert_conn* qp_context; int event_handler; } ;
struct ib_qp {int dummy; } ;
struct TYPE_4__ {int max_send_sge; } ;
struct TYPE_5__ {TYPE_1__ attrs; } ;


 struct ib_qp* FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (char*,int) ;
 int VAR_6 ;
 int FUNC_2 (struct ib_qp_init_attr*,int ,int) ;
 int FUNC_3 (struct rdma_cm_id*,int ,struct ib_qp_init_attr*) ;

__attribute__((used)) static struct ib_qp *
FUNC_4(struct isert_conn *VAR_7,
  struct isert_comp *VAR_8,
  struct rdma_cm_id *VAR_9)
{
 struct isert_device *VAR_10 = VAR_7->device;
 struct ib_qp_init_attr VAR_11;
 int VAR_12;

 FUNC_2(&VAR_11, 0, sizeof(struct ib_qp_init_attr));
 VAR_11.event_handler = VAR_6;
 VAR_11.qp_context = VAR_7;
 VAR_11.send_cq = VAR_8->cq;
 VAR_11.recv_cq = VAR_8->cq;
 VAR_11.cap.max_send_wr = VAR_5 + 1;
 VAR_11.cap.max_recv_wr = VAR_4 + 1;
 VAR_11.cap.max_rdma_ctxs = VAR_3;
 VAR_11.cap.max_send_sge = VAR_10->ib_device->attrs.max_send_sge;
 VAR_11.cap.max_recv_sge = 1;
 VAR_11.sq_sig_type = VAR_2;
 VAR_11.qp_type = VAR_0;
 if (VAR_10->pi_capable)
  VAR_11.create_flags |= VAR_1;

 VAR_12 = FUNC_3(VAR_9, VAR_10->pd, &VAR_11);
 if (VAR_12) {
  FUNC_1("rdma_create_qp failed for cma_id %d\n", VAR_12);
  return FUNC_0(VAR_12);
 }

 return VAR_9->qp;
}

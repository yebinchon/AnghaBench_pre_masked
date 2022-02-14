
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int orq_size; int irq_size; int rq_max_sges; int rq_size; int sq_max_sges; int sq_size; } ;
struct siw_qp {TYPE_2__ attrs; } ;
struct siw_device {TYPE_1__* netdev; } ;
struct TYPE_6__ {int max_recv_sge; int max_recv_wr; int max_send_sge; int max_send_wr; int max_inline_data; } ;
struct ib_qp_init_attr {TYPE_3__ cap; int srq; int recv_cq; int send_cq; int qp_type; } ;
struct ib_qp_attr {int qp_access_flags; TYPE_3__ cap; int max_dest_rd_atomic; int max_rd_atomic; int path_mtu; } ;
struct ib_qp {int srq; int recv_cq; int send_cq; int qp_type; int device; } ;
struct TYPE_4__ {int mtu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 struct siw_device* FUNC_1 (int ) ;
 struct siw_qp* FUNC_2 (struct ib_qp*) ;

int FUNC_3(struct ib_qp *VAR_5, struct ib_qp_attr *VAR_6,
   int VAR_7, struct ib_qp_init_attr *VAR_8)
{
 struct siw_qp *VAR_9;
 struct siw_device *VAR_10;

 if (VAR_5 && VAR_6 && VAR_8) {
  VAR_9 = FUNC_2(VAR_5);
  VAR_10 = FUNC_1(VAR_5->device);
 } else {
  return -VAR_0;
 }
 VAR_6->cap.max_inline_data = VAR_4;
 VAR_6->cap.max_send_wr = VAR_9->attrs.sq_size;
 VAR_6->cap.max_send_sge = VAR_9->attrs.sq_max_sges;
 VAR_6->cap.max_recv_wr = VAR_9->attrs.rq_size;
 VAR_6->cap.max_recv_sge = VAR_9->attrs.rq_max_sges;
 VAR_6->path_mtu = FUNC_0(VAR_10->netdev->mtu);
 VAR_6->max_rd_atomic = VAR_9->attrs.irq_size;
 VAR_6->max_dest_rd_atomic = VAR_9->attrs.orq_size;

 VAR_6->qp_access_flags = VAR_1 |
       VAR_3 |
       VAR_2;

 VAR_8->qp_type = VAR_5->qp_type;
 VAR_8->send_cq = VAR_5->send_cq;
 VAR_8->recv_cq = VAR_5->recv_cq;
 VAR_8->srq = VAR_5->srq;

 VAR_8->cap = VAR_6->cap;

 return 0;
}

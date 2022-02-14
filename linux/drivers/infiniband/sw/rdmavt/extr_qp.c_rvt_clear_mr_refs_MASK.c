
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rvt_swqe {int dummy; } ;
struct TYPE_3__ {int device; } ;
struct rvt_qp {scalar_t__ s_last; scalar_t__ s_head; scalar_t__ s_size; struct rvt_ack_entry* s_ack_queue; int * s_rdma_mr; int r_sge; int s_rdma_read_sge; int r_aflags; TYPE_1__ ibqp; } ;
struct rvt_dev_info {int dummy; } ;
struct TYPE_4__ {int * mr; } ;
struct rvt_ack_entry {TYPE_2__ rdma_sge; } ;


 int VAR_0 ;
 struct rvt_dev_info* FUNC_0 (int ) ;
 struct rvt_swqe* FUNC_1 (struct rvt_qp*,scalar_t__) ;
 unsigned int FUNC_2 (struct rvt_dev_info*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct rvt_qp*,struct rvt_swqe*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 scalar_t__ FUNC_7 (int ,int *) ;

__attribute__((used)) static void FUNC_8(struct rvt_qp *VAR_1, int VAR_2)
{
 unsigned VAR_3;
 struct rvt_dev_info *VAR_4 = FUNC_0(VAR_1->ibqp.device);

 if (FUNC_7(VAR_0, &VAR_1->r_aflags))
  FUNC_5(&VAR_1->s_rdma_read_sge);

 FUNC_5(&VAR_1->r_sge);

 if (VAR_2) {
  while (VAR_1->s_last != VAR_1->s_head) {
   struct rvt_swqe *VAR_5 = FUNC_1(VAR_1, VAR_1->s_last);

   FUNC_4(VAR_1, VAR_5);
   if (++VAR_1->s_last >= VAR_1->s_size)
    VAR_1->s_last = 0;
   FUNC_6();
  }
  if (VAR_1->s_rdma_mr) {
   FUNC_3(VAR_1->s_rdma_mr);
   VAR_1->s_rdma_mr = ((void*)0);
  }
 }

 for (VAR_3 = 0; VAR_1->s_ack_queue && VAR_3 < FUNC_2(VAR_4); VAR_3++) {
  struct rvt_ack_entry *VAR_6 = &VAR_1->s_ack_queue[VAR_3];

  if (VAR_6->rdma_sge.mr) {
   FUNC_3(VAR_6->rdma_sge.mr);
   VAR_6->rdma_sge.mr = ((void*)0);
  }
 }
}

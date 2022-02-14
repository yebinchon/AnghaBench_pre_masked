
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int lo; int hi; } ;
struct rdma_cqe_requester {TYPE_1__ qp_handle; } ;
union rdma_cqe {struct rdma_cqe_requester req; } ;
struct qedr_qp {int dummy; } ;


 scalar_t__ FUNC_0 (int ,int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static struct qedr_qp *FUNC_1(union rdma_cqe *VAR_1)
{
 struct rdma_cqe_requester *VAR_2 = &VAR_1->req;
 struct qedr_qp *VAR_3;

 VAR_3 = (struct qedr_qp *)(uintptr_t)FUNC_0(VAR_2->qp_handle.hi,
         VAR_2->qp_handle.lo,
         VAR_0);
 return VAR_3;
}

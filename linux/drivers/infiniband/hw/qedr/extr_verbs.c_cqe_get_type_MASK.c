
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_cqe_requester {int flags; } ;
union rdma_cqe {struct rdma_cqe_requester req; } ;
typedef enum rdma_cqe_type { ____Placeholder_rdma_cqe_type } rdma_cqe_type ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;

__attribute__((used)) static enum rdma_cqe_type FUNC_1(union rdma_cqe *VAR_1)
{
 struct rdma_cqe_requester *VAR_2 = &VAR_1->req;

 return FUNC_0(VAR_2->flags, VAR_0);
}

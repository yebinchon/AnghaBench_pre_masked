
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tid_rdma_request {int dummy; } ;
struct rvt_swqe {scalar_t__ priv; } ;
struct hfi1_swqe_priv {struct tid_rdma_request tid_req; } ;



__attribute__((used)) static inline struct tid_rdma_request *FUNC_0(struct rvt_swqe *VAR_0)
{
 return &((struct hfi1_swqe_priv *)VAR_0->priv)->tid_req;
}

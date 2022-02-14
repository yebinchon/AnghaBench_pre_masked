
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ib_qp {int rdma_mrs; int sig_mrs; } ;


 int FUNC_0 (struct ib_qp*,int *) ;

void FUNC_1(struct ib_qp *VAR_0)
{
 FUNC_0(VAR_0, &VAR_0->sig_mrs);
 FUNC_0(VAR_0, &VAR_0->rdma_mrs);
}

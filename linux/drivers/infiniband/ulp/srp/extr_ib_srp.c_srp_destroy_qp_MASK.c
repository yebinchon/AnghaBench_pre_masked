
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srp_rdma_ch {int qp; int lock; int send_cq; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct srp_rdma_ch *VAR_0)
{
 FUNC_3(&VAR_0->lock);
 FUNC_2(VAR_0->send_cq, -1);
 FUNC_4(&VAR_0->lock);

 FUNC_1(VAR_0->qp);
 FUNC_0(VAR_0->qp);
}

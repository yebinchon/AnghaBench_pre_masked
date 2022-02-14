
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct srpt_rdma_ch {int qp; } ;
struct ib_qp_attr {int qp_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,struct ib_qp_attr*,int ) ;

__attribute__((used)) static int FUNC_1(struct srpt_rdma_ch *VAR_2)
{
 struct ib_qp_attr VAR_3;

 VAR_3.qp_state = VAR_0;
 return FUNC_0(VAR_2->qp, &VAR_3, VAR_1);
}

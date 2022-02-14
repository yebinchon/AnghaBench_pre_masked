
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rxe_av {int dmac; } ;
struct TYPE_2__ {int dmac; } ;
struct rdma_ah_attr {TYPE_1__ roce; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (struct rdma_ah_attr*) ;
 int FUNC_2 (struct rxe_av*,struct rdma_ah_attr*) ;
 int FUNC_3 (int ,struct rxe_av*,struct rdma_ah_attr*) ;

void FUNC_4(struct rdma_ah_attr *VAR_1, struct rxe_av *VAR_2)
{
 FUNC_3(FUNC_1(VAR_1), VAR_2, VAR_1);
 FUNC_2(VAR_2, VAR_1);
 FUNC_0(VAR_2->dmac, VAR_1->roce.dmac, VAR_0);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dmac; } ;
struct rdma_ah_attr {TYPE_1__ roce; } ;
struct pvrdma_ah_attr {int dmac; int port_num; int ah_flags; int static_rate; int src_path_bits; int sl; int dlid; int grh; } ;


 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *,int ,int) ;
 int FUNC_2 (struct rdma_ah_attr const*) ;
 int FUNC_3 (struct rdma_ah_attr const*) ;
 int FUNC_4 (struct rdma_ah_attr const*) ;
 int FUNC_5 (struct rdma_ah_attr const*) ;
 int FUNC_6 (struct rdma_ah_attr const*) ;
 int FUNC_7 (struct rdma_ah_attr const*) ;
 int FUNC_8 (struct rdma_ah_attr const*) ;

void FUNC_9(struct pvrdma_ah_attr *VAR_0,
       const struct rdma_ah_attr *VAR_1)
{
 FUNC_0(&VAR_0->grh, FUNC_8(VAR_1));
 VAR_0->dlid = FUNC_3(VAR_1);
 VAR_0->sl = FUNC_6(VAR_1);
 VAR_0->src_path_bits = FUNC_4(VAR_1);
 VAR_0->static_rate = FUNC_7(VAR_1);
 VAR_0->ah_flags = FUNC_2(VAR_1);
 VAR_0->port_num = FUNC_5(VAR_1);
 FUNC_1(&VAR_0->dmac, VAR_1->roce.dmac, sizeof(VAR_0->dmac));
}

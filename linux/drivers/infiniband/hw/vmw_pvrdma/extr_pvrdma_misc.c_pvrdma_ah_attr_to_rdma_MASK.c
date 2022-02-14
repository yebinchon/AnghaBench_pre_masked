
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dmac; } ;
struct rdma_ah_attr {TYPE_1__ roce; int type; } ;
struct pvrdma_ah_attr {int dmac; int port_num; int ah_flags; int static_rate; int src_path_bits; int sl; int dlid; int grh; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int *,int ) ;
 int FUNC_1 (int ,int *) ;
 int FUNC_2 (struct rdma_ah_attr*) ;
 int FUNC_3 (struct rdma_ah_attr*,int ) ;
 int FUNC_4 (struct rdma_ah_attr*,int ) ;
 int FUNC_5 (struct rdma_ah_attr*,int ) ;
 int FUNC_6 (struct rdma_ah_attr*,int ) ;
 int FUNC_7 (struct rdma_ah_attr*,int ) ;
 int FUNC_8 (struct rdma_ah_attr*,int ) ;

void FUNC_9(struct rdma_ah_attr *VAR_2,
       const struct pvrdma_ah_attr *VAR_3)
{
 VAR_2->type = VAR_1;
 FUNC_1(FUNC_2(VAR_2), &VAR_3->grh);
 FUNC_4(VAR_2, VAR_3->dlid);
 FUNC_7(VAR_2, VAR_3->sl);
 FUNC_5(VAR_2, VAR_3->src_path_bits);
 FUNC_8(VAR_2, VAR_3->static_rate);
 FUNC_3(VAR_2, VAR_3->ah_flags);
 FUNC_6(VAR_2, VAR_3->port_num);
 FUNC_0(VAR_2->roce.dmac, &VAR_3->dmac, VAR_0);
}

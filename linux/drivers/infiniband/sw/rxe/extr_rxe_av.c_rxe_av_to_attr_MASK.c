
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int raw; } ;
struct TYPE_6__ {int traffic_class; int hop_limit; int sgid_index; int flow_label; TYPE_2__ dgid; } ;
struct rxe_av {int port_num; TYPE_3__ grh; } ;
struct rdma_ah_attr {int type; } ;
struct TYPE_4__ {int raw; } ;
struct ib_global_route {int traffic_class; int hop_limit; int sgid_index; int flow_label; TYPE_1__ dgid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int) ;
 struct ib_global_route* FUNC_1 (struct rdma_ah_attr*) ;
 int FUNC_2 (struct rdma_ah_attr*,int ) ;
 int FUNC_3 (struct rdma_ah_attr*,int ) ;

void FUNC_4(struct rxe_av *VAR_2, struct rdma_ah_attr *VAR_3)
{
 struct ib_global_route *VAR_4 = FUNC_1(VAR_3);

 VAR_3->type = VAR_1;

 FUNC_0(VAR_4->dgid.raw, VAR_2->grh.dgid.raw, sizeof(VAR_2->grh.dgid.raw));
 VAR_4->flow_label = VAR_2->grh.flow_label;
 VAR_4->sgid_index = VAR_2->grh.sgid_index;
 VAR_4->hop_limit = VAR_2->grh.hop_limit;
 VAR_4->traffic_class = VAR_2->grh.traffic_class;

 FUNC_2(VAR_3, VAR_0);
 FUNC_3(VAR_3, VAR_2->port_num);
}

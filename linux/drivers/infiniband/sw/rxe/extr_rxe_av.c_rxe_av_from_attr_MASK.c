
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_6__ {int raw; } ;
struct TYPE_5__ {int traffic_class; int hop_limit; int sgid_index; int flow_label; TYPE_3__ dgid; } ;
struct rxe_av {int port_num; TYPE_2__ grh; } ;
struct rdma_ah_attr {int dummy; } ;
struct TYPE_4__ {int raw; } ;
struct ib_global_route {int traffic_class; int hop_limit; int sgid_index; int flow_label; TYPE_1__ dgid; } ;


 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct rxe_av*,int ,int) ;
 struct ib_global_route* FUNC_2 (struct rdma_ah_attr*) ;

void FUNC_3(u8 VAR_0, struct rxe_av *VAR_1,
       struct rdma_ah_attr *VAR_2)
{
 const struct ib_global_route *VAR_3 = FUNC_2(VAR_2);

 FUNC_1(VAR_1, 0, sizeof(*VAR_1));
 FUNC_0(VAR_1->grh.dgid.raw, VAR_3->dgid.raw, sizeof(VAR_3->dgid.raw));
 VAR_1->grh.flow_label = VAR_3->flow_label;
 VAR_1->grh.sgid_index = VAR_3->sgid_index;
 VAR_1->grh.hop_limit = VAR_3->hop_limit;
 VAR_1->grh.traffic_class = VAR_3->traffic_class;
 VAR_1->port_num = VAR_0;
}

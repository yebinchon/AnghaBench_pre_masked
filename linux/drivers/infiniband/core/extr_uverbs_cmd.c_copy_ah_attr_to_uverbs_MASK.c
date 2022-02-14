
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rdma_ah_attr {int dummy; } ;
struct ib_uverbs_qp_dest {int is_global; int port_num; int traffic_class; int hop_limit; int sgid_index; int flow_label; int dgid; int static_rate; int src_path_bits; int sl; int dlid; } ;
struct TYPE_2__ {int raw; } ;
struct ib_global_route {int traffic_class; int hop_limit; int sgid_index; int flow_label; TYPE_1__ dgid; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct rdma_ah_attr*) ;
 int FUNC_2 (struct rdma_ah_attr*) ;
 int FUNC_3 (struct rdma_ah_attr*) ;
 int FUNC_4 (struct rdma_ah_attr*) ;
 int FUNC_5 (struct rdma_ah_attr*) ;
 int FUNC_6 (struct rdma_ah_attr*) ;
 struct ib_global_route* FUNC_7 (struct rdma_ah_attr*) ;

__attribute__((used)) static void FUNC_8(struct ib_uverbs_qp_dest *VAR_1,
       struct rdma_ah_attr *VAR_2)
{
 const struct ib_global_route *VAR_3;

 VAR_1->dlid = FUNC_2(VAR_2);
 VAR_1->sl = FUNC_5(VAR_2);
 VAR_1->src_path_bits = FUNC_3(VAR_2);
 VAR_1->static_rate = FUNC_6(VAR_2);
 VAR_1->is_global = !!(FUNC_1(VAR_2) &
      VAR_0);
 if (VAR_1->is_global) {
  VAR_3 = FUNC_7(VAR_2);
  FUNC_0(VAR_1->dgid, VAR_3->dgid.raw, 16);
  VAR_1->flow_label = VAR_3->flow_label;
  VAR_1->sgid_index = VAR_3->sgid_index;
  VAR_1->hop_limit = VAR_3->hop_limit;
  VAR_1->traffic_class = VAR_3->traffic_class;
 }
 VAR_1->port_num = FUNC_4(VAR_2);
}

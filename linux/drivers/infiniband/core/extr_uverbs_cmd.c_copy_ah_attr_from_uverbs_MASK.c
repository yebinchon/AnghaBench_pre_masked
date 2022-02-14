
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rdma_ah_attr {int type; } ;
struct ib_uverbs_qp_dest {int port_num; int static_rate; int src_path_bits; int sl; int dlid; int dgid; int traffic_class; int hop_limit; int sgid_index; int flow_label; scalar_t__ is_global; } ;
struct ib_device {int dummy; } ;


 int FUNC_0 (struct ib_device*,int ) ;
 int FUNC_1 (struct rdma_ah_attr*,int ) ;
 int FUNC_2 (struct rdma_ah_attr*,int ) ;
 int FUNC_3 (struct rdma_ah_attr*,int ) ;
 int FUNC_4 (struct rdma_ah_attr*,int *,int ,int ,int ,int ) ;
 int FUNC_5 (struct rdma_ah_attr*,int) ;
 int FUNC_6 (struct rdma_ah_attr*,int ) ;
 int FUNC_7 (struct rdma_ah_attr*,int ) ;
 int FUNC_8 (struct rdma_ah_attr*,int ) ;
 int FUNC_9 (struct rdma_ah_attr*,int ) ;

__attribute__((used)) static void FUNC_10(struct ib_device *VAR_0,
         struct rdma_ah_attr *VAR_1,
         struct ib_uverbs_qp_dest *VAR_2)
{
 VAR_1->type = FUNC_0(VAR_0, VAR_2->port_num);
 if (VAR_2->is_global) {
  FUNC_4(VAR_1, ((void*)0),
    VAR_2->flow_label,
    VAR_2->sgid_index,
    VAR_2->hop_limit,
    VAR_2->traffic_class);
  FUNC_2(VAR_1, VAR_2->dgid);
 } else {
  FUNC_1(VAR_1, 0);
 }
 FUNC_3(VAR_1, VAR_2->dlid);
 FUNC_8(VAR_1, VAR_2->sl);
 FUNC_6(VAR_1, VAR_2->src_path_bits);
 FUNC_9(VAR_1, VAR_2->static_rate);
 FUNC_7(VAR_1, VAR_2->port_num);
 FUNC_5(VAR_1, 0);
}

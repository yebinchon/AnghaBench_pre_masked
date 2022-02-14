
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct rdma_ah_attr {scalar_t__ type; } ;
struct TYPE_4__ {int traffic_class; int hop_limit; int sgid_index; int flow_label; int dgid; int reserved; } ;
struct ib_uverbs_ah_attr {int is_global; scalar_t__ reserved; int port_num; TYPE_2__ grh; int static_rate; int src_path_bits; int sl; int dlid; } ;
struct TYPE_3__ {int raw; } ;
struct ib_global_route {int traffic_class; int hop_limit; int sgid_index; int flow_label; TYPE_1__ dgid; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (struct ib_device*,struct rdma_ah_attr*,struct rdma_ah_attr*) ;
 int FUNC_4 (struct rdma_ah_attr*) ;
 int FUNC_5 (struct rdma_ah_attr*) ;
 int FUNC_6 (struct rdma_ah_attr*) ;
 int FUNC_7 (struct rdma_ah_attr*) ;
 int FUNC_8 (struct rdma_ah_attr*) ;
 int FUNC_9 (struct rdma_ah_attr*) ;
 struct ib_global_route* FUNC_10 (struct rdma_ah_attr*) ;

void FUNC_11(struct ib_device *VAR_3,
        struct ib_uverbs_ah_attr *VAR_4,
        struct rdma_ah_attr *VAR_5)
{
 struct rdma_ah_attr *VAR_6 = VAR_5;
 struct rdma_ah_attr VAR_7;

 FUNC_2(&VAR_4->grh.reserved, 0, sizeof(VAR_4->grh.reserved));

 if ((VAR_5->type == VAR_2) &&
     (FUNC_5(VAR_5) > FUNC_0(VAR_1)) &&
     (!FUNC_3(VAR_3, &VAR_7, VAR_5)))
  VAR_6 = &VAR_7;

 VAR_4->dlid = FUNC_5(VAR_6);
 VAR_4->sl = FUNC_8(VAR_6);
 VAR_4->src_path_bits = FUNC_6(VAR_6);
 VAR_4->static_rate = FUNC_9(VAR_6);
 VAR_4->is_global = FUNC_4(VAR_6) &
     VAR_0 ? 1 : 0;
 if (VAR_4->is_global) {
  const struct ib_global_route *VAR_8 = FUNC_10(VAR_6);

  FUNC_1(VAR_4->grh.dgid, VAR_8->dgid.raw, sizeof(VAR_8->dgid));
  VAR_4->grh.flow_label = VAR_8->flow_label;
  VAR_4->grh.sgid_index = VAR_8->sgid_index;
  VAR_4->grh.hop_limit = VAR_8->hop_limit;
  VAR_4->grh.traffic_class = VAR_8->traffic_class;
 }
 VAR_4->port_num = FUNC_7(VAR_6);
 VAR_4->reserved = 0;
}

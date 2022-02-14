
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_4__* sgid_attr; } ;
struct TYPE_5__ {int * dmac; } ;
struct rdma_ah_attr {scalar_t__ type; TYPE_2__ grh; TYPE_1__ roce; } ;
struct mlx5_ib_dev {int dummy; } ;
struct TYPE_7__ {int stat_rate_sl; int fl_mlid; int rlid; int tclass; int udp_sport; int rmac; int hop_limit; int grh_gid_fl; int rgid; } ;
struct mlx5_ib_ah {TYPE_3__ av; } ;
struct ib_global_route {int flow_label; int sgid_index; int traffic_class; int hop_limit; int dgid; } ;
typedef enum ib_gid_type { ____Placeholder_ib_gid_type } ib_gid_type ;
struct TYPE_8__ {int gid_type; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int *,int) ;
 int FUNC_3 (struct mlx5_ib_dev*,TYPE_4__*) ;
 int FUNC_4 (struct rdma_ah_attr*) ;
 int FUNC_5 (struct rdma_ah_attr*) ;
 int FUNC_6 (struct rdma_ah_attr*) ;
 int FUNC_7 (struct rdma_ah_attr*) ;
 int FUNC_8 (struct rdma_ah_attr*) ;
 struct ib_global_route* FUNC_9 (struct rdma_ah_attr*) ;

__attribute__((used)) static void FUNC_10(struct mlx5_ib_dev *VAR_4, struct mlx5_ib_ah *VAR_5,
    struct rdma_ah_attr *VAR_6)
{
 enum ib_gid_type VAR_7;

 if (FUNC_4(VAR_6) & VAR_0) {
  const struct ib_global_route *VAR_8 = FUNC_9(VAR_6);

  FUNC_2(VAR_5->av.rgid, &VAR_8->dgid, 16);
  VAR_5->av.grh_gid_fl = FUNC_1(VAR_8->flow_label |
      (1 << 30) |
      VAR_8->sgid_index << 20);
  VAR_5->av.hop_limit = VAR_8->hop_limit;
  VAR_5->av.tclass = VAR_8->traffic_class;
 }

 VAR_5->av.stat_rate_sl = (FUNC_8(VAR_6) << 4);

 if (VAR_6->type == VAR_3) {
  VAR_7 = VAR_6->grh.sgid_attr->gid_type;

  FUNC_2(VAR_5->av.rmac, VAR_6->roce.dmac,
         sizeof(VAR_6->roce.dmac));
  VAR_5->av.udp_sport =
   FUNC_3(VAR_4, VAR_6->grh.sgid_attr);
  VAR_5->av.stat_rate_sl |= (FUNC_7(VAR_6) & 0x7) << 1;
  if (VAR_7 == VAR_1)

   VAR_5->av.tclass |= FUNC_0(1);
 } else {
  VAR_5->av.rlid = FUNC_0(FUNC_5(VAR_6));
  VAR_5->av.fl_mlid = FUNC_6(VAR_6) & 0x7f;
  VAR_5->av.stat_rate_sl |= (FUNC_7(VAR_6) & 0xf);
 }
}

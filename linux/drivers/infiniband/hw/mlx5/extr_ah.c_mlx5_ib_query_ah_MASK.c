
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rdma_ah_attr {int type; } ;
struct TYPE_2__ {int stat_rate_sl; int rlid; int rgid; int tclass; int hop_limit; int grh_gid_fl; } ;
struct mlx5_ib_ah {TYPE_1__ av; } ;
struct ib_ah {int type; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rdma_ah_attr*,int ,int) ;
 int FUNC_3 (struct rdma_ah_attr*,int ) ;
 int FUNC_4 (struct rdma_ah_attr*,int ) ;
 int FUNC_5 (struct rdma_ah_attr*,int *,int,int,int ,int ) ;
 int FUNC_6 (struct rdma_ah_attr*,int) ;
 int FUNC_7 (struct rdma_ah_attr*,int) ;
 struct mlx5_ib_ah* FUNC_8 (struct ib_ah*) ;

int FUNC_9(struct ib_ah *VAR_0, struct rdma_ah_attr *VAR_1)
{
 struct mlx5_ib_ah *VAR_2 = FUNC_8(VAR_0);
 u32 VAR_3;

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));
 VAR_1->type = VAR_0->type;

 VAR_3 = FUNC_1(VAR_2->av.grh_gid_fl);
 if (VAR_3 & (1 << 30)) {
  FUNC_5(VAR_1, ((void*)0),
    VAR_3 & 0xfffff,
    (VAR_3 >> 20) & 0xff,
    VAR_2->av.hop_limit,
    VAR_2->av.tclass);
  FUNC_3(VAR_1, VAR_2->av.rgid);
 }
 FUNC_4(VAR_1, FUNC_0(VAR_2->av.rlid));
 FUNC_7(VAR_1, VAR_2->av.stat_rate_sl >> 4);
 FUNC_6(VAR_1, VAR_2->av.stat_rate_sl & 0xf);

 return 0;
}

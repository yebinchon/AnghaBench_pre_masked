
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct rdma_ah_attr {scalar_t__ type; } ;
struct TYPE_5__ {int g_slid; int dgid; int hop_limit; int gid_index; int sl_tclass_flowlabel; scalar_t__ stat_rate; int dlid; int port_pd; } ;
struct TYPE_4__ {int sl_tclass_flowlabel; } ;
struct TYPE_6__ {TYPE_2__ ib; TYPE_1__ eth; } ;
struct mlx4_ib_ah {TYPE_3__ av; } ;
struct ib_ah {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rdma_ah_attr*,int ,int) ;
 scalar_t__ FUNC_3 (struct mlx4_ib_ah*) ;
 int FUNC_4 (struct rdma_ah_attr*,int ) ;
 int FUNC_5 (struct rdma_ah_attr*,int ) ;
 int FUNC_6 (struct rdma_ah_attr*,int *,int,int ,int ,int) ;
 int FUNC_7 (struct rdma_ah_attr*,int) ;
 int FUNC_8 (struct rdma_ah_attr*,int) ;
 int FUNC_9 (struct rdma_ah_attr*,int) ;
 int FUNC_10 (struct rdma_ah_attr*,scalar_t__) ;
 struct mlx4_ib_ah* FUNC_11 (struct ib_ah*) ;

int FUNC_12(struct ib_ah *VAR_2, struct rdma_ah_attr *VAR_3)
{
 struct mlx4_ib_ah *VAR_4 = FUNC_11(VAR_2);
 int VAR_5 = FUNC_1(VAR_4->av.ib.port_pd) >> 24;

 FUNC_2(VAR_3, 0, sizeof *VAR_3);
 VAR_3->type = VAR_2->type;

 if (VAR_3->type == VAR_1) {
  FUNC_5(VAR_3, 0);
  FUNC_9(VAR_3,
          FUNC_1(VAR_4->av.eth.sl_tclass_flowlabel)
          >> 29);
 } else {
  FUNC_5(VAR_3, FUNC_0(VAR_4->av.ib.dlid));
  FUNC_9(VAR_3,
          FUNC_1(VAR_4->av.ib.sl_tclass_flowlabel)
          >> 28);
 }

 FUNC_8(VAR_3, VAR_5);
 if (VAR_4->av.ib.stat_rate)
  FUNC_10(VAR_3,
     VAR_4->av.ib.stat_rate -
     VAR_0);
 FUNC_7(VAR_3, VAR_4->av.ib.g_slid & 0x7F);
 if (FUNC_3(VAR_4)) {
  u32 VAR_6 = FUNC_1(VAR_4->av.ib.sl_tclass_flowlabel);

  FUNC_6(VAR_3, ((void*)0),
    VAR_6 & 0xfffff, VAR_4->av.ib.gid_index,
    VAR_4->av.ib.hop_limit,
    VAR_6 >> 20);
  FUNC_4(VAR_3, VAR_4->av.ib.dgid);
 }

 return 0;
}

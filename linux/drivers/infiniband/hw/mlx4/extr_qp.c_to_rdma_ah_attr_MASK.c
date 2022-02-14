
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct rdma_ah_attr {int type; } ;
struct mlx4_qp_path {int sched_queue; int grh_mylmc; int rgid; int tclass_flowlabel; int hop_limit; int mgid_index; scalar_t__ static_rate; int rlid; } ;
struct mlx4_ib_dev {int ib_dev; struct mlx4_dev* dev; } ;
struct TYPE_2__ {scalar_t__ num_ports; } ;
struct mlx4_dev {TYPE_1__ caps; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct rdma_ah_attr*,int ,int) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (struct rdma_ah_attr*,int ) ;
 int FUNC_5 (struct rdma_ah_attr*,int ) ;
 int FUNC_6 (struct rdma_ah_attr*,int *,int,int ,int ,int) ;
 int FUNC_7 (struct rdma_ah_attr*,int) ;
 int FUNC_8 (struct rdma_ah_attr*,scalar_t__) ;
 int FUNC_9 (struct rdma_ah_attr*,int) ;
 int FUNC_10 (struct rdma_ah_attr*,scalar_t__) ;

__attribute__((used)) static void FUNC_11(struct mlx4_ib_dev *VAR_1,
       struct rdma_ah_attr *VAR_2,
       struct mlx4_qp_path *VAR_3)
{
 struct mlx4_dev *VAR_4 = VAR_1->dev;
 u8 VAR_5 = VAR_3->sched_queue & 0x40 ? 2 : 1;

 FUNC_2(VAR_2, 0, sizeof(*VAR_2));
 if (VAR_5 == 0 || VAR_5 > VAR_4->caps.num_ports)
  return;
 VAR_2->type = FUNC_3(&VAR_1->ib_dev, VAR_5);

 if (VAR_2->type == VAR_0)
  FUNC_9(VAR_2, ((VAR_3->sched_queue >> 3) & 0x7) |
          ((VAR_3->sched_queue & 4) << 1));
 else
  FUNC_9(VAR_2, (VAR_3->sched_queue >> 2) & 0xf);
 FUNC_8(VAR_2, VAR_5);

 FUNC_5(VAR_2, FUNC_0(VAR_3->rlid));
 FUNC_7(VAR_2, VAR_3->grh_mylmc & 0x7f);
 FUNC_10(VAR_2,
    VAR_3->static_rate ? VAR_3->static_rate - 5 : 0);
 if (VAR_3->grh_mylmc & (1 << 7)) {
  FUNC_6(VAR_2, ((void*)0),
    FUNC_1(VAR_3->tclass_flowlabel) & 0xfffff,
    VAR_3->mgid_index,
    VAR_3->hop_limit,
    (FUNC_1(VAR_3->tclass_flowlabel)
     >> 20) & 0xff);
  FUNC_4(VAR_2, VAR_3->rgid);
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct rdma_ah_attr {int type; } ;
struct mlx5_qp_path {scalar_t__ port; int dci_cfi_prio_sl; int grh_mlid; int rgid; int hop_limit; int mgid_index; int tclass_flowlabel; scalar_t__ static_rate; int rlid; } ;
struct mlx5_ib_dev {scalar_t__ num_ports; int ib_dev; } ;


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

__attribute__((used)) static void FUNC_11(struct mlx5_ib_dev *VAR_0,
       struct rdma_ah_attr *VAR_1,
       struct mlx5_qp_path *VAR_2)
{

 FUNC_2(VAR_1, 0, sizeof(*VAR_1));

 if (!VAR_2->port || VAR_2->port > VAR_0->num_ports)
  return;

 VAR_1->type = FUNC_3(&VAR_0->ib_dev, VAR_2->port);

 FUNC_8(VAR_1, VAR_2->port);
 FUNC_9(VAR_1, VAR_2->dci_cfi_prio_sl & 0xf);

 FUNC_5(VAR_1, FUNC_0(VAR_2->rlid));
 FUNC_7(VAR_1, VAR_2->grh_mlid & 0x7f);
 FUNC_10(VAR_1,
    VAR_2->static_rate ? VAR_2->static_rate - 5 : 0);
 if (VAR_2->grh_mlid & (1 << 7)) {
  u32 VAR_3 = FUNC_1(VAR_2->tclass_flowlabel);

  FUNC_6(VAR_1, ((void*)0),
    VAR_3 & 0xfffff,
    VAR_2->mgid_index,
    VAR_2->hop_limit,
    (VAR_3 >> 20) & 0xff);
  FUNC_4(VAR_1, VAR_2->rgid);
 }
}

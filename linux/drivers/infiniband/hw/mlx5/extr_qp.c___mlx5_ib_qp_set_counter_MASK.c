
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct rdma_counter {int id; } ;
struct mlx5_qp_context {int qp_counter_set_usr_page; } ;
struct mlx5_ib_qp_base {int mqp; } ;
struct TYPE_2__ {struct mlx5_ib_qp_base base; } ;
struct mlx5_ib_qp {TYPE_1__ trans_qp; scalar_t__ port; } ;
struct mlx5_ib_dev {int mdev; } ;
struct ib_qp {int device; } ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,int ,int ,struct mlx5_qp_context*,int *) ;
 int FUNC_3 (struct mlx5_ib_dev*,scalar_t__) ;
 int VAR_2 ;
 struct mlx5_ib_dev* FUNC_4 (int ) ;
 struct mlx5_ib_qp* FUNC_5 (struct ib_qp*) ;

__attribute__((used)) static int FUNC_6(struct ib_qp *VAR_3,
        struct rdma_counter *VAR_4)
{
 struct mlx5_ib_dev *VAR_5 = FUNC_4(VAR_3->device);
 struct mlx5_ib_qp *VAR_6 = FUNC_5(VAR_3);
 struct mlx5_qp_context VAR_7 = {};
 struct mlx5_ib_qp_base *VAR_8;
 u32 VAR_9;

 if (!FUNC_0(VAR_5->mdev, VAR_2))
  return 0;

 if (VAR_4)
  VAR_9 = VAR_4->id;
 else
  VAR_9 = FUNC_3(VAR_5, VAR_6->port - 1);

 VAR_8 = &VAR_6->trans_qp.base;
 VAR_7.qp_counter_set_usr_page &= FUNC_1(0xffffff);
 VAR_7.qp_counter_set_usr_page |= FUNC_1(VAR_9 << 24);
 return FUNC_2(VAR_5->mdev,
       VAR_0,
       VAR_1,
       &VAR_7, &VAR_8->mqp);
}

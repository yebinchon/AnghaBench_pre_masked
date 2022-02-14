
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u16 ;
struct mlx5_ib_dev {int mdev; } ;
struct TYPE_2__ {int cqn; } ;
struct mlx5_ib_cq {TYPE_1__ mcq; } ;
struct ib_cq {int device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,TYPE_1__*,int ,int ) ;
 int FUNC_2 (struct mlx5_ib_dev*,char*,int ) ;
 struct mlx5_ib_cq* FUNC_3 (struct ib_cq*) ;
 struct mlx5_ib_dev* FUNC_4 (int ) ;

int FUNC_5(struct ib_cq *VAR_4, u16 VAR_5, u16 VAR_6)
{
 struct mlx5_ib_dev *VAR_7 = FUNC_4(VAR_4->device);
 struct mlx5_ib_cq *VAR_8 = FUNC_3(VAR_4);
 int VAR_9;

 if (!FUNC_0(VAR_7->mdev, VAR_3))
  return -VAR_1;

 if (VAR_6 > VAR_2)
  return -VAR_0;

 VAR_9 = FUNC_1(VAR_7->mdev, &VAR_8->mcq,
          VAR_6, VAR_5);
 if (VAR_9)
  FUNC_2(VAR_7, "modify cq 0x%x failed\n", VAR_8->mcq.cqn);

 return VAR_9;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_ib_dev {int mdev; } ;
struct mlx5_core_rsc_common {int dummy; } ;
struct mlx5_core_srq {struct mlx5_core_rsc_common common; } ;


 int VAR_0 ;




 struct mlx5_core_srq* FUNC_0 (struct mlx5_ib_dev*,int ) ;
 struct mlx5_core_rsc_common* FUNC_1 (int ,int ,int ) ;

__attribute__((used)) static inline struct mlx5_core_rsc_common *FUNC_2(struct mlx5_ib_dev *VAR_1,
             u32 VAR_2, int VAR_3)
{
 struct mlx5_core_rsc_common *VAR_4 = ((void*)0);
 struct mlx5_core_srq *VAR_5;

 switch (VAR_3) {
 case 128:
  VAR_5 = FUNC_0(VAR_1, VAR_2);
  if (VAR_5)
   VAR_4 = &VAR_5->common;
  break;
 case 130:
 case 129:
 case 131:
  VAR_4 = FUNC_1(VAR_1->mdev, VAR_2, VAR_0);
  break;
 default:
  break;
 }

 return VAR_4;
}

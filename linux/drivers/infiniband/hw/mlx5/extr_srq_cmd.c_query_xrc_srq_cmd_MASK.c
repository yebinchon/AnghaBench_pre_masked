
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xrcsrq_in ;
typedef int u32 ;
struct mlx5_srq_attr {int flags; } ;
struct mlx5_ib_dev {int mdev; } ;
struct mlx5_core_srq {int srqn; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (int ,int *,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*,void*,int ) ;
 int FUNC_2 (int ,int *,int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ VAR_4 ;
 int FUNC_5 (void*,struct mlx5_srq_attr*) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int ) ;
 int FUNC_8 (int *,int ,int) ;
 int FUNC_9 (int ,int *,int,int *,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

__attribute__((used)) static int FUNC_10(struct mlx5_ib_dev *VAR_11,
        struct mlx5_core_srq *VAR_12,
        struct mlx5_srq_attr *VAR_13)
{
 u32 VAR_14[FUNC_4(VAR_6)];
 u32 *VAR_15;
 void *VAR_16;
 int VAR_17;

 VAR_15 = FUNC_7(FUNC_3(VAR_7), VAR_1);
 if (!VAR_15)
  return -VAR_0;
 FUNC_8(VAR_14, 0, sizeof(VAR_14));

 FUNC_2(VAR_6, VAR_14, VAR_5,
   VAR_2);
 FUNC_2(VAR_6, VAR_14, VAR_10, VAR_12->srqn);

 VAR_17 = FUNC_9(VAR_11->mdev, VAR_14, sizeof(VAR_14),
       VAR_15, FUNC_3(VAR_7));
 if (VAR_17)
  goto out;

 VAR_16 = FUNC_0(VAR_7, VAR_15,
    VAR_9);
 FUNC_5(VAR_16, VAR_13);
 if (FUNC_1(VAR_16, VAR_16, VAR_8) != VAR_4)
  VAR_13->flags |= VAR_3;

out:
 FUNC_6(VAR_15);
 return VAR_17;
}

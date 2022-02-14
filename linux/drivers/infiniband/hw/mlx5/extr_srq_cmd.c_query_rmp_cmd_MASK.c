
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef void u32 ;
struct mlx5_srq_attr {int flags; } ;
struct mlx5_ib_dev {int mdev; } ;
struct mlx5_core_srq {int srqn; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,void*,int ) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (void*,void*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (void*,void*,int ,int ) ;
 int VAR_4 ;
 int FUNC_3 (void*) ;
 int FUNC_4 (void*,struct mlx5_srq_attr*) ;
 int FUNC_5 (void*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (int ,void*,int,void*,int) ;
 int VAR_5 ;
 void* VAR_6 ;
 void* VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_8(struct mlx5_ib_dev *VAR_12, struct mlx5_core_srq *VAR_13,
    struct mlx5_srq_attr *VAR_14)
{
 u32 *VAR_15 = ((void*)0);
 u32 *VAR_16 = ((void*)0);
 void *VAR_17;
 int VAR_18;
 int VAR_19;
 int VAR_20;

 VAR_18 = FUNC_3(VAR_7);
 VAR_19 = FUNC_3(VAR_6);

 VAR_15 = FUNC_6(VAR_18, VAR_1);
 VAR_16 = FUNC_6(VAR_19, VAR_1);
 if (!VAR_15 || !VAR_16) {
  VAR_20 = -VAR_0;
  goto out;
 }

 FUNC_2(VAR_6, VAR_16, VAR_5, VAR_2);
 FUNC_2(VAR_6, VAR_16, VAR_9, VAR_13->srqn);
 VAR_20 = FUNC_7(VAR_12->mdev, VAR_16, VAR_19, VAR_15, VAR_18);
 if (VAR_20)
  goto out;

 VAR_17 = FUNC_0(VAR_7, VAR_15, VAR_8);
 FUNC_4(FUNC_0(VAR_17, VAR_17, VAR_11), VAR_14);
 if (FUNC_1(VAR_17, VAR_17, VAR_10) != VAR_3)
  VAR_14->flags |= VAR_4;

out:
 FUNC_5(VAR_15);
 FUNC_5(VAR_16);
 return VAR_20;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mlx5_srq_attr {int uid; int pas; int user_index; } ;
struct mlx5_ib_dev {int mdev; } ;
struct mlx5_core_srq {int uid; int srqn; } ;
typedef int create_out ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,void*,void*) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *,int ) ;
 int FUNC_2 (void*,void*,int ,int ) ;
 int FUNC_3 (void*) ;
 int FUNC_4 (int ) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_5 (struct mlx5_srq_attr*) ;
 int FUNC_6 (void*) ;
 void* FUNC_7 (int,int ) ;
 int FUNC_8 (void*,int ,int) ;
 int FUNC_9 (int *,int ,int) ;
 int FUNC_10 (int ,void*,int,int *,int) ;
 int VAR_5 ;
 int FUNC_11 (void*,struct mlx5_srq_attr*) ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_12(struct mlx5_ib_dev *VAR_10,
         struct mlx5_core_srq *VAR_11,
         struct mlx5_srq_attr *VAR_12)
{
 u32 VAR_13[FUNC_4(VAR_4)];
 void *VAR_14;
 void *VAR_15;
 void *VAR_16;
 int VAR_17;
 int VAR_18;
 int VAR_19;

 VAR_17 = FUNC_5(VAR_12);
 VAR_18 = FUNC_3(VAR_3) + VAR_17;
 VAR_14 = FUNC_7(VAR_18, VAR_1);
 if (!VAR_14)
  return -VAR_0;

 FUNC_2(VAR_3, VAR_14, VAR_6, VAR_12->uid);
 VAR_15 = FUNC_0(VAR_3, VAR_14,
    VAR_8);
 VAR_16 = FUNC_0(VAR_3, VAR_14, VAR_16);

 FUNC_11(VAR_15, VAR_12);
 FUNC_2(VAR_15, VAR_15, VAR_7, VAR_12->user_index);
 FUNC_8(VAR_16, VAR_12->pas, VAR_17);
 FUNC_2(VAR_3, VAR_14, VAR_5,
   VAR_2);

 FUNC_9(VAR_13, 0, sizeof(VAR_13));
 VAR_19 = FUNC_10(VAR_10->mdev, VAR_14, VAR_18, VAR_13,
       sizeof(VAR_13));
 if (VAR_19)
  goto out;

 VAR_11->srqn = FUNC_1(VAR_4, VAR_13, VAR_9);
 VAR_11->uid = VAR_12->uid;
out:
 FUNC_6(VAR_14);
 return VAR_19;
}

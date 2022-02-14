
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct mlx5_ib_dev {int mdev; } ;
struct mlx5_core_srq {int srqn; int uid; } ;


 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_0 (void*,void*,void*) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (void*,void*,int,int) ;
 int FUNC_2 (void*) ;
 void* VAR_4 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (int ,void*,int,void*,int) ;
 void* VAR_5 ;
 void* VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static int FUNC_6(struct mlx5_ib_dev *VAR_13, struct mlx5_core_srq *VAR_14,
         u16 VAR_15)
{
 void *VAR_16 = ((void*)0);
 void *VAR_17 = ((void*)0);
 void *VAR_18;
 void *VAR_19;
 void *VAR_20;
 int VAR_21;
 int VAR_22;
 int VAR_23;

 VAR_22 = FUNC_2(VAR_5);
 VAR_21 = FUNC_2(VAR_6);

 VAR_17 = FUNC_4(VAR_22, VAR_1);
 VAR_16 = FUNC_4(VAR_21, VAR_1);
 if (!VAR_17 || !VAR_16) {
  VAR_23 = -VAR_0;
  goto out;
 }

 VAR_18 = FUNC_0(VAR_5, VAR_17, VAR_4);
 VAR_20 = FUNC_0(VAR_5, VAR_17, VAR_20);
 VAR_19 = FUNC_0(VAR_18, VAR_18, VAR_19);

 FUNC_1(VAR_5, VAR_17, VAR_9, VAR_3);
 FUNC_1(VAR_5, VAR_17, VAR_10, VAR_14->srqn);
 FUNC_1(VAR_5, VAR_17, VAR_12, VAR_14->uid);
 FUNC_1(VAR_19, VAR_19, VAR_15, VAR_15);
 FUNC_1(VAR_8, VAR_20, VAR_15, 1);
 FUNC_1(VAR_18, VAR_18, VAR_11, VAR_3);
 FUNC_1(VAR_5, VAR_17, VAR_7, VAR_2);

 VAR_23 = FUNC_5(VAR_13->mdev, VAR_17, VAR_22, VAR_16, VAR_21);

out:
 FUNC_3(VAR_17);
 FUNC_3(VAR_16);
 return VAR_23;
}

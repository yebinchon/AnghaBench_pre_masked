
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u32 ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_core_dev {int dummy; } ;
typedef enum mlx5_ib_cong_node_type { ____Placeholder_mlx5_ib_cong_node_type } mlx5_ib_cong_node_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* FUNC_0 (int ,void*,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,void*,int ,int) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (void*) ;
 void* FUNC_4 (int,int ) ;
 int FUNC_5 (struct mlx5_core_dev*,void*,int) ;
 struct mlx5_core_dev* FUNC_6 (struct mlx5_ib_dev*,scalar_t__,int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct mlx5_ib_dev*,scalar_t__) ;
 int FUNC_9 (void*,int,int,int*) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static int FUNC_10(struct mlx5_ib_dev *VAR_10, u8 VAR_11,
     int VAR_12, u32 VAR_13)
{
 int VAR_14 = FUNC_2(VAR_8);
 void *VAR_15;
 void *VAR_16;
 enum mlx5_ib_cong_node_type VAR_17;
 struct mlx5_core_dev *VAR_18;
 u32 VAR_19 = 0;
 int VAR_20;


 VAR_18 = FUNC_6(VAR_10, VAR_11 + 1, ((void*)0));
 if (!VAR_18)
  return -VAR_0;

 VAR_15 = FUNC_4(VAR_14, VAR_2);
 if (!VAR_15) {
  VAR_20 = -VAR_1;
  goto alloc_err;
 }

 FUNC_1(VAR_8, VAR_15, VAR_9,
   VAR_3);

 VAR_17 = FUNC_7(VAR_12);
 FUNC_1(VAR_8, VAR_15, VAR_4, VAR_17);

 VAR_16 = FUNC_0(VAR_8, VAR_15, VAR_5);
 FUNC_9(VAR_16, VAR_12, VAR_13, &VAR_19);

 VAR_16 = FUNC_0(VAR_8, VAR_15, VAR_6);
 FUNC_1(VAR_7, VAR_16, VAR_7,
   VAR_19);

 VAR_20 = FUNC_5(VAR_18, VAR_15, VAR_14);
 FUNC_3(VAR_15);
alloc_err:
 FUNC_8(VAR_10, VAR_11 + 1);
 return VAR_20;
}

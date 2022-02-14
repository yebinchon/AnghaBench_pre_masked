
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
 int FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (void*) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (struct mlx5_core_dev*,int,void*,int) ;
 int FUNC_5 (void*,int) ;
 struct mlx5_core_dev* FUNC_6 (struct mlx5_ib_dev*,scalar_t__,int *) ;
 int FUNC_7 (int) ;
 int FUNC_8 (struct mlx5_ib_dev*,scalar_t__) ;
 int VAR_4 ;

__attribute__((used)) static int FUNC_9(struct mlx5_ib_dev *VAR_5, u8 VAR_6,
     int VAR_7, u32 *VAR_8)
{
 int VAR_9 = FUNC_1(VAR_4);
 void *VAR_10;
 void *VAR_11;
 int VAR_12;
 enum mlx5_ib_cong_node_type VAR_13;
 struct mlx5_core_dev *VAR_14;


 VAR_14 = FUNC_6(VAR_5, VAR_6 + 1, ((void*)0));
 if (!VAR_14)
  return -VAR_0;

 VAR_10 = FUNC_3(VAR_9, VAR_2);
 if (!VAR_10) {
  VAR_12 = -VAR_1;
  goto alloc_err;
 }

 VAR_13 = FUNC_7(VAR_7);

 VAR_12 = FUNC_4(VAR_14, VAR_13, VAR_10, VAR_9);
 if (VAR_12)
  goto free;

 VAR_11 = FUNC_0(VAR_4, VAR_10, VAR_3);
 *VAR_8 = FUNC_5(VAR_11, VAR_7);

free:
 FUNC_2(VAR_10);
alloc_err:
 FUNC_8(VAR_5, VAR_6 + 1);
 return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct mlx5_ib_dev {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct mlx5_ib_dev*,char*,char*) ;

__attribute__((used)) static void FUNC_1(struct mlx5_ib_dev *VAR_1, u64 VAR_2)
{
 FUNC_0(VAR_1, "MLX5_LIB_CAP_4K_UAR = %s\n",
      VAR_2 & VAR_0 ? "y" : "n");
}

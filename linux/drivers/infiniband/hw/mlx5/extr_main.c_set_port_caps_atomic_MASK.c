
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_ib_dev {int dummy; } ;
struct mlx5_hca_vport_context {int cap_mask1_perm; int cap_mask1; } ;
struct mlx5_core_dev {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct mlx5_core_dev*,int ,int ,int ,struct mlx5_hca_vport_context*) ;
 struct mlx5_core_dev* FUNC_1 (struct mlx5_ib_dev*,int ,int *) ;
 int FUNC_2 (struct mlx5_ib_dev*,int ) ;
 int FUNC_3 (struct mlx5_ib_dev*,char*,int,int) ;
 int FUNC_4 (struct mlx5_core_dev*,int ,int ,int ,struct mlx5_hca_vport_context*) ;

__attribute__((used)) static int FUNC_5(struct mlx5_ib_dev *VAR_2, u8 VAR_3, u32 VAR_4,
    u32 VAR_5)
{
 struct mlx5_hca_vport_context VAR_6 = {};
 struct mlx5_core_dev *VAR_7;
 u8 VAR_8;
 int VAR_9;

 VAR_7 = FUNC_1(VAR_2, VAR_3, &VAR_8);
 if (!VAR_7)
  return -VAR_1;

 VAR_9 = FUNC_4(VAR_7, 0, VAR_8, 0, &VAR_6);
 if (VAR_9)
  goto out;

 if (~VAR_6.cap_mask1_perm & VAR_4) {
  FUNC_3(VAR_2, "trying to change bitmask 0x%X but change supported 0x%X\n",
        VAR_4, VAR_6.cap_mask1_perm);
  VAR_9 = -VAR_0;
  goto out;
 }

 VAR_6.cap_mask1 = VAR_5;
 VAR_6.cap_mask1_perm = VAR_4;
 VAR_9 = FUNC_0(VAR_7, 0, VAR_8,
       0, &VAR_6);

out:
 FUNC_2(VAR_2, VAR_3);

 return VAR_9;
}

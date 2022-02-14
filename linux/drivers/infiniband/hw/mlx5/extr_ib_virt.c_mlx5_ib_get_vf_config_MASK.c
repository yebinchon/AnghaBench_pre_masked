
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_hca_vport_context {int policy; } ;
struct mlx5_core_dev {int dummy; } ;
struct ifla_vf_info {int linkstate; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct mlx5_hca_vport_context*) ;
 struct mlx5_hca_vport_context* FUNC_1 (int,int ) ;
 int FUNC_2 (struct ifla_vf_info*,int ,int) ;
 int FUNC_3 (struct mlx5_ib_dev*,char*,int,int) ;
 int FUNC_4 (struct mlx5_core_dev*,int,int,int,struct mlx5_hca_vport_context*) ;
 int FUNC_5 (int ) ;
 struct mlx5_ib_dev* FUNC_6 (struct ib_device*) ;

int FUNC_7(struct ib_device *VAR_4, int VAR_5, u8 VAR_6,
     struct ifla_vf_info *VAR_7)
{
 struct mlx5_ib_dev *VAR_8 = FUNC_6(VAR_4);
 struct mlx5_core_dev *VAR_9 = VAR_8->mdev;
 struct mlx5_hca_vport_context *VAR_10;
 int VAR_11;

 VAR_10 = FUNC_1(sizeof(*VAR_10), VAR_2);
 if (!VAR_10)
  return -VAR_1;

 VAR_11 = FUNC_4(VAR_9, 1, 1, VAR_5 + 1, VAR_10);
 if (VAR_11) {
  FUNC_3(VAR_8, "failed to query port policy for vf %d (%d)\n",
        VAR_5, VAR_11);
  goto free;
 }
 FUNC_2(VAR_7, 0, sizeof(*VAR_7));
 VAR_7->linkstate = FUNC_5(VAR_10->policy);
 if (VAR_7->linkstate == VAR_3)
  VAR_11 = -VAR_0;

free:
 FUNC_0(VAR_10);
 return VAR_11;
}

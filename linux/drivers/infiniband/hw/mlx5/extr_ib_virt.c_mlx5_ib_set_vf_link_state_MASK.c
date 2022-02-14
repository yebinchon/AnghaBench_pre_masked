
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct mlx5_vf_context {scalar_t__ policy; } ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_hca_vport_context {scalar_t__ policy; int field_select; } ;
struct TYPE_3__ {struct mlx5_vf_context* vfs_ctx; } ;
struct TYPE_4__ {TYPE_1__ sriov; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct mlx5_hca_vport_context*) ;
 struct mlx5_hca_vport_context* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int,int,int,struct mlx5_hca_vport_context*) ;
 scalar_t__ FUNC_3 (int) ;
 struct mlx5_ib_dev* FUNC_4 (struct ib_device*) ;

int FUNC_5(struct ib_device *VAR_5, int VAR_6,
         u8 VAR_7, int VAR_8)
{
 struct mlx5_ib_dev *VAR_9 = FUNC_4(VAR_5);
 struct mlx5_core_dev *VAR_10 = VAR_9->mdev;
 struct mlx5_hca_vport_context *VAR_11;
 struct mlx5_vf_context *VAR_12 = VAR_10->priv.sriov.vfs_ctx;
 int VAR_13;

 VAR_11 = FUNC_1(sizeof(*VAR_11), VAR_2);
 if (!VAR_11)
  return -VAR_1;

 VAR_11->policy = FUNC_3(VAR_8);
 if (VAR_11->policy == VAR_4) {
  VAR_13 = -VAR_0;
  goto out;
 }
 VAR_11->field_select = VAR_3;
 VAR_13 = FUNC_2(VAR_10, 1, 1, VAR_6 + 1, VAR_11);
 if (!VAR_13)
  VAR_12[VAR_6].policy = VAR_11->policy;

out:
 FUNC_0(VAR_11);
 return VAR_13;
}

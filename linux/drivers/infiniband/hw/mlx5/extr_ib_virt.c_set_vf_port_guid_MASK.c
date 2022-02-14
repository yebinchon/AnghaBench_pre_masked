
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef void* u64 ;
struct mlx5_vf_context {void* port_guid; } ;
struct mlx5_ib_dev {struct mlx5_core_dev* mdev; } ;
struct mlx5_hca_vport_context {void* port_guid; int field_select; } ;
struct TYPE_3__ {struct mlx5_vf_context* vfs_ctx; } ;
struct TYPE_4__ {TYPE_1__ sriov; } ;
struct mlx5_core_dev {TYPE_2__ priv; } ;
struct ib_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct mlx5_hca_vport_context*) ;
 struct mlx5_hca_vport_context* FUNC_1 (int,int ) ;
 int FUNC_2 (struct mlx5_core_dev*,int,int,int,struct mlx5_hca_vport_context*) ;
 struct mlx5_ib_dev* FUNC_3 (struct ib_device*) ;

__attribute__((used)) static int FUNC_4(struct ib_device *VAR_3, int VAR_4, u8 VAR_5, u64 VAR_6)
{
 struct mlx5_ib_dev *VAR_7 = FUNC_3(VAR_3);
 struct mlx5_core_dev *VAR_8 = VAR_7->mdev;
 struct mlx5_hca_vport_context *VAR_9;
 struct mlx5_vf_context *VAR_10 = VAR_8->priv.sriov.vfs_ctx;
 int VAR_11;

 VAR_9 = FUNC_1(sizeof(*VAR_9), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->field_select = VAR_2;
 VAR_9->port_guid = VAR_6;
 VAR_11 = FUNC_2(VAR_8, 1, 1, VAR_4 + 1, VAR_9);
 if (!VAR_11)
  VAR_10[VAR_4].port_guid = VAR_6;
 FUNC_0(VAR_9);
 return VAR_11;
}

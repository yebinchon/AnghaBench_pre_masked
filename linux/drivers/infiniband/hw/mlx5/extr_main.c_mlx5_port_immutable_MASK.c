
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct mlx5_ib_dev {int mdev; } ;
struct mlx5_hca_vport_context {int member_0; } ;
struct ib_port_immutable {int max_mad_size; int core_cap_flags; int gid_tbl_len; int pkey_tbl_len; } ;
struct ib_port_attr {int gid_tbl_len; int pkey_tbl_len; } ;
struct ib_device {int dummy; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (struct ib_device*,struct mlx5_hca_vport_context*) ;
 int FUNC_2 (struct ib_device*,int ,struct ib_port_attr*) ;
 int FUNC_3 (struct ib_device*,int ) ;
 int FUNC_4 (int ,int ,int ,int ,struct mlx5_hca_vport_context*) ;
 int VAR_2 ;
 struct mlx5_ib_dev* FUNC_5 (struct ib_device*) ;

__attribute__((used)) static int FUNC_6(struct ib_device *VAR_3, u8 VAR_4,
          struct ib_port_immutable *VAR_5)
{
 struct ib_port_attr VAR_6;
 struct mlx5_ib_dev *VAR_7 = FUNC_5(VAR_3);
 enum rdma_link_layer VAR_8 = FUNC_3(VAR_3, VAR_4);
 struct mlx5_hca_vport_context VAR_9 = {0};
 int VAR_10;

 VAR_10 = FUNC_2(VAR_3, VAR_4, &VAR_6);
 if (VAR_10)
  return VAR_10;

 if (VAR_8 == VAR_0) {
  VAR_10 = FUNC_4(VAR_7->mdev, 0, VAR_4, 0,
         &VAR_9);
  if (VAR_10)
   return VAR_10;
 }

 VAR_5->pkey_tbl_len = VAR_6.pkey_tbl_len;
 VAR_5->gid_tbl_len = VAR_6.gid_tbl_len;
 VAR_5->core_cap_flags = FUNC_1(VAR_3, &VAR_9);
 if ((VAR_8 == VAR_0) || FUNC_0(VAR_7->mdev, VAR_2))
  VAR_5->max_mad_size = VAR_1;

 return 0;
}

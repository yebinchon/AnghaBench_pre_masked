
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct mlx5_ib_dev {int mdev; } ;
struct mlx5_hca_vport_context {scalar_t__ grh_required; } ;
struct ib_device {int dummy; } ;
typedef enum rdma_link_layer { ____Placeholder_rdma_link_layer } rdma_link_layer ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct ib_device*,int) ;
 int VAR_11 ;
 struct mlx5_ib_dev* FUNC_3 (struct ib_device*) ;

__attribute__((used)) static u32 FUNC_4(struct ib_device *VAR_12,
         struct mlx5_hca_vport_context *VAR_13)
{
 struct mlx5_ib_dev *VAR_14 = FUNC_3(VAR_12);
 enum rdma_link_layer VAR_15 = FUNC_2(VAR_12, 1);
 u8 VAR_16 = FUNC_0(VAR_14->mdev, VAR_10);
 u8 VAR_17 = FUNC_0(VAR_14->mdev, VAR_11);
 bool VAR_18 = !FUNC_1(VAR_14->mdev);
 u32 VAR_19 = 0;

 if (VAR_13->grh_required)
  VAR_19 |= VAR_5;

 if (VAR_15 == VAR_0)
  return VAR_19 | VAR_6;

 if (VAR_18)
  VAR_19 |= VAR_9;

 if (!(VAR_16 & VAR_1))
  return VAR_19;

 if (!(VAR_16 & VAR_2))
  return VAR_19;

 if (VAR_17 & VAR_3)
  VAR_19 |= VAR_7;

 if (VAR_17 & VAR_4)
  VAR_19 |= VAR_8;

 return VAR_19;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ib_flow_action {int dummy; } ;
struct TYPE_2__ {struct mlx5_ib_dev* dev; int sub_type; int modify_hdr; } ;
struct mlx5_ib_flow_action {struct ib_flow_action ib_action; TYPE_1__ flow_action_raw; } ;
struct mlx5_ib_dev {int mdev; } ;
typedef enum mlx5_ib_uapi_flow_table_type { ____Placeholder_mlx5_ib_uapi_flow_table_type } mlx5_ib_uapi_flow_table_type ;
typedef enum mlx5_flow_namespace_type { ____Placeholder_mlx5_flow_namespace_type } mlx5_flow_namespace_type ;


 int VAR_0 ;
 int VAR_1 ;
 struct ib_flow_action* FUNC_0 (int) ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_3 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_ib_flow_action*) ;
 struct mlx5_ib_flow_action* FUNC_4 (int,int ) ;
 int FUNC_5 (int,int*) ;
 int FUNC_6 (int ,int,int ,void*) ;

__attribute__((used)) static struct ib_flow_action *
FUNC_7(struct mlx5_ib_dev *VAR_4,
        enum mlx5_ib_uapi_flow_table_type VAR_5,
        u8 VAR_6, void *VAR_7)
{
 enum mlx5_flow_namespace_type VAR_8;
 struct mlx5_ib_flow_action *VAR_9;
 int VAR_10;

 VAR_10 = FUNC_5(VAR_5, &VAR_8);
 if (VAR_10)
  return FUNC_0(-VAR_0);

 VAR_9 = FUNC_4(sizeof(*VAR_9), VAR_2);
 if (!VAR_9)
  return FUNC_0(-VAR_1);

 VAR_9->flow_action_raw.modify_hdr =
  FUNC_6(VAR_4->mdev, VAR_8, VAR_6, VAR_7);

 if (FUNC_1(VAR_9->flow_action_raw.modify_hdr)) {
  VAR_10 = FUNC_2(VAR_9->flow_action_raw.modify_hdr);
  FUNC_3(VAR_9);
  return FUNC_0(VAR_10);
 }
 VAR_9->flow_action_raw.sub_type =
  VAR_3;
 VAR_9->flow_action_raw.dev = VAR_4;

 return &VAR_9->ib_action;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct mlx5_ib_dev* dev; int sub_type; int pkt_reformat; } ;
struct mlx5_ib_flow_action {TYPE_1__ flow_action_raw; } ;
struct mlx5_ib_dev {int mdev; } ;
typedef enum mlx5_flow_namespace_type { ____Placeholder_mlx5_flow_namespace_type } mlx5_flow_namespace_type ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int*) ;
 int FUNC_4 (int ,int ,size_t,void*,int) ;

__attribute__((used)) static int FUNC_5(
 struct mlx5_ib_dev *VAR_1,
 struct mlx5_ib_flow_action *VAR_2,
 u8 VAR_3, u8 VAR_4,
 void *VAR_5, size_t VAR_6)
{
 enum mlx5_flow_namespace_type VAR_7;
 u8 VAR_8;
 int VAR_9;

 VAR_9 = FUNC_3(VAR_3, &VAR_7);
 if (VAR_9)
  return VAR_9;

 VAR_9 = FUNC_2(VAR_4, &VAR_8);
 if (VAR_9)
  return VAR_9;

 VAR_2->flow_action_raw.pkt_reformat =
  FUNC_4(VAR_1->mdev, VAR_8, VAR_6,
        VAR_5, VAR_7);
 if (FUNC_0(VAR_2->flow_action_raw.pkt_reformat)) {
  VAR_9 = FUNC_1(VAR_2->flow_action_raw.pkt_reformat);
  return VAR_9;
 }

 VAR_2->flow_action_raw.sub_type =
  VAR_0;
 VAR_2->flow_action_raw.dev = VAR_1;

 return 0;
}

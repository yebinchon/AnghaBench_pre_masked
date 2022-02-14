
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mlx5_ib_dev {TYPE_2__* mdev; } ;
struct mlx5_flow_spec {int match_criteria; int match_value; } ;
struct mlx5_eswitch_rep {int vport; } ;
struct mlx5_eswitch {int dummy; } ;
struct TYPE_3__ {struct mlx5_eswitch* eswitch; } ;
struct TYPE_4__ {TYPE_1__ priv; } ;


 void* FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,void*,int ,int ) ;
 int FUNC_2 (int ,void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (struct mlx5_eswitch*,int ) ;
 scalar_t__ FUNC_4 (struct mlx5_eswitch*) ;
 int VAR_6 ;

__attribute__((used)) static void FUNC_5(struct mlx5_ib_dev *VAR_7,
      struct mlx5_flow_spec *VAR_8,
      struct mlx5_eswitch_rep *VAR_9)
{
 struct mlx5_eswitch *VAR_10 = VAR_7->mdev->priv.eswitch;
 void *VAR_11;

 if (FUNC_4(VAR_10)) {
  VAR_11 = FUNC_0(VAR_0, VAR_8->match_value,
        VAR_5);

  FUNC_1(VAR_2, VAR_11, VAR_3,
    FUNC_3(VAR_10,
           VAR_9->vport));
  VAR_11 = FUNC_0(VAR_0, VAR_8->match_criteria,
        VAR_5);

  FUNC_2(VAR_2, VAR_11, VAR_3);
 } else {
  VAR_11 = FUNC_0(VAR_0, VAR_8->match_value,
        VAR_4);

  FUNC_1(VAR_1, VAR_11, VAR_6, VAR_9->vport);

  VAR_11 = FUNC_0(VAR_0, VAR_8->match_criteria,
        VAR_4);

  FUNC_2(VAR_1, VAR_11, VAR_6);
 }
}

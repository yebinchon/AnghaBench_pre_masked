
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ctx; } ;
struct mlx5_ib_flow_action {TYPE_1__ esp_aes_gcm; } ;
struct ib_flow_action {int type; } ;




 int FUNC_0 (int) ;
 int FUNC_1 (struct mlx5_ib_flow_action*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct mlx5_ib_flow_action*) ;
 struct mlx5_ib_flow_action* FUNC_4 (struct ib_flow_action*) ;

__attribute__((used)) static int FUNC_5(struct ib_flow_action *VAR_0)
{
 struct mlx5_ib_flow_action *VAR_1 = FUNC_4(VAR_0);

 switch (VAR_0->type) {
 case 129:




  FUNC_2(VAR_1->esp_aes_gcm.ctx);
  break;
 case 128:
  FUNC_3(VAR_1);
  break;
 default:
  FUNC_0(1);
  break;
 }

 FUNC_1(VAR_1);
 return 0;
}

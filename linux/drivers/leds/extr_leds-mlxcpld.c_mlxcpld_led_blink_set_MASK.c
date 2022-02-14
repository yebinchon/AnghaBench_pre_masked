
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ base_color; int offset; int mask; } ;
struct mlxcpld_led_priv {TYPE_1__ param; } ;
struct led_classdev {int dummy; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 struct mlxcpld_led_priv* FUNC_0 (struct led_classdev*) ;
 int FUNC_1 (int ,int ,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct led_classdev *VAR_5,
     unsigned long *VAR_6,
     unsigned long *VAR_7)
{
 struct mlxcpld_led_priv *VAR_8 = FUNC_0(VAR_5);





 if (!(*VAR_6 == 0 && *VAR_7 == 0) &&
     !(*VAR_6 == VAR_1 &&
       *VAR_7 == VAR_1) &&
     !(*VAR_6 == VAR_2 &&
       *VAR_7 == VAR_2))
  return -VAR_0;

 if (*VAR_6 == VAR_2)
  FUNC_1(VAR_8->param.mask, VAR_8->param.offset,
         VAR_8->param.base_color +
         VAR_3);
 else
  FUNC_1(VAR_8->param.mask, VAR_8->param.offset,
         VAR_8->param.base_color +
         VAR_4);

 return 0;
}

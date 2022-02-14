
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vc5_driver_data {int pin_xin; TYPE_2__* chip_info; } ;
struct TYPE_3__ {int of_node; } ;
struct i2c_client {TYPE_1__ dev; } ;
struct TYPE_4__ {int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct vc5_driver_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_1)
{
 struct vc5_driver_data *VAR_2 = FUNC_1(VAR_1);

 FUNC_2(VAR_1->dev.of_node);

 if (VAR_2->chip_info->flags & VAR_0)
  FUNC_0(VAR_2->pin_xin);

 return 0;
}

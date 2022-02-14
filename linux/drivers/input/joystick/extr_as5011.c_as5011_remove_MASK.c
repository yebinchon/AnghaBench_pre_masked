
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int dummy; } ;
struct as5011_device {int input_dev; int button_gpio; int button_irq; int axis_irq; } ;


 int FUNC_0 (int ,struct as5011_device*) ;
 int FUNC_1 (int ) ;
 struct as5011_device* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct as5011_device*) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct as5011_device *VAR_1 = FUNC_2(VAR_0);

 FUNC_0(VAR_1->axis_irq, VAR_1);
 FUNC_0(VAR_1->button_irq, VAR_1);
 FUNC_1(VAR_1->button_gpio);

 FUNC_3(VAR_1->input_dev);
 FUNC_4(VAR_1);

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synaptics_i2c {int input; } ;
struct i2c_client {int irq; } ;


 int FUNC_0 (int ,struct synaptics_i2c*) ;
 struct synaptics_i2c* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct synaptics_i2c*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1)
{
 struct synaptics_i2c *VAR_2 = FUNC_1(VAR_1);

 if (!VAR_0)
  FUNC_0(VAR_1->irq, VAR_2);

 FUNC_2(VAR_2->input);
 FUNC_3(VAR_2);

 return 0;
}

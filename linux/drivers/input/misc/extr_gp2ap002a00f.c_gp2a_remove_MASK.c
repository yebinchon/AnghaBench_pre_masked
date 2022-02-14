
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int irq; } ;
struct gp2a_platform_data {int (* hw_shutdown ) (struct i2c_client*) ;int vout_gpio; } ;
struct gp2a_data {int input; struct gp2a_platform_data* pdata; } ;


 int FUNC_0 (int ,struct gp2a_data*) ;
 int FUNC_1 (int ) ;
 struct gp2a_data* FUNC_2 (struct i2c_client*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (struct gp2a_data*) ;
 int FUNC_5 (struct i2c_client*) ;

__attribute__((used)) static int FUNC_6(struct i2c_client *VAR_0)
{
 struct gp2a_data *VAR_1 = FUNC_2(VAR_0);
 const struct gp2a_platform_data *VAR_2 = VAR_1->pdata;

 FUNC_0(VAR_0->irq, VAR_1);

 FUNC_3(VAR_1->input);
 FUNC_4(VAR_1);

 FUNC_1(VAR_2->vout_gpio);

 if (VAR_2->hw_shutdown)
  VAR_2->hw_shutdown(VAR_0);

 return 0;
}

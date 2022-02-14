
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct lm3532_data {scalar_t__ enable_gpio; int lock; } ;
struct i2c_client {int dummy; } ;


 int FUNC_0 (scalar_t__,int ) ;
 struct lm3532_data* FUNC_1 (struct i2c_client*) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_0)
{
 struct lm3532_data *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->lock);

 if (VAR_1->enable_gpio)
  FUNC_0(VAR_1->enable_gpio, 0);

 return 0;
}

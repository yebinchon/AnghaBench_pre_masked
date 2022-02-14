
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int adapter; } ;
struct at91_twi_dev {int dev; scalar_t__ smr; int * slave; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct at91_twi_dev*) ;
 int FUNC_2 (int ,char*) ;
 struct at91_twi_dev* FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct at91_twi_dev *VAR_1 = FUNC_3(VAR_0->adapter);

 FUNC_0(!VAR_1->slave);

 FUNC_2(VAR_1->dev, "leaving slave mode\n");

 VAR_1->slave = ((void*)0);
 VAR_1->smr = 0;

 FUNC_1(VAR_1);

 FUNC_4(VAR_1->dev);

 return 0;
}

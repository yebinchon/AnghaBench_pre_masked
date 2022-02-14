
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int adapter; } ;
struct dw_i2c_dev {int dev; int * slave; int irq; int (* disable ) (struct dw_i2c_dev*) ;int (* disable_int ) (struct dw_i2c_dev*) ;} ;


 struct dw_i2c_dev* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct dw_i2c_dev*) ;
 int FUNC_3 (struct dw_i2c_dev*) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct i2c_client *VAR_0)
{
 struct dw_i2c_dev *VAR_1 = FUNC_0(VAR_0->adapter);

 VAR_1->disable_int(VAR_1);
 VAR_1->disable(VAR_1);
 FUNC_4(VAR_1->irq);
 VAR_1->slave = ((void*)0);
 FUNC_1(VAR_1->dev);

 return 0;
}

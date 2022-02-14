
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int adapter; } ;
struct em_i2c_device {int * slave; int irq; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 struct em_i2c_device* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_4(struct i2c_client *VAR_1)
{
 struct em_i2c_device *VAR_2 = FUNC_1(VAR_1->adapter);

 FUNC_0(!VAR_2->slave);

 FUNC_3(0, VAR_2->base + VAR_0);






 FUNC_2(VAR_2->irq);
 VAR_2->slave = ((void*)0);

 return 0;
}

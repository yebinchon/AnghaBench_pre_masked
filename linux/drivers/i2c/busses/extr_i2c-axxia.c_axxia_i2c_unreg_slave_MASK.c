
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct i2c_client {int adapter; } ;
struct axxia_i2c_dev {int * slave; int irq; scalar_t__ base; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct axxia_i2c_dev* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static int FUNC_3(struct i2c_client *VAR_4)
{
 struct axxia_i2c_dev *VAR_5 = FUNC_0(VAR_4->adapter);


 FUNC_2(VAR_1, VAR_5->base + VAR_0);
 FUNC_2(VAR_3, VAR_5->base + VAR_2);

 FUNC_1(VAR_5->irq);

 VAR_5->slave = ((void*)0);

 return 0;
}

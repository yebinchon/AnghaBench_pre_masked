
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct highlander_i2c_dev {int base; scalar_t__ irq; int adapter; } ;


 int FUNC_0 (scalar_t__,struct highlander_i2c_dev*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct highlander_i2c_dev*) ;
 struct highlander_i2c_dev* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct highlander_i2c_dev *VAR_1 = FUNC_4(VAR_0);

 FUNC_1(&VAR_1->adapter);

 if (VAR_1->irq)
  FUNC_0(VAR_1->irq, VAR_1);

 FUNC_2(VAR_1->base);
 FUNC_3(VAR_1);

 return 0;
}

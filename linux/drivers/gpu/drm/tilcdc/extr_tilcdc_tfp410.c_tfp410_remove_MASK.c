
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tilcdc_module {int dummy; } ;
struct tfp410_module {int gpio; int i2c; } ;
struct platform_device {int dev; } ;


 struct tilcdc_module* FUNC_0 (int *) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct tilcdc_module*) ;
 struct tfp410_module* FUNC_4 (struct tilcdc_module*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct tilcdc_module *VAR_1 = FUNC_0(&VAR_0->dev);
 struct tfp410_module *VAR_2 = FUNC_4(VAR_1);

 FUNC_2(VAR_2->i2c);
 FUNC_1(VAR_2->gpio);

 FUNC_3(VAR_1);

 return 0;
}

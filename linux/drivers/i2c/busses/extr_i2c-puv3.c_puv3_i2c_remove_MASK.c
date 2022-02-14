
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int start; } ;
struct platform_device {int dev; } ;
struct i2c_adapter {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct i2c_adapter*) ;
 struct i2c_adapter* FUNC_1 (struct platform_device*) ;
 struct resource* FUNC_2 (struct platform_device*,int ,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct resource*) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_1)
{
 struct i2c_adapter *VAR_2 = FUNC_1(VAR_1);
 struct resource *VAR_3;

 FUNC_0(VAR_2);

 FUNC_3(&VAR_1->dev);

 VAR_3 = FUNC_2(VAR_1, VAR_0, 0);
 FUNC_4(VAR_3->start, FUNC_5(VAR_3));

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct at91_twi_dev {int dev; int clk; int adapter; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 struct at91_twi_dev* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct at91_twi_dev *VAR_1 = FUNC_2(VAR_0);

 FUNC_1(&VAR_1->adapter);
 FUNC_0(VAR_1->clk);

 FUNC_3(VAR_1->dev);
 FUNC_4(VAR_1->dev);

 return 0;
}

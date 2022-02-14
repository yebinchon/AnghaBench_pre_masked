
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct synquacer_i2c {int pclk; int adapter; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 struct synquacer_i2c* FUNC_3 (struct platform_device*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct synquacer_i2c *VAR_1 = FUNC_3(VAR_0);

 FUNC_2(&VAR_1->adapter);
 if (!FUNC_0(VAR_1->pclk))
  FUNC_1(VAR_1->pclk);

 return 0;
}

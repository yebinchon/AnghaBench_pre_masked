
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ts_nbus {int lock; int pwm; } ;
struct platform_device {int dev; } ;


 struct ts_nbus* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct ts_nbus *VAR_1 = FUNC_0(&VAR_0->dev);


 FUNC_1(&VAR_1->lock);
 FUNC_3(VAR_1->pwm);
 FUNC_2(&VAR_1->lock);

 return 0;
}

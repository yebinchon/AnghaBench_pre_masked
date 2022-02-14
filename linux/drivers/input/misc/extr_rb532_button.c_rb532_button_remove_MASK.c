
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dev; } ;
struct input_polled_dev {int dummy; } ;


 struct input_polled_dev* FUNC_0 (int *) ;
 int FUNC_1 (struct input_polled_dev*) ;
 int FUNC_2 (struct input_polled_dev*) ;

__attribute__((used)) static int FUNC_3(struct platform_device *VAR_0)
{
 struct input_polled_dev *VAR_1 = FUNC_0(&VAR_0->dev);

 FUNC_2(VAR_1);
 FUNC_1(VAR_1);

 return 0;
}

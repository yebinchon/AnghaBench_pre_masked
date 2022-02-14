
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct palmas_pwron {int input_dev; int input_work; int irq; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int ,struct palmas_pwron*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct palmas_pwron*) ;
 struct palmas_pwron* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_0)
{
 struct palmas_pwron *VAR_1 = FUNC_4(VAR_0);

 FUNC_1(VAR_1->irq, VAR_1);
 FUNC_0(&VAR_1->input_work);

 FUNC_2(VAR_1->input_dev);
 FUNC_3(VAR_1);

 return 0;
}

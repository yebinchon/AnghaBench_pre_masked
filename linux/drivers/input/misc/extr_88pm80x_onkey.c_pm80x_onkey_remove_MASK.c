
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pm80x_onkey_info {int idev; int irq; int pm80x; } ;
struct platform_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct pm80x_onkey_info*) ;
 struct pm80x_onkey_info* FUNC_2 (struct platform_device*) ;
 int FUNC_3 (int ,int ,struct pm80x_onkey_info*) ;

__attribute__((used)) static int FUNC_4(struct platform_device *VAR_0)
{
 struct pm80x_onkey_info *VAR_1 = FUNC_2(VAR_0);

 FUNC_3(VAR_1->pm80x, VAR_1->irq, VAR_1);
 FUNC_0(VAR_1->idev);
 FUNC_1(VAR_1);
 return 0;
}

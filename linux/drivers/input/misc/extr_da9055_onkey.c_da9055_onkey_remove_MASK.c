
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct da9055_onkey {int input; int work; TYPE_1__* da9055; } ;
struct TYPE_2__ {int irq_data; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int,struct da9055_onkey*) ;
 int FUNC_2 (int ) ;
 struct da9055_onkey* FUNC_3 (struct platform_device*) ;
 int FUNC_4 (struct platform_device*,char*) ;
 int FUNC_5 (int ,int) ;

__attribute__((used)) static int FUNC_6(struct platform_device *VAR_0)
{
 struct da9055_onkey *VAR_1 = FUNC_3(VAR_0);
 int VAR_2 = FUNC_4(VAR_0, "ONKEY");

 VAR_2 = FUNC_5(VAR_1->da9055->irq_data, VAR_2);
 FUNC_1(VAR_2, VAR_1);
 FUNC_0(&VAR_1->work);
 FUNC_2(VAR_1->input);

 return 0;
}

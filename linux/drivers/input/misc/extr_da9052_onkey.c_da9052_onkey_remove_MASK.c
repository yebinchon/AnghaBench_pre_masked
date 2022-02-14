
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct da9052_onkey {int input; int work; int da9052; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ,struct da9052_onkey*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct da9052_onkey*) ;
 struct da9052_onkey* FUNC_4 (struct platform_device*) ;

__attribute__((used)) static int FUNC_5(struct platform_device *VAR_1)
{
 struct da9052_onkey *VAR_2 = FUNC_4(VAR_1);

 FUNC_1(VAR_2->da9052, VAR_0, VAR_2);
 FUNC_0(&VAR_2->work);

 FUNC_2(VAR_2->input);
 FUNC_3(VAR_2);

 return 0;
}

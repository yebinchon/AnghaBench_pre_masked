
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct abx500_temp {scalar_t__ work_active; } ;


 struct abx500_temp* FUNC_0 (struct platform_device*) ;
 int FUNC_1 (struct abx500_temp*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0)
{
 struct abx500_temp *VAR_1 = FUNC_0(VAR_0);

 if (VAR_1->work_active)
  FUNC_1(VAR_1);

 return 0;
}

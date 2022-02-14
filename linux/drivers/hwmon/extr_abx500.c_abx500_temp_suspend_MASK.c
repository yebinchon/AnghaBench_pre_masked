
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct platform_device {int dummy; } ;
struct abx500_temp {int work; scalar_t__ work_active; } ;
typedef int pm_message_t ;


 int FUNC_0 (int *) ;
 struct abx500_temp* FUNC_1 (struct platform_device*) ;

__attribute__((used)) static int FUNC_2(struct platform_device *VAR_0,
          pm_message_t VAR_1)
{
 struct abx500_temp *VAR_2 = FUNC_1(VAR_0);

 if (VAR_2->work_active)
  FUNC_0(&VAR_2->work);

 return 0;
}

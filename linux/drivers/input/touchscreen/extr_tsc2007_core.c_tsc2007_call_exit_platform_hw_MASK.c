
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tsc2007_platform_data {int (* exit_platform_hw ) () ;} ;
struct device {int dummy; } ;


 struct tsc2007_platform_data* FUNC_0 (struct device*) ;
 int FUNC_1 () ;

__attribute__((used)) static void FUNC_2(void *VAR_0)
{
 struct device *VAR_1 = VAR_0;
 const struct tsc2007_platform_data *VAR_2 = FUNC_0(VAR_1);

 VAR_2->exit_platform_hw();
}

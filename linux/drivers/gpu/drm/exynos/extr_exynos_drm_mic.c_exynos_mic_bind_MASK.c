
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct exynos_mic* driver_private; } ;
struct exynos_mic {TYPE_1__ bridge; } ;
struct device {int dummy; } ;


 struct exynos_mic* FUNC_0 (struct device*) ;

__attribute__((used)) static int FUNC_1(struct device *VAR_0, struct device *VAR_1,
      void *VAR_2)
{
 struct exynos_mic *VAR_3 = FUNC_0(VAR_0);

 VAR_3->bridge.driver_private = VAR_3;

 return 0;
}

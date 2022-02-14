
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_mic {int dev; int enabled; } ;
struct device {int dummy; } ;


 struct exynos_mic* FUNC_0 (struct device*) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1, struct device *VAR_2,
         void *VAR_3)
{
 struct exynos_mic *VAR_4 = FUNC_0(VAR_1);

 FUNC_1(&VAR_0);
 if (!VAR_4->enabled)
  goto already_disabled;

 FUNC_3(VAR_4->dev);

already_disabled:
 FUNC_2(&VAR_0);
}

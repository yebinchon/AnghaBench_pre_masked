
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_mic {scalar_t__ enabled; int dev; } ;
struct drm_bridge {struct exynos_mic* driver_private; } ;


 int VAR_0 ;
 int FUNC_0 (struct exynos_mic*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct drm_bridge *VAR_1)
{
 struct exynos_mic *VAR_2 = VAR_1->driver_private;

 FUNC_1(&VAR_0);
 if (!VAR_2->enabled)
  goto already_disabled;

 FUNC_0(VAR_2, 0);

 FUNC_3(VAR_2->dev);
 VAR_2->enabled = 0;

already_disabled:
 FUNC_2(&VAR_0);
}

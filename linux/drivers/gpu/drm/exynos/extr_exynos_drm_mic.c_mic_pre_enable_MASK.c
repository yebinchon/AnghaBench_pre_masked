
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_mic {int enabled; int dev; int i80_mode; } ;
struct drm_bridge {struct exynos_mic* driver_private; } ;


 int FUNC_0 (int ,char*) ;
 int VAR_0 ;
 int FUNC_1 (struct exynos_mic*) ;
 int FUNC_2 (struct exynos_mic*) ;
 int FUNC_3 (struct exynos_mic*,int) ;
 int FUNC_4 (struct exynos_mic*) ;
 int FUNC_5 (struct exynos_mic*,int) ;
 int FUNC_6 (struct exynos_mic*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(struct drm_bridge *VAR_1)
{
 struct exynos_mic *VAR_2 = VAR_1->driver_private;
 int VAR_3;

 FUNC_7(&VAR_0);
 if (VAR_2->enabled)
  goto unlock;

 VAR_3 = FUNC_9(VAR_2->dev);
 if (VAR_3 < 0)
  goto unlock;

 FUNC_3(VAR_2, 1);

 VAR_3 = FUNC_6(VAR_2);
 if (VAR_3) {
  FUNC_0(VAR_2->dev, "Failed to reset\n");
  goto turn_off;
 }

 if (!VAR_2->i80_mode)
  FUNC_4(VAR_2);
 FUNC_1(VAR_2);
 FUNC_2(VAR_2);
 FUNC_5(VAR_2, 1);
 VAR_2->enabled = 1;
 FUNC_8(&VAR_0);

 return;

turn_off:
 FUNC_10(VAR_2->dev);
unlock:
 FUNC_8(&VAR_0);
}

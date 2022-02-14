
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct exynos_drm_driver_info {int flags; TYPE_1__* driver; } ;
struct device {int dummy; } ;
struct TYPE_2__ {int driver; } ;


 int FUNC_0 (struct exynos_drm_driver_info*) ;
 int VAR_0 ;
 struct exynos_drm_driver_info* VAR_1 ;
 int FUNC_1 (int ) ;
 struct device* FUNC_2 (int *,int *) ;
 int FUNC_3 (struct device*) ;
 int FUNC_4 (struct device*) ;

__attribute__((used)) static void FUNC_5(void)
{
 int VAR_2;

 for (VAR_2 = FUNC_0(VAR_1) - 1; VAR_2 >= 0; --VAR_2) {
  struct exynos_drm_driver_info *VAR_3 = &VAR_1[VAR_2];
  struct device *VAR_4;

  if (!VAR_3->driver || !(VAR_3->flags & VAR_0))
   continue;

  while ((VAR_4 = FUNC_2(((void*)0),
      &VAR_3->driver->driver))) {
   FUNC_3(VAR_4);
   FUNC_1(FUNC_4(VAR_4));
  }
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct platform_device {int dummy; } ;
struct exynos_drm_driver_info {int flags; TYPE_2__* driver; } ;
struct TYPE_3__ {int name; } ;
struct TYPE_4__ {TYPE_1__ driver; } ;


 int FUNC_0 (struct exynos_drm_driver_info*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct platform_device*) ;
 int FUNC_2 (struct platform_device*) ;
 struct exynos_drm_driver_info* VAR_1 ;
 int FUNC_3 () ;
 struct platform_device* FUNC_4 (int ,int,int *,int ) ;

__attribute__((used)) static int FUNC_5(void)
{
 struct platform_device *VAR_2;
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < FUNC_0(VAR_1); ++VAR_3) {
  struct exynos_drm_driver_info *VAR_4 = &VAR_1[VAR_3];

  if (!VAR_4->driver || !(VAR_4->flags & VAR_0))
   continue;

  VAR_2 = FUNC_4(
     VAR_4->driver->driver.name, -1, ((void*)0), 0);
  if (FUNC_1(VAR_2))
   goto fail;
 }

 return 0;
fail:
 FUNC_3();
 return FUNC_2(VAR_2);
}

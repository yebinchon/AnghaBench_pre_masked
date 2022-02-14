
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_driver_info {int driver; } ;


 int FUNC_0 (struct exynos_drm_driver_info*) ;
 struct exynos_drm_driver_info* VAR_0 ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void)
{
 int VAR_1;

 for (VAR_1 = FUNC_0(VAR_0) - 1; VAR_1 >= 0; --VAR_1) {
  struct exynos_drm_driver_info *VAR_2 = &VAR_0[VAR_1];

  if (!VAR_2->driver)
   continue;

  FUNC_1(VAR_2->driver);
 }
}

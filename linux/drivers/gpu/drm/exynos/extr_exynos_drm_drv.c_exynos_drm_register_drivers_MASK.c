
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_driver_info {int driver; } ;


 int FUNC_0 (struct exynos_drm_driver_info*) ;
 struct exynos_drm_driver_info* VAR_0 ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(void)
{
 int VAR_1, VAR_2;

 for (VAR_1 = 0; VAR_1 < FUNC_0(VAR_0); ++VAR_1) {
  struct exynos_drm_driver_info *VAR_3 = &VAR_0[VAR_1];

  if (!VAR_3->driver)
   continue;

  VAR_2 = FUNC_2(VAR_3->driver);
  if (VAR_2)
   goto fail;
 }
 return 0;
fail:
 FUNC_1();
 return VAR_2;
}

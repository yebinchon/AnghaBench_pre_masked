
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct exynos_drm_private {int mapping; } ;
struct drm_device {struct exynos_drm_private* dev_private; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (int ,struct device*) ;

__attribute__((used)) static void FUNC_4(struct drm_device *VAR_2,
    struct device *VAR_3)
{
 struct exynos_drm_private *VAR_4 = VAR_2->dev_private;

 if (FUNC_0(VAR_0))
  FUNC_1(VAR_3);
 else if (FUNC_0(VAR_1))
  FUNC_3(VAR_4->mapping, VAR_3);

 FUNC_2(VAR_3);
}

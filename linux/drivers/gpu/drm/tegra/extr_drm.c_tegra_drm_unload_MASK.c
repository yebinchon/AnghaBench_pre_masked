
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int domain; } ;
struct tegra_drm {scalar_t__ domain; TYPE_1__ carveout; int mm; int mm_lock; } ;
struct host1x_device {int dummy; } ;
struct drm_device {struct tegra_drm* dev_private; int dev; } ;


 int FUNC_0 (struct drm_device*) ;
 int FUNC_1 (struct drm_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct drm_device*) ;
 int FUNC_4 (struct host1x_device*) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 () ;
 int FUNC_7 (struct tegra_drm*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct drm_device*) ;
 struct host1x_device* FUNC_11 (int ) ;

__attribute__((used)) static void FUNC_12(struct drm_device *VAR_0)
{
 struct host1x_device *VAR_1 = FUNC_11(VAR_0->dev);
 struct tegra_drm *VAR_2 = VAR_0->dev_private;
 int VAR_3;

 FUNC_1(VAR_0);
 FUNC_10(VAR_0);
 FUNC_0(VAR_0);
 FUNC_3(VAR_0);

 VAR_3 = FUNC_4(VAR_1);
 if (VAR_3 < 0)
  return;

 if (VAR_2->domain) {
  FUNC_8(&VAR_2->mm_lock);
  FUNC_2(&VAR_2->mm);
  FUNC_9(&VAR_2->carveout.domain);
  FUNC_6();
  FUNC_5(VAR_2->domain);
 }

 FUNC_7(VAR_2);
}

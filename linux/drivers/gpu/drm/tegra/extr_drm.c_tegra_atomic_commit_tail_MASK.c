
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_drm {scalar_t__ hub; } ;
struct drm_device {struct tegra_drm* dev_private; } ;
struct drm_atomic_state {struct drm_device* dev; } ;


 int FUNC_0 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_1 (struct drm_atomic_state*) ;
 int FUNC_2 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_3 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_4 (struct drm_device*,struct drm_atomic_state*,int ) ;
 int FUNC_5 (struct drm_atomic_state*) ;
 int FUNC_6 (struct drm_device*,struct drm_atomic_state*) ;
 int FUNC_7 (struct drm_device*,struct drm_atomic_state*) ;

__attribute__((used)) static void FUNC_8(struct drm_atomic_state *VAR_0)
{
 struct drm_device *VAR_1 = VAR_0->dev;
 struct tegra_drm *VAR_2 = VAR_1->dev_private;

 if (VAR_2->hub) {
  FUNC_2(VAR_1, VAR_0);
  FUNC_7(VAR_1, VAR_0);
  FUNC_4(VAR_1, VAR_0, 0);
  FUNC_3(VAR_1, VAR_0);
  FUNC_1(VAR_0);
  FUNC_6(VAR_1, VAR_0);
  FUNC_0(VAR_1, VAR_0);
 } else {
  FUNC_5(VAR_0);
 }
}

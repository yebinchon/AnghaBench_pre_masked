
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bo {int flags; } ;
struct drm_framebuffer {int dummy; } ;


 int VAR_0 ;
 struct tegra_bo* FUNC_0 (struct drm_framebuffer*,int ) ;

bool FUNC_1(struct drm_framebuffer *VAR_1)
{
 struct tegra_bo *VAR_2 = FUNC_0(VAR_1, 0);

 if (VAR_2->flags & VAR_0)
  return 1;

 return 0;
}

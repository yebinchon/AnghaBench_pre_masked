
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_bo {int dummy; } ;
struct drm_framebuffer {int dummy; } ;


 int FUNC_0 (struct drm_framebuffer*,unsigned int) ;
 struct tegra_bo* FUNC_1 (int ) ;

struct tegra_bo *FUNC_2(struct drm_framebuffer *VAR_0,
        unsigned int VAR_1)
{
 return FUNC_1(FUNC_0(VAR_0, VAR_1));
}

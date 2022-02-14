
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {int vdisplay; int hdisplay; unsigned int clock; } ;


 unsigned int FUNC_0 (struct drm_display_mode const*) ;

__attribute__((used)) static unsigned int
FUNC_1(const struct drm_display_mode *VAR_0)
{
 if (VAR_0->vdisplay == 4096 && VAR_0->hdisplay == 2160)
  return VAR_0->clock;

 return FUNC_0(VAR_0);
}

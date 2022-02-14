
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct drm_display_mode {unsigned int clock; int vrefresh; int vdisplay; } ;


 unsigned int FUNC_0 (unsigned int,int) ;

__attribute__((used)) static unsigned int
FUNC_1(const struct drm_display_mode *VAR_0)
{
 unsigned int VAR_1 = VAR_0->clock;

 if (VAR_0->vrefresh % 6 != 0)
  return VAR_1;






 if (VAR_0->vdisplay == 240 || VAR_0->vdisplay == 480)
  VAR_1 = FUNC_0(VAR_1 * 1001, 1000);
 else
  VAR_1 = FUNC_0(VAR_1 * 1000, 1001);

 return VAR_1;
}

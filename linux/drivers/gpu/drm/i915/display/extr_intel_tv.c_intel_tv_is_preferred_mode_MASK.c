
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tv_mode {int dummy; } ;
struct drm_display_mode {int vdisplay; } ;


 int FUNC_0 (struct tv_mode const*) ;

__attribute__((used)) static bool
FUNC_1(const struct drm_display_mode *VAR_0,
      const struct tv_mode *VAR_1)
{
 int VAR_2 = FUNC_0(VAR_1);


 if (VAR_2 <= 576)
  VAR_2 = 480;

 return VAR_2 == VAR_0->vdisplay;
}

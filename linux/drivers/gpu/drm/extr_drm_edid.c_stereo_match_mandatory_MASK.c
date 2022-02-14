
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stereo_mandatory_mode {scalar_t__ width; scalar_t__ height; unsigned int flags; scalar_t__ vrefresh; } ;
struct drm_display_mode {unsigned int flags; scalar_t__ hdisplay; scalar_t__ vdisplay; } ;


 unsigned int VAR_0 ;
 scalar_t__ FUNC_0 (struct drm_display_mode const*) ;

__attribute__((used)) static bool
FUNC_1(const struct drm_display_mode *VAR_1,
         const struct stereo_mandatory_mode *VAR_2)
{
 unsigned int VAR_3 = VAR_1->flags & VAR_0;

 return VAR_1->hdisplay == VAR_2->width &&
        VAR_1->vdisplay == VAR_2->height &&
        VAR_3 == (VAR_2->flags & VAR_0) &&
        FUNC_0(VAR_1) == VAR_2->vrefresh;
}

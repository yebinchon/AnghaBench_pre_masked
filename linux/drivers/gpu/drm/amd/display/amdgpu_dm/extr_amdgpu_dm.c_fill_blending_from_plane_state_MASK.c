
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ const uint32_t ;
struct drm_plane_state {scalar_t__ pixel_blend_mode; int alpha; TYPE_3__* fb; TYPE_1__* plane; } ;
struct TYPE_6__ {TYPE_2__* format; } ;
struct TYPE_5__ {scalar_t__ format; } ;
struct TYPE_4__ {scalar_t__ type; } ;


 unsigned int FUNC_0 (scalar_t__ const*) ;



 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void
FUNC_1(const struct drm_plane_state *VAR_2,
          bool *VAR_3, bool *VAR_4,
          int *VAR_5)
{
 *VAR_3 = 0;
 *VAR_4 = 0;
 *VAR_5 = 0xff;

 if (VAR_2->plane->type != VAR_1)
  return;

 if (VAR_2->pixel_blend_mode == VAR_0) {
  static const uint32_t VAR_6[] = {
   129,
   128,
   130,
  };
  uint32_t VAR_7 = VAR_2->fb->format->format;
  unsigned int VAR_8;

  for (VAR_8 = 0; VAR_8 < FUNC_0(VAR_6); ++VAR_8) {
   if (VAR_7 == VAR_6[VAR_8]) {
    *VAR_3 = 1;
    break;
   }
  }
 }

 if (VAR_2->alpha < 0xffff) {
  *VAR_4 = 1;
  *VAR_5 = VAR_2->alpha >> 8;
 }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct i915_ggtt_view {int rotated; int type; } ;
struct drm_framebuffer {int dummy; } ;
struct TYPE_2__ {int rot_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (unsigned int) ;
 TYPE_1__* FUNC_1 (struct drm_framebuffer const*) ;

__attribute__((used)) static void
FUNC_2(struct i915_ggtt_view *VAR_2,
   const struct drm_framebuffer *VAR_3,
   unsigned int VAR_4)
{
 VAR_2->type = VAR_0;
 if (FUNC_0(VAR_4)) {
  VAR_2->type = VAR_1;
  VAR_2->rotated = FUNC_1(VAR_3)->rot_info;
 }
}

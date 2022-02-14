
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {size_t color_encoding; struct drm_framebuffer* fb; int plane; } ;
struct intel_plane_state {TYPE_2__ base; } ;
struct TYPE_4__ {int dev; } ;
struct intel_plane {int id; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
struct drm_framebuffer {TYPE_3__* format; } ;
typedef int s16 ;
typedef enum plane_id { ____Placeholder_plane_id } plane_id ;
struct TYPE_6__ {int is_yuv; } ;




 int FUNC_0 (int ,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int const) ;
 int FUNC_16 (int const) ;
 int FUNC_17 (int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (int ) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 struct drm_i915_private* FUNC_23 (int ) ;
 struct intel_plane* FUNC_24 (int ) ;

__attribute__((used)) static void
FUNC_25(const struct intel_plane_state *VAR_0)
{
 struct intel_plane *VAR_1 = FUNC_24(VAR_0->base.plane);
 struct drm_i915_private *VAR_2 = FUNC_23(VAR_1->base.dev);
 const struct drm_framebuffer *VAR_3 = VAR_0->base.fb;
 enum plane_id VAR_4 = VAR_1->id;
 static const s16 VAR_5[][9] = {

  [129] = {
    5743, 4096, 0,
   -2925, 4096, -1410,
       0, 4096, 7258,
  },

  [128] = {
    6450, 4096, 0,
   -1917, 4096, -767,
       0, 4096, 7601,
  },
 };
 const s16 *VAR_6 = VAR_5[VAR_0->base.color_encoding];


 if (!VAR_3->format->is_yuv)
  return;

 FUNC_0(FUNC_14(VAR_4), FUNC_22(0) | FUNC_19(0));
 FUNC_0(FUNC_8(VAR_4), FUNC_22(0) | FUNC_19(0));
 FUNC_0(FUNC_11(VAR_4), FUNC_22(0) | FUNC_19(0));

 FUNC_0(FUNC_1(VAR_4), FUNC_16(VAR_6[1]) | FUNC_15(VAR_6[0]));
 FUNC_0(FUNC_2(VAR_4), FUNC_16(VAR_6[3]) | FUNC_15(VAR_6[2]));
 FUNC_0(FUNC_3(VAR_4), FUNC_16(VAR_6[5]) | FUNC_15(VAR_6[4]));
 FUNC_0(FUNC_4(VAR_4), FUNC_16(VAR_6[7]) | FUNC_15(VAR_6[6]));
 FUNC_0(FUNC_5(VAR_4), FUNC_15(VAR_6[8]));

 FUNC_0(FUNC_12(VAR_4), FUNC_17(1023) | FUNC_18(0));
 FUNC_0(FUNC_6(VAR_4), FUNC_17(512) | FUNC_18(-512));
 FUNC_0(FUNC_9(VAR_4), FUNC_17(512) | FUNC_18(-512));

 FUNC_0(FUNC_13(VAR_4), FUNC_20(1023) | FUNC_21(0));
 FUNC_0(FUNC_7(VAR_4), FUNC_20(1023) | FUNC_21(0));
 FUNC_0(FUNC_10(VAR_4), FUNC_20(1023) | FUNC_21(0));
}

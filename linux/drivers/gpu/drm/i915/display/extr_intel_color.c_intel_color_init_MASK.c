
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int dev; } ;
struct intel_crtc {TYPE_3__ base; } ;
struct TYPE_6__ {int load_luts; void* color_commit; void* color_check; } ;
struct drm_i915_private {TYPE_1__ display; } ;
struct TYPE_7__ {scalar_t__ degamma_lut_size; int gamma_lut_size; } ;
struct TYPE_9__ {TYPE_2__ color; } ;


 scalar_t__ FUNC_0 (struct drm_i915_private*) ;
 int FUNC_1 (struct drm_i915_private*) ;
 TYPE_5__* FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 scalar_t__ FUNC_4 (struct drm_i915_private*) ;
 scalar_t__ FUNC_5 (struct drm_i915_private*) ;
 scalar_t__ FUNC_6 (struct drm_i915_private*) ;
 scalar_t__ FUNC_7 (struct drm_i915_private*) ;
 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int FUNC_8 (TYPE_3__*,scalar_t__,int,int ) ;
 int FUNC_9 (TYPE_3__*,int) ;
 void* VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 void* VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 void* VAR_13 ;
 int VAR_14 ;
 void* VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 struct drm_i915_private* FUNC_10 (int ) ;

void FUNC_11(struct intel_crtc *VAR_18)
{
 struct drm_i915_private *VAR_19 = FUNC_10(VAR_18->base.dev);
 bool VAR_20 = FUNC_2(VAR_19)->color.degamma_lut_size != 0;

 FUNC_9(&VAR_18->base, 256);

 if (FUNC_0(VAR_19)) {
  if (FUNC_5(VAR_19)) {
   VAR_19->display.color_check = VAR_1;
   VAR_19->display.color_commit = VAR_8;
   VAR_19->display.load_luts = VAR_2;
  } else if (FUNC_1(VAR_19) >= 4) {
   VAR_19->display.color_check = VAR_7;
   VAR_19->display.color_commit = VAR_8;
   VAR_19->display.load_luts = VAR_6;
  } else {
   VAR_19->display.color_check = VAR_7;
   VAR_19->display.color_commit = VAR_8;
   VAR_19->display.load_luts = VAR_9;
  }
 } else {
  if (FUNC_1(VAR_19) >= 11)
   VAR_19->display.color_check = VAR_10;
  else if (FUNC_1(VAR_19) >= 10 || FUNC_6(VAR_19))
   VAR_19->display.color_check = VAR_3;
  else if (FUNC_1(VAR_19) >= 7)
   VAR_19->display.color_check = VAR_15;
  else
   VAR_19->display.color_check = VAR_12;

  if (FUNC_1(VAR_19) >= 9)
   VAR_19->display.color_commit = VAR_17;
  else if (FUNC_3(VAR_19) || FUNC_7(VAR_19))
   VAR_19->display.color_commit = VAR_5;
  else
   VAR_19->display.color_commit = VAR_13;

  if (FUNC_1(VAR_19) >= 11)
   VAR_19->display.load_luts = VAR_11;
  else if (FUNC_4(VAR_19) || FUNC_6(VAR_19))
   VAR_19->display.load_luts = VAR_4;
  else if (FUNC_1(VAR_19) >= 8)
   VAR_19->display.load_luts = VAR_0;
  else if (FUNC_1(VAR_19) >= 7)
   VAR_19->display.load_luts = VAR_16;
  else
   VAR_19->display.load_luts = VAR_14;
 }

 FUNC_8(&VAR_18->base,
       FUNC_2(VAR_19)->color.degamma_lut_size,
       VAR_20,
       FUNC_2(VAR_19)->color.gamma_lut_size);
}

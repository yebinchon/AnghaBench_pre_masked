
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {scalar_t__ ctm; int crtc; } ;
struct intel_crtc_state {scalar_t__ output_format; int csc_mode; scalar_t__ csc_enable; TYPE_2__ base; } ;
struct TYPE_3__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (struct drm_i915_private*) ;
 int FUNC_2 (struct drm_i915_private*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int * VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 int FUNC_5 (struct intel_crtc_state const*,int *) ;
 int FUNC_6 (struct intel_crtc_state const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_7 (struct intel_crtc*,int ,int *,int ) ;
 struct drm_i915_private* FUNC_8 (int ) ;
 struct intel_crtc* FUNC_9 (int ) ;

__attribute__((used)) static void FUNC_10(const struct intel_crtc_state *VAR_7)
{
 struct intel_crtc *VAR_8 = FUNC_9(VAR_7->base.crtc);
 struct drm_i915_private *VAR_9 = FUNC_8(VAR_8->base.dev);
 bool VAR_10 = FUNC_6(VAR_7);

 if (VAR_7->base.ctm) {
  u16 VAR_11[9];

  FUNC_5(VAR_7, VAR_11);
  FUNC_7(VAR_8, VAR_4, VAR_11,
        VAR_10 ?
        VAR_5 :
        VAR_4);
 } else if (VAR_7->output_format != VAR_0) {
  FUNC_7(VAR_8, VAR_4,
        VAR_3,
        VAR_6);
 } else if (VAR_10) {
  FUNC_7(VAR_8, VAR_4,
        VAR_2,
        VAR_5);
 } else if (VAR_7->csc_enable) {






  FUNC_4(!FUNC_1(VAR_9) && !FUNC_2(VAR_9));

  FUNC_7(VAR_8, VAR_4,
        VAR_1,
        VAR_4);
 }

 FUNC_0(FUNC_3(VAR_8->pipe), VAR_7->csc_mode);
}

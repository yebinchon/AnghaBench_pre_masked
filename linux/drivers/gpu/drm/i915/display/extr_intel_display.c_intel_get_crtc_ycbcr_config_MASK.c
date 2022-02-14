
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct intel_crtc_state {int lspcon_downsampling; int output_format; } ;
struct TYPE_2__ {int dev; } ;
struct intel_crtc {int pipe; TYPE_1__ base; } ;
struct drm_i915_private {int dummy; } ;
typedef enum intel_output_format { ____Placeholder_intel_output_format } intel_output_format ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct drm_i915_private*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (struct drm_i915_private*) ;
 scalar_t__ FUNC_3 (struct drm_i915_private*) ;
 int FUNC_4 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct drm_i915_private* FUNC_5 (int ) ;

__attribute__((used)) static void FUNC_6(struct intel_crtc *VAR_7,
     struct intel_crtc_state *VAR_8)
{
 struct drm_i915_private *VAR_9 = FUNC_5(VAR_7->base.dev);
 enum intel_output_format VAR_10 = VAR_1;

 VAR_8->lspcon_downsampling = 0;

 if (FUNC_2(VAR_9) || FUNC_1(VAR_9) >= 9) {
  u32 VAR_11 = FUNC_0(FUNC_4(VAR_7->pipe));

  if (VAR_11 & VAR_4) {
   bool VAR_12 = VAR_11 & VAR_5;
   bool VAR_13 = VAR_11 & VAR_6;

   if (VAR_12) {

    if (!VAR_13)
     VAR_10 = VAR_0;
    else if (!(FUNC_3(VAR_9) ||
        FUNC_1(VAR_9) >= 10))
     VAR_10 = VAR_0;
    else
     VAR_10 = VAR_2;
   } else {
    VAR_8->lspcon_downsampling = 1;
    VAR_10 = VAR_3;
   }
  }
 }

 VAR_8->output_format = VAR_10;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int output_reg; int DP; } ;
struct intel_crtc_state {scalar_t__ has_audio; } ;
struct drm_i915_private {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ) ;
 struct drm_i915_private* FUNC_2 (struct intel_dp*) ;
 int FUNC_3 (struct intel_dp*,int ) ;

__attribute__((used)) static void FUNC_4(struct intel_dp *VAR_3,
     const struct intel_crtc_state *VAR_4)
{
 struct drm_i915_private *VAR_5 = FUNC_2(VAR_3);



 FUNC_3(VAR_3, VAR_2);







 VAR_3->DP |= VAR_1;
 if (VAR_4->has_audio)
  VAR_3->DP |= VAR_0;

 FUNC_0(VAR_3->output_reg, VAR_3->DP);
 FUNC_1(VAR_3->output_reg);
}

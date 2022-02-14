
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int base; } ;
struct intel_dp {int dummy; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_connector_state {int dummy; } ;


 struct intel_dp* FUNC_0 (int *) ;
 int FUNC_1 (struct intel_crtc_state const*) ;
 int FUNC_2 (struct intel_dp*,struct intel_crtc_state const*) ;
 int FUNC_3 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_4 (struct intel_dp*,struct intel_crtc_state const*) ;

__attribute__((used)) static void FUNC_5(struct intel_encoder *VAR_0,
         const struct intel_crtc_state *VAR_1,
         const struct drm_connector_state *VAR_2)
{
 struct intel_dp *VAR_3 = FUNC_0(&VAR_0->base);

 FUNC_1(VAR_1);

 FUNC_4(VAR_3, VAR_1);
 FUNC_2(VAR_3, VAR_1);

 FUNC_3(VAR_0, VAR_1, VAR_2);
}

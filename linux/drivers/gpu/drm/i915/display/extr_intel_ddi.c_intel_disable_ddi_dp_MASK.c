
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int base; } ;
struct intel_dp {int link_trained; } ;
struct intel_crtc_state {scalar_t__ has_audio; } ;
struct drm_connector_state {int dummy; } ;


 struct intel_dp* FUNC_0 (int *) ;
 int FUNC_1 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_2 (struct intel_dp*,struct intel_crtc_state const*,int) ;
 int FUNC_3 (struct drm_connector_state const*) ;
 int FUNC_4 (struct intel_dp*,struct intel_crtc_state const*) ;
 int FUNC_5 (struct intel_dp*,struct intel_crtc_state const*) ;

__attribute__((used)) static void FUNC_6(struct intel_encoder *VAR_0,
     const struct intel_crtc_state *VAR_1,
     const struct drm_connector_state *VAR_2)
{
 struct intel_dp *VAR_3 = FUNC_0(&VAR_0->base);

 VAR_3->link_trained = 0;

 if (VAR_1->has_audio)
  FUNC_1(VAR_0,
       VAR_1, VAR_2);

 FUNC_4(VAR_3, VAR_1);
 FUNC_5(VAR_3, VAR_1);
 FUNC_3(VAR_2);

 FUNC_2(VAR_3, VAR_1,
           0);
}

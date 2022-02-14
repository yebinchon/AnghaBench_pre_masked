
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int base; } ;
struct intel_dp {int link_trained; } ;
struct intel_crtc_state {scalar_t__ has_audio; } ;
struct drm_connector_state {int dummy; } ;


 int VAR_0 ;
 struct intel_dp* FUNC_0 (int *) ;
 int FUNC_1 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_2 (struct intel_dp*,int ) ;
 int FUNC_3 (struct drm_connector_state const*) ;
 int FUNC_4 (struct intel_dp*) ;
 int FUNC_5 (struct intel_dp*) ;

__attribute__((used)) static void FUNC_6(struct intel_encoder *VAR_1,
        const struct intel_crtc_state *VAR_2,
        const struct drm_connector_state *VAR_3)
{
 struct intel_dp *VAR_4 = FUNC_0(&VAR_1->base);

 VAR_4->link_trained = 0;

 if (VAR_2->has_audio)
  FUNC_1(VAR_1,
       VAR_2, VAR_3);



 FUNC_5(VAR_4);
 FUNC_3(VAR_3);
 FUNC_2(VAR_4, VAR_0);
 FUNC_4(VAR_4);
}

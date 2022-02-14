
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int dummy; } ;
struct intel_crtc_state {scalar_t__ has_audio; } ;
struct drm_connector_state {int dummy; } ;


 int FUNC_0 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_1 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;

__attribute__((used)) static void FUNC_2(struct intel_encoder *VAR_0,
        const struct intel_crtc_state *VAR_1,
        const struct drm_connector_state *VAR_2)
{
 if (VAR_1->has_audio)
  FUNC_0(VAR_0,
       VAR_1, VAR_2);

 FUNC_1(VAR_0, VAR_1, VAR_2);
}

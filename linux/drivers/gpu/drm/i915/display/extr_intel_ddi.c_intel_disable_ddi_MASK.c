
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int dummy; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_connector_state {int connector; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct intel_crtc_state const*,int ) ;
 int FUNC_1 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_2 (struct intel_encoder*,struct intel_crtc_state const*,struct drm_connector_state const*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

__attribute__((used)) static void FUNC_5(struct intel_encoder *VAR_1,
         const struct intel_crtc_state *VAR_2,
         const struct drm_connector_state *VAR_3)
{
 FUNC_3(FUNC_4(VAR_3->connector));

 if (FUNC_0(VAR_2, VAR_0))
  FUNC_2(VAR_1, VAR_2, VAR_3);
 else
  FUNC_1(VAR_1, VAR_2, VAR_3);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_encoder {int port; int base; } ;
struct intel_dp {int dummy; } ;
struct intel_crtc_state {int dummy; } ;
struct drm_connector_state {int dummy; } ;
typedef enum port { ____Placeholder_port } port ;


 int VAR_0 ;
 struct intel_dp* FUNC_0 (int *) ;
 int FUNC_1 (struct intel_encoder*,struct intel_crtc_state const*) ;
 int FUNC_2 (struct intel_dp*,struct intel_crtc_state const*) ;

__attribute__((used)) static void FUNC_3(struct intel_encoder *VAR_1,
    const struct intel_crtc_state *VAR_2,
    const struct drm_connector_state *VAR_3)
{
 struct intel_dp *VAR_4 = FUNC_0(&VAR_1->base);
 enum port VAR_5 = VAR_1->port;







 FUNC_1(VAR_1, VAR_2);


 if (VAR_5 == VAR_0)
  FUNC_2(VAR_4, VAR_2);
}

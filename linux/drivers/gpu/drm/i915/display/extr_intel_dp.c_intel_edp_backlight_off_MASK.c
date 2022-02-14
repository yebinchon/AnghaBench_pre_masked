
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dummy; } ;
struct drm_connector_state {int best_encoder; } ;


 int FUNC_0 (char*) ;
 int FUNC_1 (struct intel_dp*) ;
 struct intel_dp* FUNC_2 (int ) ;
 int FUNC_3 (struct intel_dp*) ;
 int FUNC_4 (struct drm_connector_state const*) ;

void FUNC_5(const struct drm_connector_state *VAR_0)
{
 struct intel_dp *VAR_1 = FUNC_2(VAR_0->best_encoder);

 if (!FUNC_3(VAR_1))
  return;

 FUNC_0("\n");

 FUNC_1(VAR_1);
 FUNC_4(VAR_0);
}

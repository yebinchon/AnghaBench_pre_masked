
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dsc_dpcd; } ;
struct intel_crtc_state {int fec_enable; } ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (struct intel_dp*) ;
 scalar_t__ FUNC_2 (struct intel_dp*,struct intel_crtc_state const*) ;

__attribute__((used)) static bool FUNC_3(struct intel_dp *VAR_0,
      const struct intel_crtc_state *VAR_1)
{
 if (!FUNC_1(VAR_0) && !VAR_1->fec_enable)
  return 0;

 return FUNC_2(VAR_0, VAR_1) &&
  FUNC_0(VAR_0->dsc_dpcd);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int fec_capable; } ;
struct intel_crtc_state {int dummy; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (struct intel_dp*,struct intel_crtc_state const*) ;

__attribute__((used)) static bool FUNC_2(struct intel_dp *VAR_0,
      const struct intel_crtc_state *VAR_1)
{
 return FUNC_1(VAR_0, VAR_1) &&
  FUNC_0(VAR_0->fec_capable);
}

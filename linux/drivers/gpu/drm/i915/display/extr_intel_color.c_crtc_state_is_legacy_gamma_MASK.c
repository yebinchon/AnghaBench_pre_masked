
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ gamma_lut; int ctm; int degamma_lut; } ;
struct intel_crtc_state {TYPE_1__ base; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;

__attribute__((used)) static bool FUNC_1(const struct intel_crtc_state *VAR_0)
{
 return !VAR_0->base.degamma_lut &&
  !VAR_0->base.ctm &&
  VAR_0->base.gamma_lut &&
  FUNC_0(VAR_0->base.gamma_lut);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ degamma_lut; scalar_t__ gamma_lut; } ;
struct intel_crtc_state {TYPE_1__ base; int gamma_enable; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct intel_crtc_state const*) ;

__attribute__((used)) static u32 FUNC_1(const struct intel_crtc_state *VAR_3)
{
 if (!VAR_3->gamma_enable ||
     FUNC_0(VAR_3))
  return VAR_1;
 else if (VAR_3->base.gamma_lut &&
   VAR_3->base.degamma_lut)
  return VAR_2;
 else
  return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ gamma_lut; scalar_t__ degamma_lut; } ;
struct intel_crtc_state {TYPE_1__ base; int c8_planes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct intel_crtc_state const*) ;

__attribute__((used)) static u32 FUNC_1(const struct intel_crtc_state *VAR_4)
{
 u32 VAR_5 = 0;

 if (VAR_4->base.degamma_lut)
  VAR_5 |= VAR_3;

 if (VAR_4->base.gamma_lut &&
     !VAR_4->c8_planes)
  VAR_5 |= VAR_2;

 if (!VAR_4->base.gamma_lut ||
     FUNC_0(VAR_4))
  VAR_5 |= VAR_1;
 else
  VAR_5 |= VAR_0;

 return VAR_5;
}

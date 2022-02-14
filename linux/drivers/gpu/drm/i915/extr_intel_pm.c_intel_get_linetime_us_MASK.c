
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint_fixed_16_16_t ;
typedef scalar_t__ u32 ;
struct TYPE_3__ {scalar_t__ crtc_htotal; } ;
struct TYPE_4__ {TYPE_1__ adjusted_mode; int active; } ;
struct intel_crtc_state {scalar_t__ pixel_rate; TYPE_2__ base; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (scalar_t__,scalar_t__) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static uint_fixed_16_16_t
FUNC_3(const struct intel_crtc_state *VAR_0)
{
 u32 VAR_1;
 u32 VAR_2;
 uint_fixed_16_16_t VAR_3;

 if (!VAR_0->base.active)
  return FUNC_2(0);

 VAR_1 = VAR_0->pixel_rate;

 if (FUNC_0(VAR_1 == 0))
  return FUNC_2(0);

 VAR_2 = VAR_0->base.adjusted_mode.crtc_htotal;
 VAR_3 = FUNC_1(VAR_2 * 1000, VAR_1);

 return VAR_3;
}

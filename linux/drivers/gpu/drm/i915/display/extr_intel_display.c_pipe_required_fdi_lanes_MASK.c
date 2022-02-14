
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ enable; } ;
struct intel_crtc_state {int fdi_lanes; scalar_t__ has_pch_encoder; TYPE_1__ base; } ;



__attribute__((used)) static int FUNC_0(struct intel_crtc_state *VAR_0)
{
 if (VAR_0->base.enable && VAR_0->has_pch_encoder)
  return VAR_0->fdi_lanes;

 return 0;
}

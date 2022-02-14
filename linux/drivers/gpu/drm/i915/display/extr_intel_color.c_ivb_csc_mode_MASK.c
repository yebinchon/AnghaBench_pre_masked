
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {scalar_t__ degamma_lut; } ;
struct intel_crtc_state {scalar_t__ output_format; TYPE_1__ base; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct intel_crtc_state const*) ;

__attribute__((used)) static u32 FUNC_1(const struct intel_crtc_state *VAR_2)
{
 bool VAR_3 = FUNC_0(VAR_2);





 if (VAR_2->base.degamma_lut ||
     VAR_2->output_format != VAR_1 ||
     VAR_3)
  return 0;

 return VAR_0;
}

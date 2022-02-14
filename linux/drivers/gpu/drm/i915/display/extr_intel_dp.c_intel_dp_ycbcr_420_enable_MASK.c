
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_dp {int dummy; } ;
struct intel_crtc_state {scalar_t__ output_format; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct intel_dp*,struct intel_crtc_state const*) ;

void FUNC_1(struct intel_dp *VAR_1,
          const struct intel_crtc_state *VAR_2)
{
 if (VAR_2->output_format != VAR_0)
  return;

 FUNC_0(VAR_1, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct intel_crtc_state {scalar_t__ output_format; } ;


 scalar_t__ VAR_0 ;

int FUNC_0(const struct intel_crtc_state *VAR_1)
{
 if (VAR_1->output_format == VAR_0)
  return 6 * 3;
 else
  return 8 * 3;
}

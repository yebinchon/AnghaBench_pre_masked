
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timing_generator {int dummy; } ;
struct dc_crtc_timing {int dummy; } ;
struct crtc_stereo_flags {scalar_t__ PROGRAM_STEREO; } ;


 int FUNC_0 (struct timing_generator*) ;
 int FUNC_1 (struct timing_generator*,struct dc_crtc_timing const*,struct crtc_stereo_flags*) ;

void FUNC_2(struct timing_generator *VAR_0,
 const struct dc_crtc_timing *VAR_1, struct crtc_stereo_flags *VAR_2)
{
 if (VAR_2->PROGRAM_STEREO)
  FUNC_1(VAR_0, VAR_1, VAR_2);
 else
  FUNC_0(VAR_0);
}

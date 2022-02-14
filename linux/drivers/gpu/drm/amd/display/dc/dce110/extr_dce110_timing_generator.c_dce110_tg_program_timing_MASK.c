
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timing_generator {int dummy; } ;
struct dc_crtc_timing {int dummy; } ;
typedef enum signal_type { ____Placeholder_signal_type } signal_type ;


 int FUNC_0 (struct timing_generator*,struct dc_crtc_timing const*) ;
 int FUNC_1 (struct timing_generator*,struct dc_crtc_timing const*) ;

void FUNC_2(struct timing_generator *VAR_0,
 const struct dc_crtc_timing *VAR_1,
 int VAR_2,
 int VAR_3,
 int VAR_4,
 int VAR_5,
 const enum signal_type VAR_6,
 bool VAR_7)
{
 if (VAR_7)
  FUNC_1(VAR_0, VAR_1);
 else
  FUNC_0(VAR_0, VAR_1);
}

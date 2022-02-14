
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct timing_generator {int dummy; } ;
struct TYPE_2__ {int INTERLACE; } ;
struct dc_crtc_timing {int v_front_porch; TYPE_1__ flags; } ;



__attribute__((used)) static void FUNC_0(
 struct timing_generator *VAR_0,
 struct dc_crtc_timing *VAR_1)
{
 if (VAR_1->flags.INTERLACE == 1) {
  if (VAR_1->v_front_porch < 2)
   VAR_1->v_front_porch = 2;
 } else {
  if (VAR_1->v_front_porch < 1)
   VAR_1->v_front_porch = 1;
 }
}

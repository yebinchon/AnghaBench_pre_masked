
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int INTERLACE; } ;
struct dc_crtc_timing {int v_front_porch; TYPE_1__ flags; } ;



__attribute__((used)) static void FUNC_0(struct dc_crtc_timing *VAR_0)
{
 if (VAR_0->flags.INTERLACE == 1) {
  if (VAR_0->v_front_porch < 2)
   VAR_0->v_front_porch = 2;
 } else {
  if (VAR_0->v_front_porch < 1)
   VAR_0->v_front_porch = 1;
 }
}

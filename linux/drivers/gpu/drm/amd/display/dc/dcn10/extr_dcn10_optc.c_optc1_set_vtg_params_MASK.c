
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timing_generator {int dummy; } ;
struct optc {int vstartup_start; } ;
struct TYPE_2__ {int INTERLACE; } ;
struct dc_crtc_timing {int v_total; int v_front_porch; int v_border_bottom; int v_addressable; int v_border_top; TYPE_1__ flags; } ;
typedef int int32_t ;


 int VAR_0 ;
 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (struct dc_crtc_timing*) ;

void FUNC_4(struct timing_generator *VAR_4,
  const struct dc_crtc_timing *VAR_5)
{
 struct dc_crtc_timing VAR_6;
 uint32_t VAR_7;
 uint32_t VAR_8;
 uint32_t VAR_9 = 0;
 int32_t VAR_10;

 struct optc *VAR_11 = FUNC_0(VAR_4);

 VAR_6 = *VAR_5;
 FUNC_3(&VAR_6);


 VAR_8 = VAR_6.v_total - VAR_6.v_front_porch;


 VAR_7 = VAR_8 -
   VAR_6.v_border_bottom -
   VAR_6.v_addressable -
   VAR_6.v_border_top;


 VAR_10 = VAR_7 - VAR_11->vstartup_start + 1;
 if (VAR_10 < 0)
  VAR_9 = -VAR_10;


 if (FUNC_1(VAR_1)) {
  if (VAR_6.flags.INTERLACE == 1) {
   VAR_8 = VAR_8 / 2;
   if ((VAR_11->vstartup_start/2)*2 > VAR_7)
    VAR_9 = VAR_9 / 2;
  }
 }

 FUNC_2(VAR_0,
   VAR_2, VAR_9,
   VAR_3, VAR_8);
}

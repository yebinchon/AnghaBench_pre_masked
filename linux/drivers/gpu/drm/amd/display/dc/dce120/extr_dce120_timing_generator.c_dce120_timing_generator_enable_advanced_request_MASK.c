
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct TYPE_2__ {int crtc; } ;
struct dce110_timing_generator {TYPE_1__ offsets; } ;
struct dc_crtc_timing {int v_total; int v_addressable; int v_border_bottom; int v_front_porch; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct dce110_timing_generator* FUNC_0 (struct timing_generator*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_3 ;
 int FUNC_3 (int,int,int ,int ) ;

void FUNC_4(
 struct timing_generator *VAR_4,
 bool VAR_5,
 const struct dc_crtc_timing *VAR_6)
{
 struct dce110_timing_generator *VAR_7 = FUNC_0(VAR_4);
 uint32_t VAR_8 =
    VAR_6->v_total - VAR_6->v_addressable -
    VAR_6->v_border_bottom - VAR_6->v_front_porch;
 uint32_t VAR_9 = FUNC_1(
    VAR_4->ctx,
    VAR_3,
    VAR_7->offsets.crtc);

 FUNC_3(
  VAR_9,
  VAR_5 ? 0 : 1,
  VAR_0,
  VAR_2);




 if (VAR_8 > 10)
  VAR_8 = 10;

 FUNC_3(
  VAR_9,
  VAR_8,
  VAR_0,
  VAR_1);

 FUNC_2(VAR_4->ctx,
   VAR_3,
   VAR_7->offsets.crtc,
   VAR_9);
}

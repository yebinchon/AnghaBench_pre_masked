
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct tg_color {int color_r_cr; int color_g_y; int color_b_cb; } ;
struct TYPE_2__ {int crtc; } ;
struct dce110_timing_generator {TYPE_1__ offsets; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ,int ) ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_4(
 struct timing_generator *VAR_7,
 const struct tg_color *VAR_8)
{
 struct dce110_timing_generator *VAR_9 = FUNC_1(VAR_7);
 uint32_t VAR_10 = 0;
 FUNC_0(
  VAR_0,
  VAR_1, VAR_8->color_b_cb,
  VAR_2, VAR_8->color_g_y,
  VAR_3, VAR_8->color_r_cr);

 VAR_10 = FUNC_2(
   VAR_7->ctx,
   VAR_6,
   VAR_9->offsets.crtc);

 FUNC_3(
   VAR_7->ctx,
   VAR_4,
   VAR_9->offsets.crtc,
   VAR_10);





 FUNC_3(
  VAR_7->ctx,
  VAR_5,
  VAR_9->offsets.crtc,
  VAR_10);
}

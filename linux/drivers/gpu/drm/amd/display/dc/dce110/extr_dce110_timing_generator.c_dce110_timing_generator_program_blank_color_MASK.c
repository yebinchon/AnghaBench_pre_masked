
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {int ctx; } ;
struct tg_color {int color_r_cr; int color_g_y; int color_b_cb; } ;
struct dce110_timing_generator {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 struct dce110_timing_generator* FUNC_1 (struct timing_generator*) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int VAR_4 ;
 int FUNC_4 (int ,int ,int ,int ) ;

void FUNC_5(
  struct timing_generator *VAR_5,
  const struct tg_color *VAR_6)
{
 struct dce110_timing_generator *VAR_7 = FUNC_1(VAR_5);
 uint32_t VAR_8 = FUNC_0(VAR_4);
 uint32_t VAR_9 = FUNC_2(VAR_5->ctx, VAR_8);

 FUNC_4(
  VAR_9,
  VAR_6->color_b_cb,
  VAR_0,
  VAR_1);
 FUNC_4(
  VAR_9,
  VAR_6->color_g_y,
  VAR_0,
  VAR_2);
 FUNC_4(
  VAR_9,
  VAR_6->color_r_cr,
  VAR_0,
  VAR_3);

 FUNC_3(VAR_5->ctx, VAR_8, VAR_9);
}

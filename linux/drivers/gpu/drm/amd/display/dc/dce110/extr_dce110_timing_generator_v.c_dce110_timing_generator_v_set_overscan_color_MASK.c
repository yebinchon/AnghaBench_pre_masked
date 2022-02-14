
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct timing_generator {struct dc_context* ctx; } ;
struct tg_color {int color_r_cr; int color_g_y; int color_b_cb; } ;
struct dc_context {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct dc_context*,int ,int ) ;
 int VAR_4 ;
 int FUNC_1 (int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(struct timing_generator *VAR_5,
 const struct tg_color *VAR_6)
{
 struct dc_context *VAR_7 = VAR_5->ctx;
 uint32_t VAR_8 = 0;
 uint32_t VAR_9;

 FUNC_1(
  VAR_8,
  VAR_6->color_b_cb,
  VAR_0,
  VAR_1);

 FUNC_1(
  VAR_8,
  VAR_6->color_g_y,
  VAR_0,
  VAR_2);

 FUNC_1(
  VAR_8,
  VAR_6->color_r_cr,
  VAR_0,
  VAR_3);

 VAR_9 = VAR_4;
 FUNC_0(VAR_7, VAR_9, VAR_8);
}

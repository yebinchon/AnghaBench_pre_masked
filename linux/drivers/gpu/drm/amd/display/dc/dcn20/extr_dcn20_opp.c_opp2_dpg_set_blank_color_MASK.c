
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tg_color {int color_b_cb; int color_g_y; int color_r_cr; } ;
struct output_pixel_processor {int dummy; } ;
struct dcn20_opp {int dummy; } ;


 int FUNC_0 (struct tg_color const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ,int ,int ,int,int ,int) ;
 struct dcn20_opp* FUNC_2 (struct output_pixel_processor*) ;

void FUNC_3(
  struct output_pixel_processor *VAR_9,
  const struct tg_color *VAR_10)
{
 struct dcn20_opp *VAR_11 = FUNC_2(VAR_9);


 FUNC_0(VAR_10);
 FUNC_1(VAR_6, 0,
   VAR_3, VAR_10->color_b_cb << 6,
   VAR_0, VAR_10->color_b_cb << 6);
 FUNC_1(VAR_7, 0,
   VAR_4, VAR_10->color_g_y << 6,
   VAR_1, VAR_10->color_g_y << 6);
 FUNC_1(VAR_8, 0,
   VAR_5, VAR_10->color_r_cr << 6,
   VAR_2, VAR_10->color_r_cr << 6);
}

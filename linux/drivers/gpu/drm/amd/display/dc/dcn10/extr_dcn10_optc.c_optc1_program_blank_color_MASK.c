
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timing_generator {int dummy; } ;
struct tg_color {int color_r_cr; int color_g_y; int color_b_cb; } ;
struct optc {int dummy; } ;


 struct optc* FUNC_0 (struct timing_generator*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ,int ) ;

void FUNC_2(
  struct timing_generator *VAR_4,
  const struct tg_color *VAR_5)
{
 struct optc *VAR_6 = FUNC_0(VAR_4);

 FUNC_1(VAR_0, 0,
   VAR_1, VAR_5->color_b_cb,
   VAR_2, VAR_5->color_g_y,
   VAR_3, VAR_5->color_r_cr);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct tg_color {int color_r_cr; int color_g_y; int color_b_cb; } ;
struct mpc {int dummy; } ;
struct dcn10_mpc {int dummy; } ;


 int * VAR_0 ;
 int * VAR_1 ;
 int * VAR_2 ;
 int FUNC_0 (int ,int ,int *,int) ;
 struct dcn10_mpc* FUNC_1 (struct mpc*) ;

void FUNC_2(struct mpc *VAR_3,
  struct tg_color *VAR_4,
  int VAR_5)
{
 struct dcn10_mpc *VAR_6 = FUNC_1(VAR_3);





 uint32_t VAR_7 = VAR_4->color_r_cr << 2;
 uint32_t VAR_8 = VAR_4->color_g_y << 2;
 uint32_t VAR_9 = VAR_4->color_b_cb << 2;

 FUNC_0(VAR_2[VAR_5], 0,
   VAR_2, VAR_7);
 FUNC_0(VAR_1[VAR_5], 0,
   VAR_1, VAR_8);
 FUNC_0(VAR_0[VAR_5], 0,
   VAR_0, VAR_9);
}

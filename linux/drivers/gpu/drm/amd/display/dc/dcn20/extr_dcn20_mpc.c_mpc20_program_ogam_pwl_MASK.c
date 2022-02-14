
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct pwl_result_data {int delta_blue_reg; int delta_green_reg; int delta_red_reg; int blue_reg; int green_reg; int red_reg; } ;
struct mpc {int dummy; } ;
struct dcn20_mpc {int dummy; } ;


 int * VAR_0 ;
 int FUNC_0 (int ,int ,int *,int ) ;
 struct dcn20_mpc* FUNC_1 (struct mpc*) ;

__attribute__((used)) static void FUNC_2(
  struct mpc *VAR_1, int VAR_2,
  const struct pwl_result_data *VAR_3,
  uint32_t VAR_4)
{
 uint32_t VAR_5;
 struct dcn20_mpc *VAR_6 = FUNC_1(VAR_1);

 for (VAR_5 = 0 ; VAR_5 < VAR_4; VAR_5++) {
  FUNC_0(VAR_0[VAR_2], 0, VAR_0, VAR_3[VAR_5].red_reg);
  FUNC_0(VAR_0[VAR_2], 0, VAR_0, VAR_3[VAR_5].green_reg);
  FUNC_0(VAR_0[VAR_2], 0, VAR_0, VAR_3[VAR_5].blue_reg);

  FUNC_0(VAR_0[VAR_2], 0,
    VAR_0, VAR_3[VAR_5].delta_red_reg);
  FUNC_0(VAR_0[VAR_2], 0,
    VAR_0, VAR_3[VAR_5].delta_green_reg);
  FUNC_0(VAR_0[VAR_2], 0,
    VAR_0, VAR_3[VAR_5].delta_blue_reg);

 }

}

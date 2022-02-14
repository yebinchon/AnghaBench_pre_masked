
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct pwl_result_data {int delta_blue_reg; int delta_green_reg; int delta_red_reg; int blue_reg; int green_reg; int red_reg; } ;
struct dpp {int dummy; } ;
struct dcn20_dpp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 struct dcn20_dpp* FUNC_1 (struct dpp*) ;

__attribute__((used)) static void FUNC_2(
  struct dpp *VAR_1,
  const struct pwl_result_data *VAR_2,
  uint32_t VAR_3)
{
 uint32_t VAR_4;
 struct dcn20_dpp *VAR_5 = FUNC_1(VAR_1);

 for (VAR_4 = 0 ; VAR_4 < VAR_3; VAR_4++) {
  FUNC_0(VAR_0, 0, VAR_0, VAR_2[VAR_4].red_reg);
  FUNC_0(VAR_0, 0, VAR_0, VAR_2[VAR_4].green_reg);
  FUNC_0(VAR_0, 0, VAR_0, VAR_2[VAR_4].blue_reg);

  FUNC_0(VAR_0, 0,
    VAR_0, VAR_2[VAR_4].delta_red_reg);
  FUNC_0(VAR_0, 0,
    VAR_0, VAR_2[VAR_4].delta_green_reg);
  FUNC_0(VAR_0, 0,
    VAR_0, VAR_2[VAR_4].delta_blue_reg);

 }

}

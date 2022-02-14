
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct pwl_result_data {int delta_blue_reg; int delta_green_reg; int delta_red_reg; int blue_reg; int green_reg; int red_reg; } ;
struct dpp {int dummy; } ;
struct dcn10_dpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct dcn10_dpp* FUNC_2 (struct dpp*) ;

void FUNC_3(
  struct dpp *VAR_6,
  const struct pwl_result_data *VAR_7,
  uint32_t VAR_8,
  bool VAR_9)
{
 uint32_t VAR_10;

 struct dcn10_dpp *VAR_11 = FUNC_2(VAR_6);
 FUNC_1(VAR_5, VAR_4, 0);
 FUNC_1(VAR_2,
       VAR_2, 7);
 FUNC_1(VAR_2, VAR_3,
     VAR_9 == 1 ? 0:1);

 FUNC_0(VAR_1, 0, VAR_1, 0);
 for (VAR_10 = 0 ; VAR_10 < VAR_8; VAR_10++) {
  FUNC_0(VAR_0, 0, VAR_0, VAR_7[VAR_10].red_reg);
  FUNC_0(VAR_0, 0, VAR_0, VAR_7[VAR_10].green_reg);
  FUNC_0(VAR_0, 0, VAR_0, VAR_7[VAR_10].blue_reg);

  FUNC_0(VAR_0, 0,
    VAR_0, VAR_7[VAR_10].delta_red_reg);
  FUNC_0(VAR_0, 0,
    VAR_0, VAR_7[VAR_10].delta_green_reg);
  FUNC_0(VAR_0, 0,
    VAR_0, VAR_7[VAR_10].delta_blue_reg);
 }
}

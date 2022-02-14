
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct pwl_result_data {int delta_blue_reg; int delta_green_reg; int delta_red_reg; int blue_reg; int green_reg; int red_reg; } ;
struct dpp {int dummy; } ;
struct dcn20_dpp {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int) ;
 struct dcn20_dpp* FUNC_2 (struct dpp*) ;

__attribute__((used)) static void FUNC_3(
  struct dpp *VAR_4,
  const struct pwl_result_data *VAR_5,
  uint32_t VAR_6,
  bool VAR_7)
{
 uint32_t VAR_8;

 struct dcn20_dpp *VAR_9 = FUNC_2(VAR_4);
 FUNC_1(VAR_2,
    VAR_2, 7);
 FUNC_1(VAR_2, VAR_3,
     VAR_7 == 1 ? 0:1);

 FUNC_0(VAR_1, 0, VAR_1, 0);
 for (VAR_8 = 0 ; VAR_8 < VAR_6; VAR_8++) {
  FUNC_0(VAR_0, 0, VAR_0, VAR_5[VAR_8].red_reg);
  FUNC_0(VAR_0, 0, VAR_0, VAR_5[VAR_8].green_reg);
  FUNC_0(VAR_0, 0, VAR_0, VAR_5[VAR_8].blue_reg);

  FUNC_0(VAR_0, 0,
    VAR_0, VAR_5[VAR_8].delta_red_reg);
  FUNC_0(VAR_0, 0,
    VAR_0, VAR_5[VAR_8].delta_green_reg);
  FUNC_0(VAR_0, 0,
    VAR_0, VAR_5[VAR_8].delta_blue_reg);

 }

}

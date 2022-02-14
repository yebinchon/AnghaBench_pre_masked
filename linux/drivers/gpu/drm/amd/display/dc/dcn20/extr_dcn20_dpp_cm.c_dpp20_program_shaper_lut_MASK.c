
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t uint32_t ;
struct pwl_result_data {size_t red_reg; size_t green_reg; size_t blue_reg; size_t delta_red_reg; size_t delta_green_reg; size_t delta_blue_reg; } ;
struct dpp {int dummy; } ;
struct dcn20_dpp {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,size_t) ;
 struct dcn20_dpp* FUNC_1 (struct dpp*) ;

__attribute__((used)) static void FUNC_2(
  struct dpp *VAR_1,
  const struct pwl_result_data *VAR_2,
  uint32_t VAR_3)
{
 uint32_t VAR_4, VAR_5, VAR_6, VAR_7;
 uint32_t VAR_8, VAR_9, VAR_10;
 uint32_t VAR_11, VAR_12, VAR_13;

 struct dcn20_dpp *VAR_14 = FUNC_1(VAR_1);

 for (VAR_4 = 0 ; VAR_4 < VAR_3; VAR_4++) {

  VAR_5 = VAR_2[VAR_4].red_reg;
  VAR_6 = VAR_2[VAR_4].green_reg;
  VAR_7 = VAR_2[VAR_4].blue_reg;

  VAR_8 = VAR_2[VAR_4].delta_red_reg;
  VAR_9 = VAR_2[VAR_4].delta_green_reg;
  VAR_10 = VAR_2[VAR_4].delta_blue_reg;

  VAR_11 = ((VAR_8 & 0x3ff) << 14) | (VAR_5 & 0x3fff);
  VAR_12 = ((VAR_9 & 0x3ff) << 14) | (VAR_6 & 0x3fff);
  VAR_13 = ((VAR_10 & 0x3ff) << 14) | (VAR_7 & 0x3fff);

  FUNC_0(VAR_0, 0, VAR_0, VAR_11);
  FUNC_0(VAR_0, 0, VAR_0, VAR_12);
  FUNC_0(VAR_0, 0, VAR_0, VAR_13);
 }

}

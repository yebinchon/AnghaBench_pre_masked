
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pwl_params {int hw_points_num; int rgb_resulted; } ;
struct dpp {int dummy; } ;
struct dcn20_dpp {int dummy; } ;
typedef enum dc_lut_mode { ____Placeholder_dc_lut_mode } dc_lut_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ,int) ;
 struct dcn20_dpp* FUNC_1 (struct dpp*) ;
 int FUNC_2 (struct dpp*,int) ;
 int FUNC_3 (struct dpp*) ;
 int FUNC_4 (struct dpp*,int ,int ) ;
 int FUNC_5 (struct dpp*,struct pwl_params const*) ;
 int FUNC_6 (struct dpp*,struct pwl_params const*) ;

bool FUNC_7(
  struct dpp *VAR_5,
  const struct pwl_params *VAR_6)
{
 enum dc_lut_mode VAR_7;
 enum dc_lut_mode VAR_8;

 struct dcn20_dpp *VAR_9 = FUNC_1(VAR_5);

 if (VAR_6 == ((void*)0)) {
  FUNC_0(VAR_0, 0, VAR_1, 0);
  return 0;
 }
 VAR_7 = FUNC_3(VAR_5);

 if (VAR_7 == VAR_2 || VAR_7 == VAR_3)
  VAR_8 = VAR_4;
 else
  VAR_8 = VAR_3;

 FUNC_2(VAR_5, VAR_8 == VAR_3 ? 1:0);

 if (VAR_8 == VAR_3)
  FUNC_5(VAR_5, VAR_6);
 else
  FUNC_6(VAR_5, VAR_6);

 FUNC_4(
   VAR_5, VAR_6->rgb_resulted, VAR_6->hw_points_num);

 FUNC_0(VAR_0, 0, VAR_1, VAR_8 == VAR_3 ? 1:2);

 return 1;

}

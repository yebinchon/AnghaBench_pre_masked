
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct pwl_params {int hw_points_num; int rgb_resulted; } ;
struct dpp {int dummy; } ;
struct dcn10_dpp {int is_write_to_ram_a_safe; struct pwl_params pwl_data; } ;
typedef enum opp_regamma { ____Placeholder_opp_regamma } opp_regamma ;


 int VAR_0 ;
 int VAR_1 ;




 int FUNC_0 (int ,int ,int ,int) ;
 struct dcn10_dpp* FUNC_1 (struct dpp*) ;
 int FUNC_2 (struct dpp*,int) ;
 int FUNC_3 (struct dpp*,int) ;
 int FUNC_4 (struct dpp*,int ,int ) ;
 int FUNC_5 (struct dpp*,struct pwl_params const*) ;
 int FUNC_6 (struct dpp*,struct pwl_params const*) ;
 int FUNC_7 (struct pwl_params*,struct pwl_params const*,int) ;

__attribute__((used)) static void FUNC_8(
 struct dpp *VAR_2, const struct pwl_params *VAR_3, enum opp_regamma VAR_4)
{
 struct dcn10_dpp *VAR_5 = FUNC_1(VAR_2);
 uint32_t VAR_6 = 0;

 switch (VAR_4) {
 case 131:
  VAR_6 = 0;
  break;
 case 130:
  VAR_6 = 1;
  break;
 case 128:
  VAR_6 = 2;
  break;
 case 129:
  VAR_6 = VAR_5->is_write_to_ram_a_safe ? 4 : 3;
  if (FUNC_7(&VAR_5->pwl_data, VAR_3, sizeof(*VAR_3)) == 0)
   break;

  FUNC_3(VAR_2, 1);
  FUNC_2(VAR_2, VAR_5->is_write_to_ram_a_safe);

  if (VAR_5->is_write_to_ram_a_safe)
   FUNC_5(VAR_2, VAR_3);
  else
   FUNC_6(VAR_2, VAR_3);

  FUNC_4(VAR_2, VAR_3->rgb_resulted,
         VAR_3->hw_points_num);
  VAR_5->pwl_data = *VAR_3;

  VAR_6 = VAR_5->is_write_to_ram_a_safe ? 3 : 4;
  VAR_5->is_write_to_ram_a_safe = !VAR_5->is_write_to_ram_a_safe;
  break;
 default:
  break;
 }
 FUNC_0(VAR_0, 0, VAR_1, VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dm_pp_clock_levels {int num_levels; int clocks_in_khz; } ;
typedef int sclks_in_khz ;
typedef int mclks_in_khz ;
typedef enum dm_pp_clock_type { ____Placeholder_dm_pp_clock_type } dm_pp_clock_type ;
typedef int disp_clks_in_khz ;





 int FUNC_0 (int ,int*,int) ;

__attribute__((used)) static void FUNC_1(
  enum dm_pp_clock_type VAR_0,
  struct dm_pp_clock_levels *VAR_1)
{
 uint32_t VAR_2[6] = {
   300000, 400000, 496560, 626090, 685720, 757900 };
 uint32_t VAR_3[6] = {
   300000, 360000, 423530, 514290, 626090, 720000 };
 uint32_t VAR_4[2] = { 333000, 800000 };

 switch (VAR_0) {
 case 130:
  VAR_1->num_levels = 6;
  FUNC_0(VAR_1->clocks_in_khz, VAR_2,
    sizeof(VAR_2));
  break;
 case 129:
  VAR_1->num_levels = 6;
  FUNC_0(VAR_1->clocks_in_khz, VAR_3,
    sizeof(VAR_3));
  break;
 case 128:
  VAR_1->num_levels = 2;
  FUNC_0(VAR_1->clocks_in_khz, VAR_4,
    sizeof(VAR_4));
  break;
 default:
  VAR_1->num_levels = 0;
  break;
 }
}

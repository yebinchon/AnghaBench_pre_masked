
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct dpp {int dummy; } ;
struct dcn20_dpp {int dummy; } ;
typedef enum dc_lut_mode { ____Placeholder_dc_lut_mode } dc_lut_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int*) ;
 struct dcn20_dpp* FUNC_1 (struct dpp*) ;

__attribute__((used)) static enum dc_lut_mode FUNC_2(struct dpp *VAR_5)
{
 enum dc_lut_mode VAR_6;
 uint32_t VAR_7;
 struct dcn20_dpp *VAR_8 = FUNC_1(VAR_5);

 FUNC_0(VAR_1,
     VAR_0, &VAR_7);

  switch (VAR_7) {
  case 0:
   VAR_6 = VAR_2;
   break;
  case 1:
   VAR_6 = VAR_3;
   break;
  case 2:
   VAR_6 = VAR_4;
   break;
  default:
   VAR_6 = VAR_2;
   break;
  }
  return VAR_6;
}

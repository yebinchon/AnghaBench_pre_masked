
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
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (int ,int ,int*) ;
 int FUNC_1 (int ,int ,int*,int ,int*) ;
 struct dcn20_dpp* FUNC_2 (struct dpp*) ;

__attribute__((used)) static enum dc_lut_mode FUNC_3(
   struct dpp *VAR_8,
   bool *VAR_9,
   bool *VAR_10)
{
 uint32_t VAR_11, VAR_12, VAR_13;
 enum dc_lut_mode VAR_14;
 struct dcn20_dpp *VAR_15 = FUNC_2(VAR_8);

 FUNC_1(VAR_3,
   VAR_1, &VAR_11,
   VAR_0, &VAR_12);

 switch (VAR_11) {
 case 0:
  VAR_14 = VAR_5;
  break;
 case 1:
  VAR_14 = VAR_6;
  break;
 case 2:
  VAR_14 = VAR_7;
  break;
 default:
  VAR_14 = VAR_5;
  break;
 }
 if (VAR_12 > 0)
  *VAR_10 = 0;
 else
  *VAR_10 = 1;

 FUNC_0(VAR_2, VAR_4, &VAR_13);

 if (VAR_13 == 0)
  *VAR_9 = 1;
 else
  *VAR_9 = 0;

 return VAR_14;
}

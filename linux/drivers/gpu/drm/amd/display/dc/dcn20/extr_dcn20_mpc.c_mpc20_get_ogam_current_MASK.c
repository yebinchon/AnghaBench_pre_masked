
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct mpc {int dummy; } ;
struct dcn20_mpc {int dummy; } ;
typedef enum dc_lut_mode { ____Placeholder_dc_lut_mode } dc_lut_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int FUNC_0 (int ,int ,int*) ;
 struct dcn20_mpc* FUNC_1 (struct mpc*) ;

__attribute__((used)) static enum dc_lut_mode FUNC_2(struct mpc *VAR_5, int VAR_6)
{
 enum dc_lut_mode VAR_7;
 uint32_t VAR_8;
 struct dcn20_mpc *VAR_9 = FUNC_1(VAR_5);

 FUNC_0(VAR_4[VAR_6],
   VAR_3, &VAR_8);

  switch (VAR_8) {
  case 0:
   VAR_7 = VAR_0;
   break;
  case 1:
   VAR_7 = VAR_1;
   break;
  case 2:
   VAR_7 = VAR_2;
   break;
  default:
   VAR_7 = VAR_0;
   break;
  }
  return VAR_7;
}

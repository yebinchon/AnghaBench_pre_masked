
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int16_t ;
typedef int u_int ;
struct ath_hal {int dummy; } ;
typedef int HAL_BOOL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;



 int VAR_4 ;

__attribute__((used)) static HAL_BOOL
FUNC_0(struct ath_hal *VAR_5, u_int VAR_6, u_int16_t *VAR_7)
{

 switch (VAR_6) {
 case 128:
  *VAR_7 = VAR_4;
  return VAR_1;
 case 130:
  *VAR_7 = VAR_2;
  return VAR_1;
 case 129:
  *VAR_7 = VAR_3;
  return VAR_1;
 }
 return VAR_0;
}

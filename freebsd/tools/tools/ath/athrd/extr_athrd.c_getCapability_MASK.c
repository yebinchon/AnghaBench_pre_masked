
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ath_hal {int dummy; } ;
struct TYPE_2__ {int ah_currentRD; int ah_caps; } ;
typedef int HAL_STATUS ;
typedef int HAL_CAPABILITY_TYPE ;
typedef int HAL_CAPABILITIES ;


 TYPE_1__* FUNC_0 (struct ath_hal*) ;

 int VAR_0 ;
 int VAR_1 ;

HAL_STATUS
FUNC_1(struct ath_hal *VAR_2, HAL_CAPABILITY_TYPE VAR_3,
 uint32_t VAR_4, uint32_t *VAR_5)
{
 const HAL_CAPABILITIES *VAR_6 = &FUNC_0(VAR_2)->ah_caps;

 switch (VAR_3) {
 case 128:
  *VAR_5 = FUNC_0(VAR_2)->ah_currentRD;
  return VAR_1;
 default:
  return VAR_0;
 }
}

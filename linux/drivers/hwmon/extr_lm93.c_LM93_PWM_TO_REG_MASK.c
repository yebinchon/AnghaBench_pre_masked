
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef enum pwm_freq { ____Placeholder_pwm_freq } pwm_freq ;


 int** VAR_0 ;

__attribute__((used)) static u8 FUNC_0(int VAR_1, enum pwm_freq VAR_2)
{
 int VAR_3;
 for (VAR_3 = 0; VAR_3 < 13; VAR_3++)
  if (VAR_1 <= VAR_0[VAR_2][VAR_3])
   break;


 return (u8)VAR_3;
}

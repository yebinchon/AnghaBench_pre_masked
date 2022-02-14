
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int mrb_bool ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static inline mrb_bool
FUNC_0(uint8_t VAR_2[32], uint8_t VAR_3)
{
  uint8_t VAR_4 = VAR_3 / 8;
  uint8_t VAR_5 = VAR_3 % 8;
  if (VAR_2[VAR_4] & (1<<VAR_5))
    return VAR_1;
  return VAR_0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum dc_rotation_angle { ____Placeholder_dc_rotation_angle } dc_rotation_angle ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static inline void FUNC_0(
 enum dc_rotation_angle VAR_3,
 bool VAR_4,
 bool *VAR_5,
 bool *VAR_6,
 bool *VAR_7)
{
 *VAR_5 = 0;
 *VAR_6 = 0;
 *VAR_7 = 0;
 if (VAR_3 == VAR_0) {
  *VAR_6 = 1;
  *VAR_7 = 1;
 } else if (VAR_3 == VAR_2) {
  *VAR_5 = 1;
  *VAR_7 = 1;
 } else if (VAR_3 == VAR_1) {
  *VAR_5 = 1;
  *VAR_6 = 1;
 }

 if (VAR_4)
  *VAR_7 = !*VAR_7;
}

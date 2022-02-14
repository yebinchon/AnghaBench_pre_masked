
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct isl29501_private {unsigned int* shadow_coeffs; } ;
typedef enum isl29501_register_name { ____Placeholder_isl29501_register_name } isl29501_register_name ;
typedef enum isl29501_correction_coeff { ____Placeholder_isl29501_correction_coeff } isl29501_correction_coeff ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;





__attribute__((used)) static int FUNC_0(struct isl29501_private *VAR_5,
         enum isl29501_register_name VAR_6,
         unsigned int VAR_7)
{
 enum isl29501_correction_coeff VAR_8;

 switch (VAR_6) {
 case 129:
  VAR_8 = VAR_2;
  break;
 case 128:
  VAR_8 = VAR_3;
  break;
 case 131:
  VAR_8 = VAR_0;
  break;
 case 130:
  VAR_8 = VAR_1;
  break;
 default:
  return -VAR_4;
 }
 VAR_5->shadow_coeffs[VAR_8] = VAR_7;

 return 0;
}

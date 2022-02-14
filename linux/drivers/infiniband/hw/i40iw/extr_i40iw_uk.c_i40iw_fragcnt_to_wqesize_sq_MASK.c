
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;

enum i40iw_status_code FUNC_0(u32 VAR_2, u8 *VAR_3)
{
 switch (VAR_2) {
 case 0:
 case 1:
  *VAR_3 = VAR_1;
  break;
 case 2:
 case 3:
  *VAR_3 = 64;
  break;
 case 4:
 case 5:
  *VAR_3 = 96;
  break;
 case 6:
 case 7:
  *VAR_3 = 128;
  break;
 default:
  return VAR_0;
 }

 return 0;
}

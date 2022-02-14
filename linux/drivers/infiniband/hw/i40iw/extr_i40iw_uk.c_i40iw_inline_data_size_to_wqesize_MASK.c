
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef enum i40iw_status_code { ____Placeholder_i40iw_status_code } i40iw_status_code ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

enum i40iw_status_code FUNC_0(u32 VAR_3,
        u8 *VAR_4)
{
 if (VAR_3 > VAR_1)
  return VAR_0;

 if (VAR_3 <= 16)
  *VAR_4 = VAR_2;
 else
  *VAR_4 = 64;

 return 0;
}

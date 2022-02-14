
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
 scalar_t__ VAR_3 ;
 int FUNC_0 (scalar_t__) ;

enum i40iw_status_code FUNC_1(u32 VAR_4, u8 VAR_5, u32 *VAR_6)
{
 *VAR_6 = FUNC_0((VAR_4 << VAR_5) + VAR_3);

 if (*VAR_6 < (VAR_2 << VAR_5))
  *VAR_6 = VAR_2 << VAR_5;
 else if (*VAR_6 > VAR_1)
  return VAR_0;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum ipu_rotate_mode { ____Placeholder_ipu_rotate_mode } ipu_rotate_mode ;


 int VAR_0 ;

int FUNC_0(enum ipu_rotate_mode *VAR_1, int VAR_2,
       bool VAR_3, bool VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;

 switch (VAR_2) {
 case 0:
  VAR_6 = VAR_7 = VAR_5 = 0;
  break;
 case 90:
  VAR_6 = VAR_7 = 0;
  VAR_5 = 1;
  break;
 case 180:
  VAR_6 = VAR_7 = 1;
  VAR_5 = 0;
  break;
 case 270:
  VAR_6 = VAR_7 = VAR_5 = 1;
  break;
 default:
  return -VAR_0;
 }

 VAR_7 ^= (u32)VAR_3;
 VAR_6 ^= (u32)VAR_4;

 *VAR_1 = (enum ipu_rotate_mode)((VAR_5 << 2) | (VAR_7 << 1) | VAR_6);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum ipu_rotate_mode { ____Placeholder_ipu_rotate_mode } ipu_rotate_mode ;


 int VAR_0 ;





int FUNC_0(int *VAR_1, enum ipu_rotate_mode VAR_2,
       bool VAR_3, bool VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;

 VAR_5 = ((u32)VAR_2 >> 2) & 0x1;
 VAR_7 = ((u32)VAR_2 >> 1) & 0x1;
 VAR_6 = ((u32)VAR_2 >> 0) & 0x1;
 VAR_7 ^= (u32)VAR_3;
 VAR_6 ^= (u32)VAR_4;

 switch ((enum ipu_rotate_mode)((VAR_5 << 2) | (VAR_7 << 1) | VAR_6)) {
 case 128:
  *VAR_1 = 0;
  break;
 case 129:
  *VAR_1 = 90;
  break;
 case 131:
  *VAR_1 = 180;
  break;
 case 130:
  *VAR_1 = 270;
  break;
 default:
  return -VAR_0;
 }

 return 0;
}

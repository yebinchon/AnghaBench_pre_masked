
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum ipu_color_space { ____Placeholder_ipu_color_space } ipu_color_space ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

enum ipu_color_space FUNC_0(u32 VAR_3)
{
 switch (VAR_3 & 0xf000) {
 case 0x1000:
  return VAR_0;
 case 0x2000:
  return VAR_2;
 default:
  return VAR_1;
 }
}

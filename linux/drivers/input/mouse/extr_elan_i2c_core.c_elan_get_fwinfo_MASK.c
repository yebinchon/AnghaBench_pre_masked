
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(u16 VAR_3, u16 *VAR_4,
      u16 *VAR_5)
{
 switch (VAR_3) {
 case 0x00:
 case 0x06:
 case 0x08:
  *VAR_4 = 512;
  break;
 case 0x03:
 case 0x07:
 case 0x09:
 case 0x0A:
 case 0x0B:
 case 0x0C:
  *VAR_4 = 768;
  break;
 case 0x0D:
  *VAR_4 = 896;
  break;
 case 0x0E:
  *VAR_4 = 640;
  break;
 case 0x10:
  *VAR_4 = 1024;
  break;
 default:

  *VAR_4 = 0;
  *VAR_5 = 0;
  return -VAR_0;
 }

 *VAR_5 =
  (*VAR_4 * VAR_1) - VAR_2;

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static u8
FUNC_0(u8 VAR_5)
{
 switch((VAR_5 & 0x1e) >> 1) {
 case 3:
  return VAR_2;

 case 6:
 case 10:
 case 11:
  return VAR_0;

 case 4:
 case 5:
  return VAR_3;

 case 12:
  return VAR_1;

 case 0:
 case 1:
 case 8:
 case 9:
 case 7:
 case 15:
 default:
  break;
 }

 return VAR_4;
}

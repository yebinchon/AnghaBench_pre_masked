
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef enum dc_link_rate { ____Placeholder_dc_link_rate } dc_link_rate ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

enum dc_link_rate FUNC_0(uint32_t VAR_9)
{
 enum dc_link_rate VAR_10;

 switch (VAR_9) {
 case 1620000:
  VAR_10 = VAR_3;
  break;
 case 2160000:
  VAR_10 = VAR_4;
  break;
 case 2430000:
  VAR_10 = VAR_5;
  break;
 case 2700000:
  VAR_10 = VAR_0;
  break;
 case 3240000:
  VAR_10 = VAR_7;
  break;
 case 4320000:
  VAR_10 = VAR_6;
  break;
 case 5400000:
  VAR_10 = VAR_1;
  break;
 case 8100000:
  VAR_10 = VAR_2;
  break;
 default:
  VAR_10 = VAR_8;
  break;
 }
 return VAR_10;
}

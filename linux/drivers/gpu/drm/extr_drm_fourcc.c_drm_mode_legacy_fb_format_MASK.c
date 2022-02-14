
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

uint32_t FUNC_0(uint32_t VAR_8, uint32_t VAR_9)
{
 uint32_t VAR_10 = VAR_2;

 switch (VAR_8) {
 case 8:
  if (VAR_9 == 8)
   VAR_10 = VAR_1;
  break;

 case 16:
  switch (VAR_9) {
  case 15:
   VAR_10 = VAR_5;
   break;
  case 16:
   VAR_10 = VAR_3;
   break;
  default:
   break;
  }
  break;

 case 24:
  if (VAR_9 == 24)
   VAR_10 = VAR_4;
  break;

 case 32:
  switch (VAR_9) {
  case 24:
   VAR_10 = VAR_7;
   break;
  case 30:
   VAR_10 = VAR_6;
   break;
  case 32:
   VAR_10 = VAR_0;
   break;
  default:
   break;
  }
  break;

 default:
  break;
 }

 return VAR_10;
}

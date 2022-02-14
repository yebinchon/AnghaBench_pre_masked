
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum ctrl_register { ____Placeholder_ctrl_register } ctrl_register ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static inline int FUNC_0(int VAR_8, enum ctrl_register VAR_9)
{
 int VAR_10;

 if (VAR_8 >= VAR_0) {




  switch (VAR_8) {
  case 0x5e:
   return VAR_7;
  default:
   return -VAR_2;
  }
 }

 if (VAR_9 == VAR_1) {
  if (VAR_8 < 8)
   VAR_10 = VAR_3;
  else
   VAR_10 = VAR_5;
 } else {
  if (VAR_8 < 8)
   VAR_10 = VAR_4;
  else
   VAR_10 = VAR_6;
 }

 return VAR_10 + VAR_8 % 8;
}

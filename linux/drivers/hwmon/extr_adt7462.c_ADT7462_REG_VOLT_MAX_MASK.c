
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct adt7462_data {int* pin_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static int FUNC_0(struct adt7462_data *VAR_12, int VAR_13)
{
 switch (VAR_13) {
 case 0:
  if (!(VAR_12->pin_cfg[0] & VAR_9))
   return 0x7C;
  break;
 case 1:
  return 0x69;
 case 2:
  if (!(VAR_12->pin_cfg[1] & VAR_4))
   return 0x7F;
  break;
 case 3:
  if (!(VAR_12->pin_cfg[1] & VAR_3))
   return 0x7E;
  break;
 case 4:
  if (!(VAR_12->pin_cfg[0] & VAR_1))
   return 0x4B;
  break;
 case 5:
  if (!(VAR_12->pin_cfg[0] & VAR_0))
   return 0x49;
  break;
 case 6:
  if (!(VAR_12->pin_cfg[1] & VAR_2))
   return 0x68;
  break;
 case 7:
  if (!(VAR_12->pin_cfg[1] & VAR_10))
   return 0x7D;
  break;
 case 8:
  if (!(VAR_12->pin_cfg[2] & VAR_6))
   return 0x6C;
  break;
 case 9:
  if (!(VAR_12->pin_cfg[2] & VAR_5))
   return 0x6B;
  break;
 case 10:
  return 0x6A;
 case 11:
  if (VAR_12->pin_cfg[3] >> VAR_7 ==
     VAR_8 &&
      !(VAR_12->pin_cfg[0] & VAR_11))
   return 0x50;
  break;
 case 12:
  if (VAR_12->pin_cfg[3] >> VAR_7 ==
     VAR_8 &&
      !(VAR_12->pin_cfg[0] & VAR_11))
   return 0x4C;
  break;
 }
 return 0;
}

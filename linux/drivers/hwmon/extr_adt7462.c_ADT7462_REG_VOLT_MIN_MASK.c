
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
   return 0x6D;
  break;
 case 1:
  return 0x72;
 case 2:
  if (!(VAR_12->pin_cfg[1] & VAR_4))
   return 0x6F;
  break;
 case 3:
  if (!(VAR_12->pin_cfg[1] & VAR_3))
   return 0x71;
  break;
 case 4:
  if (!(VAR_12->pin_cfg[0] & VAR_1))
   return 0x47;
  break;
 case 5:
  if (!(VAR_12->pin_cfg[0] & VAR_0))
   return 0x45;
  break;
 case 6:
  if (!(VAR_12->pin_cfg[1] & VAR_2))
   return 0x70;
  break;
 case 7:
  if (!(VAR_12->pin_cfg[1] & VAR_10))
   return 0x6E;
  break;
 case 8:
  if (!(VAR_12->pin_cfg[2] & VAR_6))
   return 0x75;
  break;
 case 9:
  if (!(VAR_12->pin_cfg[2] & VAR_5))
   return 0x74;
  break;
 case 10:
  return 0x73;
 case 11:
  if (VAR_12->pin_cfg[3] >> VAR_7 ==
     VAR_8 &&
      !(VAR_12->pin_cfg[0] & VAR_11))
   return 0x76;
  break;
 case 12:
  if (VAR_12->pin_cfg[3] >> VAR_7 ==
     VAR_8 &&
      !(VAR_12->pin_cfg[0] & VAR_11))
   return 0x77;
  break;
 }
 return 0;
}

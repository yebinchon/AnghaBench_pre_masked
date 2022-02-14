
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_0 (int,int ) ;

__attribute__((used)) static int FUNC_1(struct adt7462_data *VAR_16, int VAR_17)
{
 switch (VAR_17) {
 case 0:
  if (!(VAR_16->pin_cfg[0] & VAR_13))
   return 62500;
  break;
 case 1:
  switch (FUNC_0(VAR_16->pin_cfg[1], VAR_7)) {
  case 0:
   if (VAR_16->pin_cfg[0] & VAR_15)
    return 12500;
   return 6250;
  case 1:
   return 13000;
  case 2:
   return 9400;
  case 3:
   return 7800;
  }

 case 2:
  if (!(VAR_16->pin_cfg[1] & VAR_6))
   return 62500;
  break;
 case 3:
  if (!(VAR_16->pin_cfg[1] & VAR_5))
   return 26000;
  break;
 case 4:
  if (!(VAR_16->pin_cfg[0] & VAR_1)) {
   if (VAR_16->pin_cfg[1] & VAR_4)
    return 4690;
   return 6500;
  }
  break;
 case 5:
  if (!(VAR_16->pin_cfg[0] & VAR_0)) {
   if (VAR_16->pin_cfg[1] & VAR_3)
    return 9400;
   return 13000;
  }
  break;
 case 6:
  if (!(VAR_16->pin_cfg[1] & VAR_2))
   return 17200;
  break;
 case 7:
  if (!(VAR_16->pin_cfg[1] & VAR_14))
   return 62500;
  break;
 case 8:
  switch (FUNC_0(VAR_16->pin_cfg[2], VAR_10)) {
  case 0:
   return 15600;
  case 1:
   return 6250;
  }
  break;
 case 9:
  switch (FUNC_0(VAR_16->pin_cfg[2], VAR_9)) {
  case 0:
   return 17200;
  case 1:
   return 6250;
  }
  break;
 case 10:
  switch (FUNC_0(VAR_16->pin_cfg[2], VAR_8)) {
  case 0:
   return 6250;
  case 1:
   return 13000;
  case 2:
   return 9400;
  case 3:
   return 7800;
  }

 case 11:
 case 12:
  if (VAR_16->pin_cfg[3] >> VAR_11 ==
     VAR_12 &&
      !(VAR_16->pin_cfg[0] & VAR_15))
   return 7800;
 }
 return 0;
}

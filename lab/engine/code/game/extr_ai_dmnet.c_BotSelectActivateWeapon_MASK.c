
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__* inventory; } ;
typedef TYPE_1__ bot_state_t ;


 size_t VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 size_t VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 size_t VAR_9 ;
 size_t VAR_10 ;
 size_t VAR_11 ;
 size_t VAR_12 ;
 size_t VAR_13 ;
 size_t VAR_14 ;
 size_t VAR_15 ;
 size_t VAR_16 ;
 size_t VAR_17 ;
 size_t VAR_18 ;
 size_t VAR_19 ;
 size_t VAR_20 ;
 size_t VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;

int FUNC_0(bot_state_t *VAR_33) {

 if (VAR_33->inventory[VAR_10] > 0 && VAR_33->inventory[VAR_3] > 0)
  return VAR_26;
 else if (VAR_33->inventory[VAR_20] > 0 && VAR_33->inventory[VAR_19] > 0)
  return VAR_32;
 else if (VAR_33->inventory[VAR_14] > 0 && VAR_33->inventory[VAR_4] > 0)
  return VAR_28;
 else if (VAR_33->inventory[VAR_8] > 0 && VAR_33->inventory[VAR_9] > 0)
  return VAR_25;
 else if (VAR_33->inventory[VAR_6] > 0 && VAR_33->inventory[VAR_7] > 0)
  return VAR_24;
 else if (VAR_33->inventory[VAR_16] > 0 && VAR_33->inventory[VAR_21] > 0)
  return VAR_30;
 else if (VAR_33->inventory[VAR_17] > 0 && VAR_33->inventory[VAR_18] > 0)
  return VAR_31;
 else if (VAR_33->inventory[VAR_1] > 0 && VAR_33->inventory[VAR_2] > 0)
  return VAR_22;
 else {
  return -1;
 }
}

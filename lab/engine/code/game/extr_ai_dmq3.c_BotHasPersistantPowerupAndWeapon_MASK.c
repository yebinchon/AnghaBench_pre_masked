
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* inventory; } ;
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

int FUNC_0(bot_state_t *VAR_24) {
 if (VAR_24->inventory[VAR_9] < 60) return VAR_22;

 if (VAR_24->inventory[VAR_9] < 80) {

  if (VAR_24->inventory[VAR_1] < 40) return VAR_22;
 }

 if (VAR_24->inventory[VAR_3] > 0 &&
   VAR_24->inventory[VAR_4] > 7) return VAR_23;

 if (VAR_24->inventory[VAR_17] > 0 &&
   VAR_24->inventory[VAR_21] > 5) return VAR_23;

 if (VAR_24->inventory[VAR_10] > 0 &&
   VAR_24->inventory[VAR_11] > 50) return VAR_23;

 if (VAR_24->inventory[VAR_18] > 0 &&
   VAR_24->inventory[VAR_19] > 5) return VAR_23;

 if (VAR_24->inventory[VAR_13] > 0 &&
   VAR_24->inventory[VAR_14] > 5) return VAR_23;

 if (VAR_24->inventory[VAR_16] > 0 &&
   VAR_24->inventory[VAR_12] > 5) return VAR_23;

 if (VAR_24->inventory[VAR_6] > 0 &&
   VAR_24->inventory[VAR_2] > 40) return VAR_23;

 if (VAR_24->inventory[VAR_15] > 0 &&
   VAR_24->inventory[VAR_5] > 20) return VAR_23;
 return VAR_22;
}

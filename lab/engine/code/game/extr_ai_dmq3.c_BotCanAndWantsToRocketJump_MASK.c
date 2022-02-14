
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int* inventory; int character; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_5__ {int integer; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 TYPE_2__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 float FUNC_0 (int ,int ,int ,int) ;

int FUNC_1(bot_state_t *VAR_9) {
 float VAR_10;


 if (!VAR_6.integer) return VAR_7;

 if (VAR_9->inventory[VAR_4] <= 0) return VAR_7;

 if (VAR_9->inventory[VAR_5] < 3) return VAR_7;

 if (VAR_9->inventory[VAR_3]) return VAR_7;

 if (VAR_9->inventory[VAR_2] < 60) return VAR_7;

 if (VAR_9->inventory[VAR_2] < 90) {

  if (VAR_9->inventory[VAR_1] < 40) return VAR_7;
 }
 VAR_10 = FUNC_0(VAR_9->character, VAR_0, 0, 1);
 if (VAR_10 < 0.5) return VAR_7;
 return VAR_8;
}

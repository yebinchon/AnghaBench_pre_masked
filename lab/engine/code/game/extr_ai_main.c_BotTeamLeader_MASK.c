
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int teamleader; } ;
typedef TYPE_1__ bot_state_t ;
struct TYPE_5__ {int inuse; } ;


 int FUNC_0 (int ) ;
 TYPE_2__** VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int FUNC_1(bot_state_t *VAR_3) {
 int VAR_4;

 VAR_4 = FUNC_0(VAR_3->teamleader);
 if (VAR_4 < 0) return VAR_1;
 if (!VAR_0[VAR_4] || !VAR_0[VAR_4]->inuse) return VAR_1;
 return VAR_2;
}

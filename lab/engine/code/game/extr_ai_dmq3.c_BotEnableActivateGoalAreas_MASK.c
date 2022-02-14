
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int areasdisabled; int numareas; int * areas; } ;
typedef TYPE_1__ bot_activategoal_t ;


 int FUNC_0 (int ,int) ;

void FUNC_1(bot_activategoal_t *VAR_0, int VAR_1) {
 int VAR_2;

 if (VAR_0->areasdisabled == !VAR_1)
  return;
 for (VAR_2 = 0; VAR_2 < VAR_0->numareas; VAR_2++)
  FUNC_0( VAR_0->areas[VAR_2], VAR_1 );
 VAR_0->areasdisabled = !VAR_1;
}

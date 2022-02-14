
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int x; int y; int w; int h; int needsRedraw; int selectionColor; int * currentBar; int * defaultBar; int header; scalar_t__ oldSelected; scalar_t__ selected; scalar_t__ scrollH; scalar_t__ scrollV; int items; int * eventHandlerState; } ;
typedef TYPE_1__ Panel ;
typedef int ObjectClass ;
typedef int FunctionBar ;


 int * VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *,int,int ) ;

void FUNC_2(Panel* VAR_3, int VAR_4, int VAR_5, int VAR_6, int VAR_7, ObjectClass* VAR_8, bool VAR_9, FunctionBar* VAR_10) {
   VAR_3->x = VAR_4;
   VAR_3->y = VAR_5;
   VAR_3->w = VAR_6;
   VAR_3->h = VAR_7;
   VAR_3->eventHandlerState = ((void*)0);
   VAR_3->items = FUNC_1(VAR_8, VAR_9, VAR_1);
   VAR_3->scrollV = 0;
   VAR_3->scrollH = 0;
   VAR_3->selected = 0;
   VAR_3->oldSelected = 0;
   VAR_3->needsRedraw = 1;
   FUNC_0(VAR_3->header);
   VAR_3->defaultBar = VAR_10;
   VAR_3->currentBar = VAR_10;
   VAR_3->selectionColor = VAR_0[VAR_2];
}

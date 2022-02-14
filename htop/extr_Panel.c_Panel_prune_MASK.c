
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int needsRedraw; scalar_t__ oldSelected; scalar_t__ selected; scalar_t__ scrollV; int items; } ;
typedef TYPE_1__ Panel ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

void FUNC_2(Panel* VAR_0) {
   FUNC_1 (VAR_0 != ((void*)0));

   FUNC_0(VAR_0->items);
   VAR_0->scrollV = 0;
   VAR_0->selected = 0;
   VAR_0->oldSelected = 0;
   VAR_0->needsRedraw = 1;
}

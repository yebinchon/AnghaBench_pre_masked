
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ selected; int items; } ;
typedef TYPE_1__ Panel ;


 int FUNC_0 (int ,scalar_t__) ;
 int FUNC_1 (int ) ;

void FUNC_2(Panel* VAR_0) {
   FUNC_1 (VAR_0 != ((void*)0));

   FUNC_0(VAR_0->items, VAR_0->selected);
   if (VAR_0->selected > 0)
      VAR_0->selected--;
}

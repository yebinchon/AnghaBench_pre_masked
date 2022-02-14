
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int selected; int items; } ;
typedef TYPE_1__ Panel ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;

void FUNC_4(Panel* VAR_1, int VAR_2) {
   FUNC_3 (VAR_1 != ((void*)0));

   int VAR_3 = FUNC_2(VAR_1->items);
   if (VAR_2 >= VAR_3) {
      VAR_2 = VAR_3 - 1;
   }
   if (VAR_2 < 0)
      VAR_2 = 0;
   VAR_1->selected = VAR_2;
   if (FUNC_1(VAR_1)) {
      FUNC_0(VAR_1, VAR_0);
   }
}

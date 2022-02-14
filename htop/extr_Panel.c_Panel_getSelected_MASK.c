
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int selected; int items; } ;
typedef TYPE_1__ Panel ;
typedef int Object ;


 int * FUNC_0 (int ,int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

Object* FUNC_3(Panel* VAR_0) {
   FUNC_2 (VAR_0 != ((void*)0));
   if (FUNC_1(VAR_0->items) > 0)
      return FUNC_0(VAR_0->items, VAR_0->selected);
   else
      return ((void*)0);
}

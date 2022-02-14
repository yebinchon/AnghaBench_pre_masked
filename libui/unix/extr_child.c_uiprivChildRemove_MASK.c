
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * box; int oldvalign; int widget; int oldvexpand; int oldhalign; int oldhexpand; int parent; int c; } ;
typedef TYPE_1__ uiprivChild ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int *) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int ,int ) ;
 int FUNC_8 (TYPE_1__*) ;

void FUNC_9(uiprivChild *VAR_1)
{
 FUNC_5(VAR_1->c, ((void*)0));
 FUNC_7(FUNC_6(VAR_1->c), VAR_1->parent, VAR_0);

 FUNC_2(VAR_1->widget, VAR_1->oldhexpand);
 FUNC_1(VAR_1->widget, VAR_1->oldhalign);
 FUNC_4(VAR_1->widget, VAR_1->oldvexpand);
 FUNC_3(VAR_1->widget, VAR_1->oldvalign);

 if (VAR_1->box != ((void*)0))
  FUNC_0(VAR_1->box);

 FUNC_8(VAR_1);
}

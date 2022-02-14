
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_14__ {scalar_t__ urgent; struct TYPE_14__* parent; int focus_head; } ;
typedef TYPE_1__ Con ;


 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_2 (int *,TYPE_1__*,TYPE_1__*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int) ;
 int FUNC_7 (TYPE_1__*) ;
 TYPE_1__* VAR_0 ;
 int FUNC_8 (char*,TYPE_1__*) ;
 int FUNC_9 (int ) ;

void FUNC_10(Con *VAR_1) {
    FUNC_3(VAR_1 != ((void*)0));
    FUNC_0("con_focus = %p\n", VAR_1);



    FUNC_2(&(VAR_1->parent->focus_head), VAR_1, VAR_0);
    FUNC_1(&(VAR_1->parent->focus_head), VAR_1, VAR_0);
    if (VAR_1->parent->parent != ((void*)0))
        FUNC_10(VAR_1->parent);

    VAR_0 = VAR_1;





    if (VAR_1->urgent && FUNC_5(VAR_1)) {
        FUNC_6(VAR_1, 0);
        FUNC_7(VAR_1);
        FUNC_9(FUNC_4(VAR_1));
        FUNC_8("urgent", VAR_1);
    }
}

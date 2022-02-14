
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {scalar_t__ type; struct TYPE_12__* parent; int focus_head; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*) ;
 int VAR_2 ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;

Con *FUNC_7(Con *VAR_3) {

    if (VAR_3->parent->type == VAR_0) {
        FUNC_0("selecting workspace for dock client\n");
        return FUNC_4(FUNC_6(VAR_3->parent->parent));
    }
    if (FUNC_5(VAR_3)) {
        VAR_3 = VAR_3->parent;
    }



    Con *VAR_4 = FUNC_2(&(VAR_3->parent->focus_head));
    if (VAR_4 != VAR_3) {
        FUNC_0("Using first entry %p\n", VAR_4);
    } else {


        if (!(VAR_4 = FUNC_3(VAR_3, VAR_2))) {
            VAR_4 = VAR_3->parent;
        }
    }



    while (!FUNC_1(&(VAR_4->focus_head)) && FUNC_2(&(VAR_4->focus_head)) != VAR_3) {
        VAR_4 = FUNC_2(&(VAR_4->focus_head));
    }

    if (VAR_3->type == VAR_1 && VAR_4 != VAR_3->parent) {
        VAR_4 = FUNC_4(VAR_4);
    }

    return VAR_4;
}

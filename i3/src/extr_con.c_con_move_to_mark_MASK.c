
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {scalar_t__ type; int focus_head; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 TYPE_1__* FUNC_1 (int *) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int,int,int,int,int) ;
 TYPE_1__* FUNC_3 (char const*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 scalar_t__ FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 scalar_t__ FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*,int,int,int) ;
 int FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (char*,int *) ;

bool FUNC_12(Con *VAR_1, const char *VAR_2) {
    Con *VAR_3 = FUNC_3(VAR_2);
    if (VAR_3 == ((void*)0)) {
        FUNC_0("found no container with mark \"%s\"\n", VAR_2);
        return 0;
    }


    if (FUNC_4(VAR_3) == FUNC_11("__i3_scratch", ((void*)0))) {
        FUNC_0("target container is in the scratchpad, moving container to scratchpad.\n");
        FUNC_10(VAR_1);
        return 1;
    }


    if (FUNC_6(VAR_3)) {
        FUNC_0("target container is floating, moving container to target's workspace.\n");
        FUNC_9(VAR_1, FUNC_4(VAR_3), 1, 0, 0);
        return 1;
    }

    if (VAR_3->type == VAR_0 && FUNC_7(VAR_3)) {
        FUNC_0("target container is an empty workspace, simply moving the container there.\n");
        FUNC_9(VAR_1, VAR_3, 1, 0, 0);
        return 1;
    }




    if (FUNC_8(VAR_3)) {
        FUNC_0("target is a split container, descending to the currently focused child.\n");
        VAR_3 = FUNC_1(&(VAR_3->focus_head));
    }

    if (VAR_1 == VAR_3 || FUNC_5(VAR_3, VAR_1)) {
        FUNC_0("cannot move the container to or inside itself, aborting.\n");
        return 0;
    }

    return FUNC_2(VAR_1, VAR_3, 0, 1, 0, 0, 1);
}

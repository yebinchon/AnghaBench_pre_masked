
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ type; scalar_t__ layout; int floating_head; int nodes_head; int focus_head; int percent; struct TYPE_15__* parent; int name; int * window; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_4 (int *,TYPE_1__*,int ) ;
 int FUNC_5 (int *,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_6 (TYPE_1__*,int ) ;
 int FUNC_7 (int *,TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (TYPE_1__*,int ,int) ;

void FUNC_12(Con *VAR_8) {
    Con *VAR_9, *VAR_10, *VAR_11 = VAR_8->parent;
    FUNC_0("Checking if I can flatten con = %p / %s\n", VAR_8, VAR_8->name);


    if (VAR_8->type != VAR_0 ||
        VAR_11->layout == VAR_2 ||
        VAR_8->window != ((void*)0))
        goto recurse;


    VAR_10 = FUNC_2(&(VAR_8->nodes_head));
    if (VAR_10 == ((void*)0) || FUNC_6(VAR_10, VAR_7) != ((void*)0))
        goto recurse;

    FUNC_0("child = %p, con = %p, parent = %p\n", VAR_10, VAR_8, VAR_11);



    if (!FUNC_9(VAR_8) ||
        !FUNC_9(VAR_10) ||
        (VAR_8->layout != VAR_3 && VAR_8->layout != VAR_4) ||
        (VAR_10->layout != VAR_3 && VAR_10->layout != VAR_4) ||
        FUNC_10(VAR_8) == FUNC_10(VAR_10) ||
        FUNC_10(VAR_10) != FUNC_10(VAR_11))
        goto recurse;

    FUNC_0("Alright, I have to flatten this situation now. Stay calm.\n");

    Con *VAR_12 = FUNC_2(&(VAR_10->focus_head));

    FUNC_0("detaching...\n");

    while (!FUNC_1(&(VAR_10->nodes_head))) {
        VAR_9 = FUNC_2(&(VAR_10->nodes_head));
        FUNC_0("detaching current=%p / %s\n", VAR_9, VAR_9->name);
        FUNC_8(VAR_9);
        FUNC_0("re-attaching\n");




        VAR_9->parent = VAR_11;
        FUNC_3(VAR_8, VAR_9, VAR_7);
        FUNC_0("attaching to focus list\n");
        FUNC_5(&(VAR_11->focus_head), VAR_9, VAR_6);
        VAR_9->percent = VAR_8->percent;
    }
    FUNC_0("re-attached all\n");


    if (VAR_12 != ((void*)0) &&
        FUNC_2(&(VAR_11->focus_head)) == VAR_8) {
        FUNC_0("restoring focus to focus_next=%p\n", VAR_12);
        FUNC_7(&(VAR_11->focus_head), VAR_12, VAR_6);
        FUNC_4(&(VAR_11->focus_head), VAR_12, VAR_6);
        FUNC_0("restored focus.\n");
    }


    FUNC_0("closing redundant cons\n");
    FUNC_11(VAR_8, VAR_1, 1);






    return;

recurse:


    VAR_9 = FUNC_2(&(VAR_8->nodes_head));
    while (VAR_9 != ((void*)0)) {
        Con *VAR_13 = FUNC_6(VAR_9, VAR_7);
        FUNC_12(VAR_9);
        VAR_9 = VAR_13;
    }

    VAR_9 = FUNC_2(&(VAR_8->floating_head));
    while (VAR_9 != ((void*)0)) {
        Con *VAR_14 = FUNC_6(VAR_9, VAR_5);
        FUNC_12(VAR_9);
        VAR_9 = VAR_14;
    }
}

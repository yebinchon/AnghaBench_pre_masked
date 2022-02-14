
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_15__ {scalar_t__ type; scalar_t__ scratchpad_state; struct TYPE_15__* parent; int focus_head; int name; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 TYPE_1__* FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*,int,int,int) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int VAR_4 ;
 TYPE_1__* FUNC_9 (char*,int *) ;

void FUNC_10(Con *VAR_5) {
    if (VAR_5->type == VAR_0) {
        FUNC_1("'move scratchpad' used on a workspace \"%s\". Calling it "
            "recursively on all windows on this workspace.\n",
            VAR_5->name);
        Con *VAR_6;
        VAR_6 = FUNC_2(&(VAR_5->focus_head));
        while (VAR_6) {
            Con *VAR_7 = FUNC_3(VAR_6, VAR_4);
            FUNC_10(VAR_6);
            VAR_6 = VAR_7;
        }
        return;
    }
    FUNC_0("should move con %p to __i3_scratch\n", VAR_5);

    Con *VAR_8 = FUNC_9("__i3_scratch", ((void*)0));
    if (FUNC_5(VAR_5) == VAR_8) {
        FUNC_0("This window is already on __i3_scratch.\n");
        return;
    }



    FUNC_4(VAR_5);





    Con *VAR_9 = FUNC_6(VAR_5);
    if (VAR_9 == ((void*)0)) {
        FUNC_8(VAR_5, 0);
        VAR_5 = VAR_5->parent;
    } else {
        VAR_5 = VAR_9;
    }



    FUNC_7(VAR_5, VAR_8, 1, 1, 0);




    if (VAR_5->scratchpad_state == VAR_3) {
        FUNC_0("This window was never used as a scratchpad before.\n");
        if (VAR_5 == VAR_9) {
            FUNC_0("It was in floating mode before, set scratchpad state to changed.\n");
            VAR_5->scratchpad_state = VAR_1;
        } else {
            FUNC_0("It was in tiling mode before, set scratchpad state to fresh.\n");
            VAR_5->scratchpad_state = VAR_2;
        }
    }
}

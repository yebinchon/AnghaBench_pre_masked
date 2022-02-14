
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ orientation_t ;
struct TYPE_13__ {scalar_t__ type; scalar_t__ layout; double percent; struct TYPE_13__* parent; int focus_head; int nodes_head; int workspace_layout; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_1 (int *,TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (int *,int *) ;
 int FUNC_6 (TYPE_1__*) ;
 int VAR_5 ;
 int VAR_6 ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;

void FUNC_8(Con *VAR_7, orientation_t VAR_8) {
    if (FUNC_4(VAR_7)) {
        FUNC_0("Floating containers can't be split.\n");
        return;
    }

    if (VAR_7->type == VAR_0) {
        if (FUNC_6(VAR_7) < 2) {
            if (FUNC_6(VAR_7) == 0) {
                FUNC_0("Changing workspace_layout to L_DEFAULT\n");
                VAR_7->workspace_layout = VAR_2;
            }
            FUNC_0("Changing orientation of workspace\n");
            VAR_7->layout = (VAR_8 == VAR_1) ? VAR_3 : VAR_4;
            return;
        } else {


            VAR_7 = FUNC_7(VAR_7);
        }
    }

    Con *VAR_9 = VAR_7->parent;


    FUNC_3(VAR_7);




    if (FUNC_6(VAR_9) == 1 &&
        (VAR_9->layout == VAR_3 ||
         VAR_9->layout == VAR_4)) {
        VAR_9->layout = (VAR_8 == VAR_1) ? VAR_3 : VAR_4;
        FUNC_0("Just changing orientation of existing container\n");
        return;
    }

    FUNC_0("Splitting in orientation %d\n", VAR_8);


    Con *VAR_10 = FUNC_5(((void*)0), ((void*)0));
    FUNC_1(&(VAR_9->nodes_head), VAR_7, VAR_10, VAR_6);
    FUNC_1(&(VAR_9->focus_head), VAR_7, VAR_10, VAR_5);
    VAR_10->parent = VAR_9;
    VAR_10->layout = (VAR_8 == VAR_1) ? VAR_3 : VAR_4;


    VAR_10->percent = VAR_7->percent;
    VAR_7->percent = 0.0;


    FUNC_2(VAR_7, VAR_10, 0);
}

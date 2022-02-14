
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_1__ ;


typedef scalar_t__ layout_t ;
struct TYPE_15__ {scalar_t__ type; scalar_t__ layout; scalar_t__ last_split_layout; int nodes_head; struct TYPE_15__* parent; scalar_t__ workspace_layout; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int *,int *) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int VAR_6 ;
 int FUNC_8 (TYPE_1__**) ;
 TYPE_1__** FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*,TYPE_1__**) ;
 int FUNC_11 (int ) ;

void FUNC_12(Con *VAR_7, layout_t VAR_8) {
    FUNC_0("con_set_layout(%p, %d), con->type = %d\n",
         VAR_7, VAR_8, VAR_7->type);




    if (VAR_7->type != VAR_0)
        VAR_7 = VAR_7->parent;




    if (VAR_7->layout == VAR_2 || VAR_7->layout == VAR_3)
        VAR_7->last_split_layout = VAR_7->layout;





    if (VAR_7->type == VAR_0) {
        if (FUNC_7(VAR_7) == 0) {
            layout_t VAR_9 = (VAR_8 == VAR_4 || VAR_8 == VAR_5) ? VAR_8 : VAR_1;
            FUNC_0("Setting workspace_layout to %d\n", VAR_9);
            VAR_7->workspace_layout = VAR_9;
            FUNC_0("Setting layout to %d\n", VAR_8);
            VAR_7->layout = VAR_8;
        } else if (VAR_8 == VAR_4 || VAR_8 == VAR_5 || VAR_8 == VAR_3 || VAR_8 == VAR_2) {
            FUNC_0("Creating new split container\n");

            Con *VAR_10 = FUNC_6(((void*)0), ((void*)0));
            VAR_10->parent = VAR_7;



            VAR_10->layout = VAR_8;
            VAR_10->last_split_layout = VAR_7->last_split_layout;


            Con **VAR_11 = FUNC_9(VAR_7);

            FUNC_0("Moving cons\n");
            Con *VAR_12;
            while (!FUNC_1(&(VAR_7->nodes_head))) {
                VAR_12 = FUNC_2(&(VAR_7->nodes_head));
                FUNC_4(VAR_12);
                FUNC_3(VAR_12, VAR_10, 1);
            }

            FUNC_10(VAR_10, VAR_11);
            FUNC_8(VAR_11);


            FUNC_0("Attaching new split to ws\n");
            FUNC_3(VAR_10, VAR_7, 0);

            FUNC_11(VAR_6);
        }
        FUNC_5(VAR_7);
        return;
    }

    if (VAR_8 == VAR_1) {





        VAR_7->layout = VAR_7->last_split_layout;

        if (VAR_7->layout == VAR_1)
            VAR_7->layout = VAR_2;
    } else {
        VAR_7->layout = VAR_8;
    }
    FUNC_5(VAR_7);
}

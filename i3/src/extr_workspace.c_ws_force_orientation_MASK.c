
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_1__ ;


typedef scalar_t__ orientation_t ;
struct TYPE_16__ {struct TYPE_16__* layout; int nodes_head; struct TYPE_16__* parent; } ;
typedef TYPE_1__ Con ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_1__**) ;
 TYPE_1__** FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__**) ;

void FUNC_10(Con *VAR_3, orientation_t VAR_4) {

    Con *VAR_5 = FUNC_6(((void*)0), ((void*)0));
    VAR_5->parent = VAR_3;


    VAR_5->layout = VAR_3->layout;


    Con **VAR_6 = FUNC_8(VAR_3);

    FUNC_0("Moving cons\n");
    while (!FUNC_1(&(VAR_3->nodes_head))) {
        Con *VAR_7 = FUNC_2(&(VAR_3->nodes_head));
        FUNC_4(VAR_7);
        FUNC_3(VAR_7, VAR_5, 1);
    }

    FUNC_9(VAR_5, VAR_6);
    FUNC_7(VAR_6);


    VAR_3->layout = (VAR_4 == VAR_0) ? VAR_1 : VAR_2;
    FUNC_0("split->layout = %d, ws->layout = %d\n", VAR_5->layout, VAR_3->layout);


    FUNC_0("Attaching new split (%p) to ws (%p)\n", VAR_5, VAR_3);
    FUNC_3(VAR_5, VAR_3, 0);


    FUNC_5(VAR_3);
}

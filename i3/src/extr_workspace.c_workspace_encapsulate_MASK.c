
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_17__ {int nodes_head; int name; int layout; struct TYPE_17__* parent; } ;
typedef TYPE_1__ Con ;


 int FUNC_0 (char*,TYPE_1__*,int ,TYPE_1__*) ;
 int FUNC_1 (char*,TYPE_1__*,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 TYPE_1__* FUNC_3 (int *) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int *,int *) ;
 int FUNC_7 (TYPE_1__**) ;
 TYPE_1__** FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__**) ;

Con *FUNC_10(Con *VAR_0) {
    if (FUNC_2(&(VAR_0->nodes_head))) {
        FUNC_1("Workspace %p / %s has no children to encapsulate\n", VAR_0, VAR_0->name);
        return ((void*)0);
    }

    Con *VAR_1 = FUNC_6(((void*)0), ((void*)0));
    VAR_1->parent = VAR_0;
    VAR_1->layout = VAR_0->layout;

    Con **VAR_2 = FUNC_8(VAR_0);

    FUNC_0("Moving children of workspace %p / %s into container %p\n",
         VAR_0, VAR_0->name, VAR_1);
    Con *VAR_3;
    while (!FUNC_2(&(VAR_0->nodes_head))) {
        VAR_3 = FUNC_3(&(VAR_0->nodes_head));
        FUNC_5(VAR_3);
        FUNC_4(VAR_3, VAR_1, 1);
    }

    FUNC_9(VAR_1, VAR_2);
    FUNC_7(VAR_2);

    FUNC_4(VAR_1, VAR_0, 1);

    return VAR_1;
}

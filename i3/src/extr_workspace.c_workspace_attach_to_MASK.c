
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ workspace_layout; scalar_t__ layout; struct TYPE_8__* parent; struct TYPE_8__* name; } ;
typedef TYPE_1__ Con ;


 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int *,int *) ;

Con *FUNC_4(Con *VAR_1) {
    FUNC_0("Attaching a window to workspace %p / %s\n", VAR_1, VAR_1->name);

    if (VAR_1->workspace_layout == VAR_0) {
        FUNC_0("Default layout, just attaching it to the workspace itself.\n");
        return VAR_1;
    }

    FUNC_0("Non-default layout, creating a new split container\n");

    Con *VAR_2 = FUNC_3(((void*)0), ((void*)0));
    VAR_2->parent = VAR_1;


    VAR_2->layout = VAR_1->workspace_layout;


    FUNC_0("Attaching new split %p to workspace %p\n", VAR_2, VAR_1);
    FUNC_1(VAR_2, VAR_1, 0);


    FUNC_2(VAR_1);

    return VAR_2;
}

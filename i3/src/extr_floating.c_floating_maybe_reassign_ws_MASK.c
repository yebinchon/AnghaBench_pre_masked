
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {int name; int focus_head; int rect; } ;
struct TYPE_13__ {scalar_t__ con; } ;
typedef TYPE_1__ Output ;
typedef TYPE_2__ Con ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (char*) ;
 TYPE_2__* FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*) ;
 scalar_t__ FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (TYPE_2__*) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (TYPE_2__*,TYPE_2__*,int,int,int) ;
 TYPE_1__* FUNC_9 (int ) ;
 TYPE_2__* FUNC_10 (scalar_t__) ;
 int FUNC_11 (TYPE_2__*) ;

bool FUNC_12(Con *VAR_0) {
    if (FUNC_7(FUNC_6(VAR_0))) {
        FUNC_0("Con in an internal workspace\n");
        return 0;
    }

    Output *VAR_1 = FUNC_9(VAR_0->rect);

    if (!VAR_1) {
        FUNC_1("No output found at destination coordinates?\n");
        return 0;
    }

    if (FUNC_5(VAR_0) == VAR_1->con) {
        FUNC_0("still the same ws\n");
        return 0;
    }

    FUNC_0("Need to re-assign!\n");

    Con *VAR_2 = FUNC_10(VAR_1->con);
    Con *VAR_3 = FUNC_2(&(VAR_2->focus_head));
    FUNC_0("Moving con %p / %s to workspace %p / %s\n", VAR_0, VAR_0->name, VAR_3, VAR_3->name);
    FUNC_8(VAR_0, VAR_3, 0, 1, 0);
    FUNC_11(VAR_3);
    FUNC_3(FUNC_4(VAR_0));
    return 1;
}

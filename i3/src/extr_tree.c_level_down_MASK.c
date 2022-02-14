
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int focus_head; } ;
struct TYPE_6__ {scalar_t__ type; int focus_head; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_2__* VAR_1 ;

bool FUNC_4(void) {

    Con *VAR_2 = FUNC_2(&(VAR_1->focus_head));
    if (VAR_2 == FUNC_1(&(VAR_1->focus_head))) {
        FUNC_0("cannot go down\n");
        return 0;
    } else if (VAR_2->type == VAR_0) {


        Con *VAR_3 = FUNC_2(&(VAR_2->focus_head));
        if (VAR_3 == FUNC_1(&(VAR_2->focus_head))) {
            FUNC_0("cannot go down\n");
            return 0;
        } else
            VAR_2 = FUNC_2(&(VAR_2->focus_head));
    }

    FUNC_3(VAR_2);
    return 1;
}

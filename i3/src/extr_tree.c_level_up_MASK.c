
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; struct TYPE_4__* parent; } ;
struct TYPE_3__ {scalar_t__ type; TYPE_2__* parent; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_2__*) ;
 TYPE_1__* VAR_3 ;

bool FUNC_2(void) {


    if (VAR_3->parent->type == VAR_1) {
        FUNC_1(VAR_3->parent->parent);
        return 1;
    }


    if ((VAR_3->parent->type != VAR_0 &&
         VAR_3->parent->type != VAR_2) ||
        VAR_3->type == VAR_2) {
        FUNC_0("'focus parent': Focus is already on the workspace, cannot go higher than that.\n");
        return 0;
    }
    FUNC_1(VAR_3->parent);
    return 1;
}

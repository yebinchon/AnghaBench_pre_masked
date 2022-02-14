
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ type; struct TYPE_3__* parent; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;

bool FUNC_0(Con *VAR_1) {
    if (VAR_1->parent == ((void*)0))
        return 0;

    if (VAR_1->parent->type == VAR_0)
        return 1;

    return FUNC_0(VAR_1->parent);
}

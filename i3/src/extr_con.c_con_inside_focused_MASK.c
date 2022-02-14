
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* parent; } ;
typedef TYPE_1__ Con ;


 TYPE_1__* VAR_0 ;

bool FUNC_0(Con *VAR_1) {
    if (VAR_1 == VAR_0)
        return 1;
    if (!VAR_1->parent)
        return 0;
    return FUNC_0(VAR_1->parent);
}

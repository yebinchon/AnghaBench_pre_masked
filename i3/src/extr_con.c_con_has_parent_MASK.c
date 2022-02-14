
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* parent; } ;
typedef TYPE_1__ Con ;



bool FUNC_0(Con *VAR_0, Con *VAR_1) {
    Con *VAR_2 = VAR_0->parent;
    if (VAR_2 == ((void*)0)) {
        return 0;
    }

    if (VAR_2 == VAR_1) {
        return 1;
    }

    return FUNC_0(VAR_2, VAR_1);
}

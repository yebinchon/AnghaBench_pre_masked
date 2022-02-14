
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int layout; } ;
typedef TYPE_1__ Con ;




 scalar_t__ FUNC_0 (TYPE_1__*) ;

bool FUNC_1(Con *VAR_0) {
    if (FUNC_0(VAR_0))
        return 0;

    switch (VAR_0->layout) {
        case 129:
        case 128:
            return 0;

        default:
            return 1;
    }
}

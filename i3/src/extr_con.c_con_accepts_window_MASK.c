
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; int * window; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;

bool FUNC_2(Con *VAR_1) {

    if (VAR_1->type == VAR_0)
        return 0;

    if (FUNC_1(VAR_1)) {
        FUNC_0("container %p does not accept windows, it is a split container.\n", VAR_1);
        return 0;
    }


    return (VAR_1->window == ((void*)0));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; struct TYPE_4__* parent; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;

Con *FUNC_0(Con *VAR_1) {
    Con *VAR_2 = VAR_1;
    while (VAR_2 != ((void*)0) && VAR_2->type != VAR_0)
        VAR_2 = VAR_2->parent;
    return VAR_2;
}

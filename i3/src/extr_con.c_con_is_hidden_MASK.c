
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; scalar_t__ layout; int focus_head; struct TYPE_4__* parent; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_1__* FUNC_0 (int *) ;

bool FUNC_1(Con *VAR_3) {
    Con *VAR_4 = VAR_3;



    while (VAR_4 != ((void*)0) && VAR_4->type != VAR_0) {
        Con *VAR_5 = VAR_4->parent;
        if (VAR_5 != ((void*)0) && (VAR_5->layout == VAR_2 || VAR_5->layout == VAR_1)) {
            if (FUNC_0(&(VAR_5->focus_head)) != VAR_4)
                return 1;
        }

        VAR_4 = VAR_5;
    }

    return 0;
}

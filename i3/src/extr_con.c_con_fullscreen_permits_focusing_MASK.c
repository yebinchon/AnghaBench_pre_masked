
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ fullscreen_mode; scalar_t__ type; struct TYPE_7__* parent; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* VAR_3 ;

bool FUNC_3(Con *VAR_4) {

    if (!VAR_3)
        return 1;


    Con *VAR_5 = VAR_3;
    while (VAR_5 && VAR_5->fullscreen_mode == VAR_0)
        VAR_5 = VAR_5->parent;



    FUNC_0(VAR_5 != ((void*)0));


    FUNC_0(VAR_5->fullscreen_mode != VAR_0);
    if (VAR_5->type == VAR_2)
        return 1;


    if (VAR_4 == VAR_5)
        return 1;



    if (VAR_5->fullscreen_mode == VAR_1 &&
        FUNC_1(VAR_4) != FUNC_1(VAR_5)) {
        return 1;
    }



    return FUNC_2(VAR_4, VAR_5);
}

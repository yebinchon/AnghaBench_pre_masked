
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; struct TYPE_4__* parent; int deco_render_params; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*) ;

void FUNC_2(Con *VAR_2) {
    Con *VAR_3 = VAR_2;

    while (VAR_3 != ((void*)0) && VAR_3->type != VAR_1 && VAR_3->type != VAR_0) {
        if (!FUNC_1(VAR_3)) {
            FUNC_0(VAR_3->deco_render_params);
        }

        VAR_3 = VAR_3->parent;
    }
}

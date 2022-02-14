
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ type; int urgent; struct TYPE_4__* parent; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;

void FUNC_1(Con *VAR_2) {
    Con *VAR_3 = VAR_2->parent;





    if (VAR_2->type == VAR_1)
        return;

    bool VAR_4 = VAR_2->urgent;
    while (VAR_3 && VAR_3->type != VAR_1 && VAR_3->type != VAR_0) {
        if (VAR_4) {
            VAR_3->urgent = 1;
        } else {


            if (!FUNC_0(VAR_3))
                VAR_3->urgent = 0;
        }
        VAR_3 = VAR_3->parent;
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ type; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*) ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int) ;

void FUNC_5(Con *VAR_1, bool VAR_2) {

    if (VAR_1->type == VAR_0) {
        FUNC_0("Cannot toggle floating mode on con = %p because it is of type CT_FLOATING_CON.\n", VAR_1);
        return;
    }


    if (FUNC_2(VAR_1)) {
        FUNC_1("already floating, re-setting to tiling\n");

        FUNC_3(VAR_1);
        return;
    }

    FUNC_4(VAR_1, VAR_2);
}

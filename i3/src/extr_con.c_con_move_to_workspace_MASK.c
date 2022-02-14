
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ type; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int,int,int,int,int) ;
 int FUNC_2 (int) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*) ;

void FUNC_5(Con *VAR_1, Con *VAR_2, bool VAR_3, bool VAR_4, bool VAR_5) {
    FUNC_2(VAR_2->type == VAR_0);

    Con *VAR_6 = FUNC_4(VAR_1);
    if (VAR_2 == VAR_6) {
        FUNC_0("Not moving, already there\n");
        return;
    }

    Con *VAR_7 = FUNC_3(VAR_2);
    FUNC_1(VAR_1, VAR_7, 1, VAR_3, VAR_4, VAR_5, 1);
}

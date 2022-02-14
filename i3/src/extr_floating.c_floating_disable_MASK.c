
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ type; double percent; int floating; struct TYPE_18__* parent; } ;
typedef TYPE_1__ Con ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (TYPE_1__*,TYPE_1__*,int) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 scalar_t__ FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (TYPE_1__*,int) ;
 int FUNC_9 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_10 (char*,TYPE_1__*) ;
 int FUNC_11 (TYPE_1__*,int ,int) ;

void FUNC_12(Con *VAR_4) {
    if (!FUNC_6(VAR_4)) {
        FUNC_0("Container isn't floating, not doing anything.\n");
        return;
    }

    Con *VAR_5 = FUNC_5(VAR_4);
    if (FUNC_7(VAR_5)) {
        FUNC_0("Can't disable floating for container in internal workspace.\n");
        return;
    }
    Con *VAR_6 = FUNC_2(VAR_5);

    if (VAR_6->type == VAR_1) {
        Con *VAR_7 = VAR_4->parent;
        FUNC_3(VAR_4);
        VAR_4->parent = ((void*)0);
        FUNC_11(VAR_7, VAR_2, 1);
        FUNC_1(VAR_4, VAR_6, 0);
        VAR_4->percent = 0.0;
        FUNC_4(VAR_4->parent);
    } else {
        FUNC_9(VAR_4, VAR_6, VAR_0);
    }

    VAR_4->floating = VAR_3;
    FUNC_8(VAR_4, 0);
    FUNC_10("floating", VAR_4);
}

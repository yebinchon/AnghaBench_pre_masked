
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int direction_t ;
struct TYPE_18__ {int deco_render_params; } ;
struct TYPE_17__ {int con; } ;
typedef TYPE_1__ Output ;
typedef TYPE_2__ Con ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_2__*,int ,int ) ;
 int FUNC_3 (TYPE_2__*,TYPE_2__*,int ) ;
 int VAR_1 ;
 int FUNC_4 (TYPE_2__*) ;
 TYPE_2__* FUNC_5 (TYPE_2__*) ;
 int VAR_2 ;
 int FUNC_6 () ;
 TYPE_2__* VAR_3 ;
 TYPE_1__* FUNC_7 (TYPE_2__*) ;
 TYPE_1__* FUNC_8 (int ,TYPE_1__*,int ) ;
 int FUNC_9 (char*,TYPE_2__*) ;
 int FUNC_10 (int ) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_14(Con *VAR_4, direction_t VAR_5) {
    Output *VAR_6 = FUNC_7(VAR_4);
    Output *VAR_7 = FUNC_8(VAR_5, VAR_6, VAR_0);

    if (!VAR_7) {
        FUNC_0("No output in this direction found. Not moving.\n");
        return;
    }

    Con *VAR_8 = ((void*)0);
    FUNC_2(VAR_8, FUNC_10(VAR_7->con), FUNC_12(VAR_1));

    if (!VAR_8) {
        FUNC_0("No workspace on output in this direction found. Not moving.\n");
        return;
    }

    Con *VAR_9 = FUNC_5(VAR_4);
    const bool VAR_10 = (VAR_3 == VAR_4);
    FUNC_3(VAR_4, VAR_8, VAR_5);
    if (VAR_10) {





        VAR_3 = VAR_9;
        FUNC_13(VAR_8);
        FUNC_4(VAR_4);
    }


    FUNC_1(VAR_4->deco_render_params);

    FUNC_9("move", VAR_4);
    FUNC_11(VAR_2);
    FUNC_6();
}

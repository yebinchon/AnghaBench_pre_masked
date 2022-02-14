
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int kill_window_t ;
struct TYPE_8__ {scalar_t__ type; int focus_head; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,TYPE_1__*,...) ;
 TYPE_1__* FUNC_1 (int *) ;
 TYPE_1__* FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int ) ;
 int VAR_3 ;
 int FUNC_4 (TYPE_1__*,int ,int) ;

void FUNC_5(Con *VAR_4, kill_window_t VAR_5) {
    FUNC_3(VAR_4 != ((void*)0));
    FUNC_0("Closing con = %p.\n", VAR_4);


    if (VAR_4->type == VAR_0 || VAR_4->type == VAR_1) {
        FUNC_0("con = %p is of type %d, not closing anything.\n", VAR_4, VAR_4->type);
        return;
    }

    if (VAR_4->type == VAR_2) {
        FUNC_0("con = %p is a workspace, closing all children instead.\n", VAR_4);
        Con *VAR_6, *VAR_7;
        for (VAR_6 = FUNC_1(&(VAR_4->focus_head)); VAR_6;) {
            VAR_7 = FUNC_2(VAR_6, VAR_3);
            FUNC_0("killing child = %p.\n", VAR_6);
            FUNC_4(VAR_6, VAR_5, 0);
            VAR_6 = VAR_7;
        }

        return;
    }

    FUNC_4(VAR_4, VAR_5, 0);
}

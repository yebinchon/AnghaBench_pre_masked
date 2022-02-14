
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ type; scalar_t__ fullscreen_mode; int name; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int) ;

void FUNC_3(Con *VAR_2, int VAR_3) {
    if (VAR_2->type == VAR_1) {
        FUNC_0("You cannot make a workspace fullscreen.\n");
        return;
    }

    FUNC_0("toggling fullscreen for %p / %s\n", VAR_2, VAR_2->name);

    if (VAR_2->fullscreen_mode == VAR_0)
        FUNC_2(VAR_2, VAR_3);
    else
        FUNC_1(VAR_2);
}

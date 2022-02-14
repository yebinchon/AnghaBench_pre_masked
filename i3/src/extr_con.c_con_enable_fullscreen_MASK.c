
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_1__ ;


typedef int fullscreen_mode_t ;
struct TYPE_13__ {scalar_t__ type; int name; int fullscreen_mode; } ;
typedef TYPE_1__ Con ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 int FUNC_7 (TYPE_1__*) ;

void FUNC_8(Con *VAR_5, fullscreen_mode_t VAR_6) {
    if (VAR_5->type == VAR_2) {
        FUNC_0("You cannot make a workspace fullscreen.\n");
        return;
    }

    FUNC_1(VAR_6 == VAR_0 || VAR_6 == VAR_1);

    if (VAR_6 == VAR_0)
        FUNC_0("enabling global fullscreen for %p / %s\n", VAR_5, VAR_5->name);
    else
        FUNC_0("enabling fullscreen for %p / %s\n", VAR_5, VAR_5->name);

    if (VAR_5->fullscreen_mode == VAR_6) {
        FUNC_0("fullscreen already enabled for %p / %s\n", VAR_5, VAR_5->name);
        return;
    }

    Con *VAR_7 = FUNC_5(VAR_5);


    Con *VAR_8 = FUNC_4(VAR_3, VAR_0);
    if (VAR_8 == ((void*)0))
        VAR_8 = FUNC_4(VAR_7, VAR_1);
    if (VAR_8 != ((void*)0))
        FUNC_3(VAR_8);




    Con *VAR_9 = FUNC_5(VAR_4);
    Con *VAR_10 = VAR_4;
    if (VAR_6 == VAR_0 && VAR_9 != VAR_7)
        FUNC_7(VAR_7);
    FUNC_2(VAR_5);
    if (VAR_6 != VAR_0 && VAR_9 != VAR_7)
        FUNC_2(VAR_10);

    FUNC_6(VAR_5, VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {scalar_t__ disable_focus_follows_mouse; } ;
struct TYPE_4__ {int * con; } ;
typedef TYPE_1__ Output ;
typedef int Con ;


 int FUNC_0 (char*) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 TYPE_3__ VAR_0 ;
 int * VAR_1 ;
 TYPE_1__* FUNC_4 (int ,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void FUNC_8(uint32_t VAR_2, uint32_t VAR_3) {
    Output *VAR_4;


    if (VAR_0.disable_focus_follows_mouse)
        return;

    if ((VAR_4 = FUNC_4(VAR_2, VAR_3)) == ((void*)0)) {
        FUNC_0("ERROR: No such screen\n");
        return;
    }

    if (VAR_4->con == ((void*)0)) {
        FUNC_0("ERROR: The screen is not recognized by i3 (no container associated)\n");
        return;
    }


    Con *VAR_5 = VAR_1;
    Con *VAR_6 = FUNC_1(FUNC_5(VAR_4->con));


    FUNC_7(FUNC_3(VAR_6));
    FUNC_2(VAR_6);


    if (VAR_5 != VAR_1)
        FUNC_6();
}

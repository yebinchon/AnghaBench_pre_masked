
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ scratchpad_state; int rect; } ;
typedef int Rect ;
typedef TYPE_1__ Con ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;

bool FUNC_4(Con *VAR_2, Rect VAR_3) {


    if (!FUNC_2(VAR_3)) {
        FUNC_0("No output found at destination coordinates. Not repositioning.\n");
        return 0;
    }

    VAR_2->rect = VAR_3;

    bool VAR_4 = FUNC_1(VAR_2);


    if (VAR_2->scratchpad_state == VAR_1)
        VAR_2->scratchpad_state = VAR_0;


    if (!VAR_4) {
        FUNC_3();
    }
    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* userPointer; int present; } ;
typedef TYPE_1__ _GLFWjoystick ;
struct TYPE_4__ {TYPE_1__* joysticks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 TYPE_2__ VAR_2 ;
 int FUNC_1 (int) ;

void FUNC_2(int VAR_3, void* VAR_4)
{
    _GLFWjoystick* VAR_5;

    FUNC_1(VAR_3 >= VAR_0);
    FUNC_1(VAR_3 <= VAR_1);

    FUNC_0();

    VAR_5 = VAR_2.joysticks + VAR_3;
    if (!VAR_5->present)
        return;

    VAR_5->userPointer = VAR_4;
}

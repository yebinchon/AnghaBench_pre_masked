
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int _GLFWjoystick ;
struct TYPE_3__ {int (* joystick ) (int const,int) ;} ;
struct TYPE_4__ {int joysticks; TYPE_1__ callbacks; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int const,int) ;

void FUNC_1(_GLFWjoystick* VAR_1, int VAR_2)
{
    const int VAR_3 = (int) (VAR_1 - VAR_0.joysticks);

    if (VAR_0.callbacks.joystick)
        VAR_0.callbacks.joystick(VAR_3, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int hats; int buttons; int axes; int name; } ;
typedef TYPE_1__ _GLFWjoystick ;


 int FUNC_0 (int ) ;
 int FUNC_1 (TYPE_1__*,int ,int) ;

void FUNC_2(_GLFWjoystick* VAR_0)
{
    FUNC_0(VAR_0->name);
    FUNC_0(VAR_0->axes);
    FUNC_0(VAR_0->buttons);
    FUNC_0(VAR_0->hats);
    FUNC_1(VAR_0, 0, sizeof(_GLFWjoystick));
}

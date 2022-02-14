
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int buttonCount; char* hats; void** buttons; } ;
typedef TYPE_1__ _GLFWjoystick ;


 void* VAR_0 ;
 void* VAR_1 ;

void FUNC_0(_GLFWjoystick* VAR_2, int VAR_3, char VAR_4)
{
    const int VAR_5 = VAR_2->buttonCount + VAR_3 * 4;

    VAR_2->buttons[VAR_5 + 0] = (VAR_4 & 0x01) ? VAR_0 : VAR_1;
    VAR_2->buttons[VAR_5 + 1] = (VAR_4 & 0x02) ? VAR_0 : VAR_1;
    VAR_2->buttons[VAR_5 + 2] = (VAR_4 & 0x04) ? VAR_0 : VAR_1;
    VAR_2->buttons[VAR_5 + 3] = (VAR_4 & 0x08) ? VAR_0 : VAR_1;

    VAR_2->hats[VAR_3] = VAR_4;
}

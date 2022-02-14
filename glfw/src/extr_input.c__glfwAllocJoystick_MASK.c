
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_4__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int axisCount; int buttonCount; int hatCount; int mapping; int guid; void* hats; void* buttons; void* axes; int name; int present; } ;
typedef TYPE_1__ _GLFWjoystick ;
struct TYPE_6__ {TYPE_1__* joysticks; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__ VAR_2 ;
 int FUNC_0 (char const*) ;
 void* FUNC_1 (int,int) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,char const*,int) ;

_GLFWjoystick* FUNC_4(const char* VAR_3,
                                  const char* VAR_4,
                                  int VAR_5,
                                  int VAR_6,
                                  int VAR_7)
{
    int VAR_8;
    _GLFWjoystick* VAR_9;

    for (VAR_8 = 0; VAR_8 <= VAR_0; VAR_8++)
    {
        if (!VAR_2.joysticks[VAR_8].present)
            break;
    }

    if (VAR_8 > VAR_0)
        return ((void*)0);

    VAR_9 = VAR_2.joysticks + VAR_8;
    VAR_9->present = VAR_1;
    VAR_9->name = FUNC_0(VAR_3);
    VAR_9->axes = FUNC_1(VAR_5, sizeof(float));
    VAR_9->buttons = FUNC_1(VAR_6 + (size_t) VAR_7 * 4, 1);
    VAR_9->hats = FUNC_1(VAR_7, 1);
    VAR_9->axisCount = VAR_5;
    VAR_9->buttonCount = VAR_6;
    VAR_9->hatCount = VAR_7;

    FUNC_3(VAR_9->guid, VAR_4, sizeof(VAR_9->guid) - 1);
    VAR_9->mapping = FUNC_2(VAR_9);

    return VAR_9;
}

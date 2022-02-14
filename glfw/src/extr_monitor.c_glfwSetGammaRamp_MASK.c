
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {int size; } ;
struct TYPE_8__ {TYPE_7__ originalRamp; } ;
typedef TYPE_1__ _GLFWmonitor ;
struct TYPE_9__ {scalar_t__ size; int * blue; int * green; int * red; } ;
typedef int GLFWmonitor ;
typedef TYPE_2__ GLFWgammaramp ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (TYPE_1__*,TYPE_7__*) ;
 int FUNC_3 (TYPE_1__*,TYPE_2__ const*) ;
 int FUNC_4 (int) ;

void FUNC_5(GLFWmonitor* VAR_1, const GLFWgammaramp* VAR_2)
{
    _GLFWmonitor* VAR_3 = (_GLFWmonitor*) VAR_1;
    FUNC_4(VAR_3 != ((void*)0));
    FUNC_4(VAR_2 != ((void*)0));
    FUNC_4(VAR_2->size > 0);
    FUNC_4(VAR_2->red != ((void*)0));
    FUNC_4(VAR_2->green != ((void*)0));
    FUNC_4(VAR_2->blue != ((void*)0));

    if (VAR_2->size <= 0)
    {
        FUNC_1(VAR_0,
                        "Invalid gamma ramp size %i",
                        VAR_2->size);
        return;
    }

    FUNC_0();

    if (!VAR_3->originalRamp.size)
    {
        if (!FUNC_2(VAR_3, &VAR_3->originalRamp))
            return;
    }

    FUNC_3(VAR_3, VAR_2);
}

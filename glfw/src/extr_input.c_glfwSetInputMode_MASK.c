
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int cursorMode; int stickyKeys; scalar_t__* keys; int stickyMouseButtons; scalar_t__* mouseButtons; int rawMouseMotion; void* lockKeyMods; int virtualCursorPosY; int virtualCursorPosX; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int GLFWwindow ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 void* VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 void* VAR_14 ;
 int FUNC_0 () ;
 scalar_t__ VAR_15 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (TYPE_1__*,int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (TYPE_1__*,int) ;
 int FUNC_5 (TYPE_1__*,int) ;
 int FUNC_6 (int ) ;

void FUNC_7(GLFWwindow* VAR_16, int VAR_17, int VAR_18)
{
    _GLFWwindow* VAR_19 = (_GLFWwindow*) VAR_16;
    FUNC_6(VAR_19 != ((void*)0));

    FUNC_0();

    if (VAR_17 == VAR_0)
    {
        if (VAR_18 != VAR_3 &&
            VAR_18 != VAR_2 &&
            VAR_18 != VAR_1)
        {
            FUNC_1(VAR_5,
                            "Invalid cursor mode 0x%08X",
                            VAR_18);
            return;
        }

        if (VAR_19->cursorMode == VAR_18)
            return;

        VAR_19->cursorMode = VAR_18;

        FUNC_2(VAR_19,
                                  &VAR_19->virtualCursorPosX,
                                  &VAR_19->virtualCursorPosY);
        FUNC_4(VAR_19, VAR_18);
    }
    else if (VAR_17 == VAR_12)
    {
        VAR_18 = VAR_18 ? VAR_14 : VAR_4;
        if (VAR_19->stickyKeys == VAR_18)
            return;

        if (!VAR_18)
        {
            int VAR_20;


            for (VAR_20 = 0; VAR_20 <= VAR_6; VAR_20++)
            {
                if (VAR_19->keys[VAR_20] == VAR_15)
                    VAR_19->keys[VAR_20] = VAR_11;
            }
        }

        VAR_19->stickyKeys = VAR_18;
    }
    else if (VAR_17 == VAR_13)
    {
        VAR_18 = VAR_18 ? VAR_14 : VAR_4;
        if (VAR_19->stickyMouseButtons == VAR_18)
            return;

        if (!VAR_18)
        {
            int VAR_21;


            for (VAR_21 = 0; VAR_21 <= VAR_8; VAR_21++)
            {
                if (VAR_19->mouseButtons[VAR_21] == VAR_15)
                    VAR_19->mouseButtons[VAR_21] = VAR_11;
            }
        }

        VAR_19->stickyMouseButtons = VAR_18;
    }
    else if (VAR_17 == VAR_7)
    {
        VAR_19->lockKeyMods = VAR_18 ? VAR_14 : VAR_4;
    }
    else if (VAR_17 == VAR_10)
    {
        if (!FUNC_3())
        {
            FUNC_1(VAR_9,
                            "Raw mouse motion is not supported on this system");
            return;
        }

        VAR_18 = VAR_18 ? VAR_14 : VAR_4;
        if (VAR_19->rawMouseMotion == VAR_18)
            return;

        VAR_19->rawMouseMotion = VAR_18;
        FUNC_5(VAR_19, VAR_18);
    }
    else
        FUNC_1(VAR_5, "Invalid input mode 0x%08X", VAR_17);
}

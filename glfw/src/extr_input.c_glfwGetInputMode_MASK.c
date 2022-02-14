
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int cursorMode; int stickyKeys; int stickyMouseButtons; int lockKeyMods; int rawMouseMotion; } ;
typedef TYPE_1__ _GLFWwindow ;
typedef int GLFWwindow ;



 int VAR_0 ;




 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int ) ;

int FUNC_3(GLFWwindow* VAR_1, int VAR_2)
{
    _GLFWwindow* VAR_3 = (_GLFWwindow*) VAR_1;
    FUNC_2(VAR_3 != ((void*)0));

    FUNC_0(0);

    switch (VAR_2)
    {
        case 132:
            return VAR_3->cursorMode;
        case 129:
            return VAR_3->stickyKeys;
        case 128:
            return VAR_3->stickyMouseButtons;
        case 131:
            return VAR_3->lockKeyMods;
        case 130:
            return VAR_3->rawMouseMotion;
    }

    FUNC_1(VAR_0, "Invalid input mode 0x%08X", VAR_2);
    return 0;
}

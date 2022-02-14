
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_25__ TYPE_6__ ;
typedef struct TYPE_24__ TYPE_5__ ;
typedef struct TYPE_23__ TYPE_4__ ;
typedef struct TYPE_22__ TYPE_3__ ;
typedef struct TYPE_21__ TYPE_2__ ;
typedef struct TYPE_20__ TYPE_1__ ;
typedef struct TYPE_19__ TYPE_18__ ;


struct TYPE_22__ {int width; int height; char const* title; scalar_t__ focused; scalar_t__ visible; scalar_t__ centerCursor; int focusOnShow; int floating; int autoIconify; int decorated; int resizable; } ;
typedef TYPE_3__ _GLFWwndconfig ;
struct TYPE_20__ {int width; int height; int refreshRate; int blueBits; int greenBits; int redBits; } ;
struct TYPE_23__ {int * monitor; void* denom; void* numer; void* maxheight; void* maxwidth; void* minheight; void* minwidth; int cursorMode; int focusOnShow; int floating; int autoIconify; int decorated; int resizable; TYPE_1__ videoMode; struct TYPE_23__* next; } ;
typedef TYPE_4__ _GLFWwindow ;
typedef int _GLFWmonitor ;
struct TYPE_24__ {int blueBits; int greenBits; int redBits; } ;
typedef TYPE_5__ _GLFWfbconfig ;
struct TYPE_25__ {scalar_t__ client; TYPE_4__* share; } ;
typedef TYPE_6__ _GLFWctxconfig ;
struct TYPE_21__ {int refreshRate; TYPE_3__ window; TYPE_6__ context; TYPE_5__ framebuffer; } ;
struct TYPE_19__ {TYPE_2__ hints; TYPE_4__* windowListHead; } ;
typedef int GLFWwindow ;
typedef int GLFWmonitor ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_18__ VAR_4 ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,char*,int,int) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (TYPE_4__*,TYPE_3__*,TYPE_6__*,TYPE_5__*) ;
 int FUNC_5 (TYPE_4__*) ;
 int FUNC_6 (TYPE_4__*) ;
 int FUNC_7 (TYPE_4__*,TYPE_6__*) ;
 int FUNC_8 (int) ;
 TYPE_4__* FUNC_9 (int,int) ;
 int FUNC_10 (int *) ;

GLFWwindow* FUNC_11(int VAR_5, int VAR_6,
                                     const char* VAR_7,
                                     GLFWmonitor* VAR_8,
                                     GLFWwindow* VAR_9)
{
    _GLFWfbconfig VAR_10;
    _GLFWctxconfig VAR_11;
    _GLFWwndconfig VAR_12;
    _GLFWwindow* VAR_13;

    FUNC_8(VAR_7 != ((void*)0));
    FUNC_8(VAR_5 >= 0);
    FUNC_8(VAR_6 >= 0);

    FUNC_0(((void*)0));

    if (VAR_5 <= 0 || VAR_6 <= 0)
    {
        FUNC_2(VAR_2,
                        "Invalid window size %ix%i",
                        VAR_5, VAR_6);

        return ((void*)0);
    }

    VAR_10 = VAR_4.hints.framebuffer;
    VAR_11 = VAR_4.hints.context;
    VAR_12 = VAR_4.hints.window;

    VAR_12.width = VAR_5;
    VAR_12.height = VAR_6;
    VAR_12.title = VAR_7;
    VAR_11.share = (_GLFWwindow*) VAR_9;

    if (!FUNC_3(&VAR_11))
        return ((void*)0);

    VAR_13 = FUNC_9(1, sizeof(_GLFWwindow));
    VAR_13->next = VAR_4.windowListHead;
    VAR_4.windowListHead = VAR_13;

    VAR_13->videoMode.width = VAR_5;
    VAR_13->videoMode.height = VAR_6;
    VAR_13->videoMode.redBits = VAR_10.redBits;
    VAR_13->videoMode.greenBits = VAR_10.greenBits;
    VAR_13->videoMode.blueBits = VAR_10.blueBits;
    VAR_13->videoMode.refreshRate = VAR_4.hints.refreshRate;

    VAR_13->monitor = (_GLFWmonitor*) VAR_8;
    VAR_13->resizable = VAR_12.resizable;
    VAR_13->decorated = VAR_12.decorated;
    VAR_13->autoIconify = VAR_12.autoIconify;
    VAR_13->floating = VAR_12.floating;
    VAR_13->focusOnShow = VAR_12.focusOnShow;
    VAR_13->cursorMode = VAR_0;

    VAR_13->minwidth = VAR_1;
    VAR_13->minheight = VAR_1;
    VAR_13->maxwidth = VAR_1;
    VAR_13->maxheight = VAR_1;
    VAR_13->numer = VAR_1;
    VAR_13->denom = VAR_1;


    if (!FUNC_4(VAR_13, &VAR_12, &VAR_11, &VAR_10))
    {
        FUNC_10((GLFWwindow*) VAR_13);
        return ((void*)0);
    }

    if (VAR_11.client != VAR_3)
    {
        if (!FUNC_7(VAR_13, &VAR_11))
        {
            FUNC_10((GLFWwindow*) VAR_13);
            return ((void*)0);
        }
    }

    if (VAR_13->monitor)
    {
        if (VAR_12.centerCursor)
            FUNC_1(VAR_13);
    }
    else
    {
        if (VAR_12.visible)
        {
            FUNC_6(VAR_13);
            if (VAR_12.focused)
                FUNC_5(VAR_13);
        }
    }

    return (GLFWwindow*) VAR_13;
}

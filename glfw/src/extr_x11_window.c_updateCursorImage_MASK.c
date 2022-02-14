
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int handle; } ;
struct TYPE_12__ {scalar_t__ cursorMode; TYPE_1__ x11; TYPE_3__* cursor; } ;
typedef TYPE_5__ _GLFWwindow ;
struct TYPE_11__ {int hiddenCursorHandle; int display; } ;
struct TYPE_13__ {TYPE_4__ x11; } ;
struct TYPE_9__ {int handle; } ;
struct TYPE_10__ {TYPE_2__ x11; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;
 TYPE_7__ VAR_1 ;

__attribute__((used)) static void FUNC_2(_GLFWwindow* VAR_2)
{
    if (VAR_2->cursorMode == VAR_0)
    {
        if (VAR_2->cursor)
        {
            FUNC_0(VAR_1.x11.display, VAR_2->x11.handle,
                          VAR_2->cursor->x11.handle);
        }
        else
            FUNC_1(VAR_1.x11.display, VAR_2->x11.handle);
    }
    else
    {
        FUNC_0(VAR_1.x11.display, VAR_2->x11.handle,
                      VAR_1.x11.hiddenCursorHandle);
    }
}

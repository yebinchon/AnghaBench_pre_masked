
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {scalar_t__ cursorMode; TYPE_2__* cursor; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_5__ {int * handle; } ;
struct TYPE_6__ {TYPE_1__ win32; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static void FUNC_2(_GLFWwindow* VAR_2)
{
    if (VAR_2->cursorMode == VAR_0)
    {
        if (VAR_2->cursor)
            FUNC_1(VAR_2->cursor->win32.handle);
        else
            FUNC_1(FUNC_0(((void*)0), VAR_1));
    }
    else
        FUNC_1(((void*)0));
}

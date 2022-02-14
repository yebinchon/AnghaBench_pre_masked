
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ rawMouseMotion; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_8__ {int restoreCursorPosY; int restoreCursorPosX; int * disabledCursorWindow; } ;
struct TYPE_10__ {TYPE_1__ win32; } ;


 TYPE_7__ VAR_0 ;
 int FUNC_0 (TYPE_2__*,int ,int ) ;
 int FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(_GLFWwindow* VAR_1)
{
    if (VAR_1->rawMouseMotion)
        FUNC_1(VAR_1);

    VAR_0.win32.disabledCursorWindow = ((void*)0);
    FUNC_2(((void*)0));
    FUNC_0(VAR_1,
                              VAR_0.win32.restoreCursorPosX,
                              VAR_0.win32.restoreCursorPosY);
    FUNC_3(VAR_1);
}

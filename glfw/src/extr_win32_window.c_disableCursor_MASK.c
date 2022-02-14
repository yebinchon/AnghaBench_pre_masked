
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_9__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {scalar_t__ rawMouseMotion; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_10__ {int restoreCursorPosY; int restoreCursorPosX; TYPE_2__* disabledCursorWindow; } ;
struct TYPE_12__ {TYPE_1__ win32; } ;


 TYPE_9__ VAR_0 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*,int *,int *) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_5(_GLFWwindow* VAR_1)
{
    VAR_0.win32.disabledCursorWindow = VAR_1;
    FUNC_1(VAR_1,
                              &VAR_0.win32.restoreCursorPosX,
                              &VAR_0.win32.restoreCursorPosY);
    FUNC_4(VAR_1);
    FUNC_0(VAR_1);
    FUNC_3(VAR_1);

    if (VAR_1->rawMouseMotion)
        FUNC_2(VAR_1);
}

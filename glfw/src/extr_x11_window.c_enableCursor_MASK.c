
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_7__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {scalar_t__ rawMouseMotion; } ;
typedef TYPE_2__ _GLFWwindow ;
struct TYPE_8__ {int restoreCursorPosY; int restoreCursorPosX; int display; int * disabledCursorWindow; } ;
struct TYPE_10__ {TYPE_1__ x11; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 TYPE_7__ VAR_1 ;
 int FUNC_1 (TYPE_2__*,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(_GLFWwindow* VAR_2)
{
    if (VAR_2->rawMouseMotion)
        FUNC_2(VAR_2);

    VAR_1.x11.disabledCursorWindow = ((void*)0);
    FUNC_0(VAR_1.x11.display, VAR_0);
    FUNC_1(VAR_2,
                              VAR_1.x11.restoreCursorPosX,
                              VAR_1.x11.restoreCursorPosY);
    FUNC_3(VAR_2);
}

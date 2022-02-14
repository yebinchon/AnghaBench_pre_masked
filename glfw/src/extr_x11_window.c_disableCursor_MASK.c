
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_9__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_10__ {int handle; } ;
struct TYPE_12__ {TYPE_1__ x11; scalar_t__ rawMouseMotion; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_11__ {int hiddenCursorHandle; int display; int restoreCursorPosY; int restoreCursorPosX; TYPE_3__* disabledCursorWindow; } ;
struct TYPE_13__ {TYPE_2__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int ,int,int ,int ,int ,int ,int ) ;
 TYPE_9__ VAR_6 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*,int *,int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int FUNC_4 (TYPE_3__*) ;

__attribute__((used)) static void FUNC_5(_GLFWwindow* VAR_7)
{
    if (VAR_7->rawMouseMotion)
        FUNC_3(VAR_7);

    VAR_6.x11.disabledCursorWindow = VAR_7;
    FUNC_2(VAR_7,
                              &VAR_6.x11.restoreCursorPosX,
                              &VAR_6.x11.restoreCursorPosY);
    FUNC_4(VAR_7);
    FUNC_1(VAR_7);
    FUNC_0(VAR_6.x11.display, VAR_7->x11.handle, VAR_5,
                 VAR_0 | VAR_1 | VAR_4,
                 VAR_3, VAR_3,
                 VAR_7->x11.handle,
                 VAR_6.x11.hiddenCursorHandle,
                 VAR_2);
}

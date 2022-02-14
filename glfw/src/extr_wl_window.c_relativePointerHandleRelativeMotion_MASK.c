
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int wl_fixed_t ;
typedef int uint32_t ;
struct zwp_relative_pointer_v1 {int dummy; } ;
struct TYPE_3__ {double virtualCursorPosX; double virtualCursorPosY; scalar_t__ cursorMode; scalar_t__ rawMouseMotion; } ;
typedef TYPE_1__ _GLFWwindow ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*,double,double) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(void* VAR_1,
                                                struct zwp_relative_pointer_v1* VAR_2,
                                                uint32_t VAR_3,
                                                uint32_t VAR_4,
                                                wl_fixed_t VAR_5,
                                                wl_fixed_t VAR_6,
                                                wl_fixed_t VAR_7,
                                                wl_fixed_t VAR_8)
{
    _GLFWwindow* VAR_9 = VAR_1;
    double VAR_10 = VAR_9->virtualCursorPosX;
    double VAR_11 = VAR_9->virtualCursorPosY;

    if (VAR_9->cursorMode != VAR_0)
        return;

    if (VAR_9->rawMouseMotion)
    {
        VAR_10 += FUNC_1(VAR_7);
        VAR_11 += FUNC_1(VAR_8);
    }
    else
    {
        VAR_10 += FUNC_1(VAR_5);
        VAR_11 += FUNC_1(VAR_6);
    }

    FUNC_0(VAR_9, VAR_10, VAR_11);
}

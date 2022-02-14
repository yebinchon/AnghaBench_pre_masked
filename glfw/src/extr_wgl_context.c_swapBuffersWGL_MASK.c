
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int dc; int interval; } ;
struct TYPE_6__ {TYPE_1__ wgl; } ;
struct TYPE_7__ {TYPE_2__ context; int monitor; } ;
typedef TYPE_3__ _GLFWwindow ;
typedef scalar_t__ BOOL ;


 int FUNC_0 () ;
 int FUNC_1 (scalar_t__*) ;
 scalar_t__ FUNC_2 () ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static void FUNC_7(_GLFWwindow* VAR_0)
{
    if (!VAR_0->monitor)
    {
        if (FUNC_3())
        {

            BOOL VAR_1 = FUNC_2();


            if (VAR_1 ||
                (FUNC_4(FUNC_1(&VAR_1)) && VAR_1))
            {
                int VAR_2 = FUNC_6(VAR_0->context.wgl.interval);
                while (VAR_2--)
                    FUNC_0();
            }
        }
    }

    FUNC_5(VAR_0->context.wgl.dc);
}

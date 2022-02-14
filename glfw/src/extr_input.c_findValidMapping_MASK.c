
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int name; int guid; scalar_t__ axes; scalar_t__ buttons; } ;
typedef TYPE_1__ _GLFWmapping ;
struct TYPE_8__ {int guid; } ;
typedef TYPE_2__ _GLFWjoystick ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int ,int ) ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__,TYPE_2__ const*) ;

__attribute__((used)) static _GLFWmapping* FUNC_3(const _GLFWjoystick* VAR_3)
{
    _GLFWmapping* VAR_4 = FUNC_1(VAR_3->guid);
    if (VAR_4)
    {
        int VAR_5;

        for (VAR_5 = 0; VAR_5 <= VAR_1; VAR_5++)
        {
            if (!FUNC_2(VAR_4->buttons + VAR_5, VAR_3))
            {
                FUNC_0(VAR_2,
                                "Invalid button in gamepad mapping %s (%s)",
                                VAR_4->guid,
                                VAR_4->name);
                return ((void*)0);
            }
        }

        for (VAR_5 = 0; VAR_5 <= VAR_0; VAR_5++)
        {
            if (!FUNC_2(VAR_4->axes + VAR_5, VAR_3))
            {
                FUNC_0(VAR_2,
                                "Invalid axis in gamepad mapping %s (%s)",
                                VAR_4->guid,
                                VAR_4->name);
                return ((void*)0);
            }
        }
    }

    return VAR_4;
}

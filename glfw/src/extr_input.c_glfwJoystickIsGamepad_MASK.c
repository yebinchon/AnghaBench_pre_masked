
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * mapping; int present; } ;
typedef TYPE_1__ _GLFWjoystick ;
struct TYPE_5__ {TYPE_1__* joysticks; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 TYPE_3__ VAR_5 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (int) ;

int FUNC_4(int VAR_6)
{
    _GLFWjoystick* VAR_7;

    FUNC_3(VAR_6 >= VAR_2);
    FUNC_3(VAR_6 <= VAR_3);

    FUNC_0(VAR_0);

    if (VAR_6 < 0 || VAR_6 > VAR_3)
    {
        FUNC_1(VAR_1, "Invalid joystick ID %i", VAR_6);
        return VAR_0;
    }

    VAR_7 = VAR_5.joysticks + VAR_6;
    if (!VAR_7->present)
        return VAR_0;

    if (!FUNC_2(VAR_7, VAR_4))
        return VAR_0;

    return VAR_7->mapping != ((void*)0);
}

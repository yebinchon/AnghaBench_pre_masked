
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* mapping; int present; } ;
typedef TYPE_2__ _GLFWjoystick ;
struct TYPE_7__ {TYPE_2__* joysticks; } ;
struct TYPE_5__ {char const* name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 TYPE_4__ VAR_4 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (TYPE_2__*,int ) ;
 int FUNC_3 (int) ;

const char* FUNC_4(int VAR_5)
{
    _GLFWjoystick* VAR_6;

    FUNC_3(VAR_5 >= VAR_1);
    FUNC_3(VAR_5 <= VAR_2);

    FUNC_0(((void*)0));

    if (VAR_5 < 0 || VAR_5 > VAR_2)
    {
        FUNC_1(VAR_0, "Invalid joystick ID %i", VAR_5);
        return ((void*)0);
    }

    VAR_6 = VAR_4.joysticks + VAR_5;
    if (!VAR_6->present)
        return ((void*)0);

    if (!FUNC_2(VAR_6, VAR_3))
        return ((void*)0);

    if (!VAR_6->mapping)
        return ((void*)0);

    return VAR_6->mapping->name;
}

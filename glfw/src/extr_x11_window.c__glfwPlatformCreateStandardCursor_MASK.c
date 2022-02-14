
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int handle; } ;
struct TYPE_8__ {TYPE_2__ x11; } ;
typedef TYPE_3__ _GLFWcursor ;
struct TYPE_6__ {int display; } ;
struct TYPE_9__ {TYPE_1__ x11; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int ,int) ;
 TYPE_5__ VAR_15 ;
 int FUNC_1 (int ,char*) ;

int FUNC_2(_GLFWcursor* VAR_16, int VAR_17)
{
    int VAR_18 = 0;

    if (VAR_17 == VAR_0)
        VAR_18 = VAR_11;
    else if (VAR_17 == VAR_5)
        VAR_18 = VAR_14;
    else if (VAR_17 == VAR_1)
        VAR_18 = VAR_9;
    else if (VAR_17 == VAR_3)
        VAR_18 = VAR_10;
    else if (VAR_17 == VAR_4)
        VAR_18 = VAR_12;
    else if (VAR_17 == VAR_8)
        VAR_18 = VAR_13;
    else
        return VAR_2;

    VAR_16->x11.handle = FUNC_0(VAR_15.x11.display, VAR_18);
    if (!VAR_16->x11.handle)
    {
        FUNC_1(VAR_6,
                        "X11: Failed to create standard cursor");
        return VAR_2;
    }

    return VAR_7;
}

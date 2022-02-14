
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_7__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int handle; } ;
struct TYPE_10__ {TYPE_1__ x11; } ;
typedef TYPE_3__ _GLFWwindow ;
struct TYPE_9__ {scalar_t__ NET_WM_STATE_ABOVE; int display; int NET_WM_STATE; } ;
struct TYPE_11__ {TYPE_2__ x11; } ;
typedef scalar_t__ GLFWbool ;
typedef scalar_t__ Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int,int ,unsigned char*,unsigned long) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 TYPE_7__ VAR_5 ;
 unsigned long FUNC_3 (int ,int ,int ,unsigned char**) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*,int ,scalar_t__ const,scalar_t__,int ,int,int ) ;

void FUNC_6(_GLFWwindow* VAR_6, GLFWbool VAR_7)
{
    if (!VAR_5.x11.NET_WM_STATE || !VAR_5.x11.NET_WM_STATE_ABOVE)
        return;

    if (FUNC_4(VAR_6))
    {
        const Atom VAR_8 = VAR_7 ? VAR_3 : VAR_4;
        FUNC_5(VAR_6,
                      VAR_5.x11.NET_WM_STATE,
                      VAR_8,
                      VAR_5.x11.NET_WM_STATE_ABOVE,
                      0, 1, 0);
    }
    else
    {
        Atom* VAR_9;
        unsigned long VAR_10, VAR_11;

        VAR_11 = FUNC_3(VAR_6->x11.handle,
                                          VAR_5.x11.NET_WM_STATE,
                                          VAR_2,
                                          (unsigned char**) &VAR_9);
        if (!VAR_9)
            return;

        if (VAR_7)
        {
            for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
            {
                if (VAR_9[VAR_10] == VAR_5.x11.NET_WM_STATE_ABOVE)
                    break;
            }

            if (VAR_10 == VAR_11)
            {
                FUNC_0(VAR_5.x11.display, VAR_6->x11.handle,
                                VAR_5.x11.NET_WM_STATE, VAR_2, 32,
                                VAR_0,
                                (unsigned char*) &VAR_5.x11.NET_WM_STATE_ABOVE,
                                1);
            }
        }
        else
        {
            for (VAR_10 = 0; VAR_10 < VAR_11; VAR_10++)
            {
                if (VAR_9[VAR_10] == VAR_5.x11.NET_WM_STATE_ABOVE)
                {
                    VAR_9[VAR_10] = VAR_9[VAR_11 - 1];
                    VAR_11--;
                }
            }

            FUNC_0(VAR_5.x11.display, VAR_6->x11.handle,
                            VAR_5.x11.NET_WM_STATE, VAR_2, 32,
                            VAR_1, (unsigned char*) &VAR_9, VAR_11);
        }

        FUNC_2(VAR_9);
    }

    FUNC_1(VAR_5.x11.display);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_13__ {int crtc; } ;
struct TYPE_15__ {TYPE_2__ x11; } ;
typedef TYPE_4__ _GLFWmonitor ;
typedef int XRRScreenResources ;
struct TYPE_16__ {int height; int width; } ;
typedef TYPE_5__ XRRModeInfo ;
struct TYPE_17__ {int x; int y; scalar_t__ rotation; int mode; } ;
typedef TYPE_6__ XRRCrtcInfo ;
struct TYPE_12__ {int monitorBroken; scalar_t__ available; } ;
struct TYPE_14__ {scalar_t__ NET_CURRENT_DESKTOP; int root; scalar_t__ NET_WORKAREA; int screen; int display; TYPE_1__ randr; } ;
struct TYPE_18__ {TYPE_3__ x11; } ;
typedef unsigned long const Atom ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (unsigned long const*) ;
 int FUNC_3 (TYPE_6__*) ;
 int FUNC_4 (int *) ;
 TYPE_6__* FUNC_5 (int ,int *,int ) ;
 int * FUNC_6 (int ,int ) ;
 TYPE_9__ VAR_3 ;
 unsigned long FUNC_7 (int ,scalar_t__,int ,unsigned char**) ;
 TYPE_5__* FUNC_8 (int *,int ) ;

void FUNC_9(_GLFWmonitor* VAR_4, int* VAR_5, int* VAR_6, int* VAR_7, int* VAR_8)
{
    int VAR_9 = 0, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0;

    if (VAR_3.x11.randr.available && !VAR_3.x11.randr.monitorBroken)
    {
        XRRScreenResources* VAR_13 =
            FUNC_6(VAR_3.x11.display, VAR_3.x11.root);
        XRRCrtcInfo* VAR_14 = FUNC_5(VAR_3.x11.display, VAR_13, VAR_4->x11.crtc);

        VAR_9 = VAR_14->x;
        VAR_10 = VAR_14->y;

        const XRRModeInfo* VAR_15 = FUNC_8(VAR_13, VAR_14->mode);

        if (VAR_14->rotation == VAR_1 || VAR_14->rotation == VAR_0)
        {
            VAR_11 = VAR_15->height;
            VAR_12 = VAR_15->width;
        }
        else
        {
            VAR_11 = VAR_15->width;
            VAR_12 = VAR_15->height;
        }

        FUNC_3(VAR_14);
        FUNC_4(VAR_13);
    }
    else
    {
        VAR_11 = FUNC_1(VAR_3.x11.display, VAR_3.x11.screen);
        VAR_12 = FUNC_0(VAR_3.x11.display, VAR_3.x11.screen);
    }

    if (VAR_3.x11.NET_WORKAREA && VAR_3.x11.NET_CURRENT_DESKTOP)
    {
        Atom* VAR_16 = ((void*)0);
        Atom* VAR_17 = ((void*)0);
        const unsigned long VAR_18 =
            FUNC_7(VAR_3.x11.root,
                                      VAR_3.x11.NET_WORKAREA,
                                      VAR_2,
                                      (unsigned char**) &VAR_16);

        if (FUNC_7(VAR_3.x11.root,
                                      VAR_3.x11.NET_CURRENT_DESKTOP,
                                      VAR_2,
                                      (unsigned char**) &VAR_17) > 0)
        {
            if (VAR_18 >= 4 && *VAR_17 < VAR_18 / 4)
            {
                const int VAR_19 = VAR_16[*VAR_17 * 4 + 0];
                const int VAR_20 = VAR_16[*VAR_17 * 4 + 1];
                const int VAR_21 = VAR_16[*VAR_17 * 4 + 2];
                const int VAR_22 = VAR_16[*VAR_17 * 4 + 3];

                if (VAR_9 < VAR_19)
                {
                    VAR_11 -= VAR_19 - VAR_9;
                    VAR_9 = VAR_19;
                }

                if (VAR_10 < VAR_20)
                {
                    VAR_12 -= VAR_20 - VAR_10;
                    VAR_10 = VAR_20;
                }

                if (VAR_9 + VAR_11 > VAR_19 + VAR_21)
                    VAR_11 = VAR_19 - VAR_9 + VAR_21;
                if (VAR_10 + VAR_12 > VAR_20 + VAR_22)
                    VAR_12 = VAR_20 - VAR_10 + VAR_22;
            }
        }

        if (VAR_16)
            FUNC_2(VAR_16);
        if (VAR_17)
            FUNC_2(VAR_17);
    }

    if (VAR_5)
        *VAR_5 = VAR_9;
    if (VAR_6)
        *VAR_6 = VAR_10;
    if (VAR_7)
        *VAR_7 = VAR_11;
    if (VAR_8)
        *VAR_8 = VAR_12;
}

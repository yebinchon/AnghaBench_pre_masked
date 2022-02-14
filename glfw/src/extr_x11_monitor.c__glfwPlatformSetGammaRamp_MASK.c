
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_7__ ;
typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_10__ ;


struct TYPE_16__ {int crtc; } ;
struct TYPE_19__ {TYPE_2__ x11; } ;
typedef TYPE_5__ _GLFWmonitor ;
struct TYPE_20__ {int blue; int green; int red; } ;
typedef TYPE_6__ XRRCrtcGamma ;
struct TYPE_21__ {int size; scalar_t__ blue; scalar_t__ green; scalar_t__ red; } ;
struct TYPE_17__ {scalar_t__ available; } ;
struct TYPE_15__ {int gammaBroken; scalar_t__ available; } ;
struct TYPE_18__ {int screen; int display; TYPE_3__ vidmode; TYPE_1__ randr; } ;
struct TYPE_14__ {TYPE_4__ x11; } ;
typedef TYPE_7__ GLFWgammaramp ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int,unsigned short*,unsigned short*,unsigned short*) ;
 TYPE_6__* FUNC_1 (int) ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ,TYPE_6__*) ;
 TYPE_10__ VAR_1 ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,scalar_t__,int) ;

void FUNC_7(_GLFWmonitor* VAR_2, const GLFWgammaramp* VAR_3)
{
    if (VAR_1.x11.randr.available && !VAR_1.x11.randr.gammaBroken)
    {
        if (FUNC_3(VAR_1.x11.display, VAR_2->x11.crtc) != VAR_3->size)
        {
            FUNC_5(VAR_0,
                            "X11: Gamma ramp size must match current ramp size");
            return;
        }

        XRRCrtcGamma* VAR_4 = FUNC_1(VAR_3->size);

        FUNC_6(VAR_4->red, VAR_3->red, VAR_3->size * sizeof(unsigned short));
        FUNC_6(VAR_4->green, VAR_3->green, VAR_3->size * sizeof(unsigned short));
        FUNC_6(VAR_4->blue, VAR_3->blue, VAR_3->size * sizeof(unsigned short));

        FUNC_4(VAR_1.x11.display, VAR_2->x11.crtc, VAR_4);
        FUNC_2(VAR_4);
    }
    else if (VAR_1.x11.vidmode.available)
    {
        FUNC_0(VAR_1.x11.display,
                                VAR_1.x11.screen,
                                VAR_3->size,
                                (unsigned short*) VAR_3->red,
                                (unsigned short*) VAR_3->green,
                                (unsigned short*) VAR_3->blue);
    }
    else
    {
        FUNC_5(VAR_0,
                        "X11: Gamma ramp access not supported by server");
    }
}

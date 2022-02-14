
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
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_16__ {int crtc; } ;
struct TYPE_19__ {TYPE_2__ x11; } ;
typedef TYPE_5__ _GLFWmonitor ;
struct TYPE_20__ {int blue; int green; int red; } ;
typedef TYPE_6__ XRRCrtcGamma ;
struct TYPE_21__ {int blue; int green; int red; int size; } ;
struct TYPE_17__ {scalar_t__ available; } ;
struct TYPE_15__ {int gammaBroken; scalar_t__ available; } ;
struct TYPE_18__ {int screen; int display; TYPE_3__ vidmode; TYPE_1__ randr; } ;
struct TYPE_14__ {TYPE_4__ x11; } ;
typedef TYPE_7__ GLFWgammaramp ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ,int ,int ,int ) ;
 int FUNC_1 (int ,int ,int*) ;
 int FUNC_2 (TYPE_6__*) ;
 TYPE_6__* FUNC_3 (int ,int ) ;
 size_t FUNC_4 (int ,int ) ;
 TYPE_11__ VAR_3 ;
 int FUNC_5 (TYPE_7__*,size_t const) ;
 int FUNC_6 (int ,char*) ;
 int FUNC_7 (int ,int ,size_t const) ;

GLFWbool FUNC_8(_GLFWmonitor* VAR_4, GLFWgammaramp* VAR_5)
{
    if (VAR_3.x11.randr.available && !VAR_3.x11.randr.gammaBroken)
    {
        const size_t VAR_6 = FUNC_4(VAR_3.x11.display,
                                                VAR_4->x11.crtc);
        XRRCrtcGamma* VAR_7 = FUNC_3(VAR_3.x11.display,
                                              VAR_4->x11.crtc);

        FUNC_5(VAR_5, VAR_6);

        FUNC_7(VAR_5->red, VAR_7->red, VAR_6 * sizeof(unsigned short));
        FUNC_7(VAR_5->green, VAR_7->green, VAR_6 * sizeof(unsigned short));
        FUNC_7(VAR_5->blue, VAR_7->blue, VAR_6 * sizeof(unsigned short));

        FUNC_2(VAR_7);
        return VAR_2;
    }
    else if (VAR_3.x11.vidmode.available)
    {
        int VAR_8;
        FUNC_1(VAR_3.x11.display, VAR_3.x11.screen, &VAR_8);

        FUNC_5(VAR_5, VAR_8);

        FUNC_0(VAR_3.x11.display,
                                VAR_3.x11.screen,
                                VAR_5->size, VAR_5->red, VAR_5->green, VAR_5->blue);
        return VAR_2;
    }
    else
    {
        FUNC_6(VAR_1,
                        "X11: Gamma ramp access not supported by server");
        return VAR_0;
    }
}

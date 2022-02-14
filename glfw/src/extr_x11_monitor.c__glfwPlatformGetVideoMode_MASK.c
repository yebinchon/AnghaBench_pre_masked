
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_6__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;
typedef struct TYPE_14__ TYPE_11__ ;


struct TYPE_16__ {int crtc; } ;
struct TYPE_18__ {TYPE_2__ x11; } ;
typedef TYPE_4__ _GLFWmonitor ;
typedef int XRRScreenResources ;
struct TYPE_19__ {int mode; } ;
typedef TYPE_5__ XRRCrtcInfo ;
struct TYPE_20__ {int blueBits; int greenBits; int redBits; scalar_t__ refreshRate; int height; int width; } ;
struct TYPE_15__ {int monitorBroken; scalar_t__ available; } ;
struct TYPE_17__ {int screen; int display; int root; TYPE_1__ randr; } ;
struct TYPE_14__ {TYPE_3__ x11; } ;
typedef TYPE_6__ GLFWvidmode ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *) ;
 TYPE_5__* FUNC_5 (int ,int *,int ) ;
 int * FUNC_6 (int ,int ) ;
 TYPE_11__ VAR_0 ;
 int FUNC_7 (int ,int *,int *,int *) ;
 int FUNC_8 (int *,int ) ;
 TYPE_6__ FUNC_9 (int ,TYPE_5__*) ;

void FUNC_10(_GLFWmonitor* VAR_1, GLFWvidmode* VAR_2)
{
    if (VAR_0.x11.randr.available && !VAR_0.x11.randr.monitorBroken)
    {
        XRRScreenResources* VAR_3 =
            FUNC_6(VAR_0.x11.display, VAR_0.x11.root);
        XRRCrtcInfo* VAR_4 = FUNC_5(VAR_0.x11.display, VAR_3, VAR_1->x11.crtc);

        *VAR_2 = FUNC_9(FUNC_8(VAR_3, VAR_4->mode), VAR_4);

        FUNC_3(VAR_4);
        FUNC_4(VAR_3);
    }
    else
    {
        VAR_2->width = FUNC_2(VAR_0.x11.display, VAR_0.x11.screen);
        VAR_2->height = FUNC_1(VAR_0.x11.display, VAR_0.x11.screen);
        VAR_2->refreshRate = 0;

        FUNC_7(FUNC_0(VAR_0.x11.display, VAR_0.x11.screen),
                      &VAR_2->redBits, &VAR_2->greenBits, &VAR_2->blueBits);
    }
}

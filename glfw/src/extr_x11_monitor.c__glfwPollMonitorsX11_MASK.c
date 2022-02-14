
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_35__ TYPE_9__ ;
typedef struct TYPE_34__ TYPE_8__ ;
typedef struct TYPE_33__ TYPE_7__ ;
typedef struct TYPE_32__ TYPE_6__ ;
typedef struct TYPE_31__ TYPE_5__ ;
typedef struct TYPE_30__ TYPE_4__ ;
typedef struct TYPE_29__ TYPE_3__ ;
typedef struct TYPE_28__ TYPE_2__ ;
typedef struct TYPE_27__ TYPE_1__ ;
typedef struct TYPE_26__ TYPE_15__ ;


struct TYPE_29__ {scalar_t__ output; scalar_t__ crtc; int index; } ;
struct TYPE_31__ {TYPE_3__ x11; } ;
typedef TYPE_5__ _GLFWmonitor ;
struct TYPE_32__ {scalar_t__ x_org; scalar_t__ y_org; float width; float height; } ;
typedef TYPE_6__ XineramaScreenInfo ;
struct TYPE_33__ {int noutput; scalar_t__* outputs; } ;
typedef TYPE_7__ XRRScreenResources ;
struct TYPE_34__ {scalar_t__ connection; scalar_t__ crtc; int mm_height; int mm_width; char* name; } ;
typedef TYPE_8__ XRROutputInfo ;
struct TYPE_35__ {scalar_t__ rotation; float width; float height; scalar_t__ x; scalar_t__ y; } ;
typedef TYPE_9__ XRRCrtcInfo ;
struct TYPE_28__ {scalar_t__ available; } ;
struct TYPE_27__ {int monitorBroken; scalar_t__ available; } ;
struct TYPE_30__ {int screen; int display; TYPE_2__ xinerama; int root; TYPE_1__ randr; } ;
struct TYPE_26__ {int monitorCount; TYPE_4__ x11; int monitors; } ;
typedef scalar_t__ RROutput ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_6__*) ;
 int FUNC_3 (TYPE_9__*) ;
 int FUNC_4 (TYPE_8__*) ;
 int FUNC_5 (TYPE_7__*) ;
 TYPE_9__* FUNC_6 (int ,TYPE_7__*,scalar_t__) ;
 TYPE_8__* FUNC_7 (int ,TYPE_7__*,scalar_t__) ;
 scalar_t__ FUNC_8 (int ,int ) ;
 TYPE_7__* FUNC_9 (int ,int ) ;
 TYPE_6__* FUNC_10 (int ,int*) ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_15__ VAR_8 ;
 TYPE_5__* FUNC_11 (char*,int const,int const) ;
 int FUNC_12 (TYPE_5__*,int ,int) ;
 TYPE_5__** FUNC_13 (int,int) ;
 int FUNC_14 (TYPE_5__**) ;
 int FUNC_15 (TYPE_5__**,int ,int) ;

void FUNC_16(void)
{
    if (VAR_8.x11.randr.available && !VAR_8.x11.randr.monitorBroken)
    {
        int VAR_9, VAR_10 = 0;
        _GLFWmonitor** VAR_11 = ((void*)0);
        XineramaScreenInfo* VAR_12 = ((void*)0);
        XRRScreenResources* VAR_13 = FUNC_9(VAR_8.x11.display,
                                                              VAR_8.x11.root);
        RROutput VAR_14 = FUNC_8(VAR_8.x11.display,
                                               VAR_8.x11.root);

        if (VAR_8.x11.xinerama.available)
            VAR_12 = FUNC_10(VAR_8.x11.display, &VAR_10);

        VAR_9 = VAR_8.monitorCount;
        if (VAR_9)
        {
            VAR_11 = FUNC_13(VAR_8.monitorCount, sizeof(_GLFWmonitor*));
            FUNC_15(VAR_11,
                   VAR_8.monitors,
                   VAR_8.monitorCount * sizeof(_GLFWmonitor*));
        }

        for (int VAR_15 = 0; VAR_15 < VAR_13->noutput; VAR_15++)
        {
            int VAR_16, VAR_17, VAR_18, VAR_19;

            XRROutputInfo* VAR_20 = FUNC_7(VAR_8.x11.display, VAR_13, VAR_13->outputs[VAR_15]);
            if (VAR_20->connection != VAR_3 || VAR_20->crtc == VAR_2)
            {
                FUNC_4(VAR_20);
                continue;
            }

            for (VAR_16 = 0; VAR_16 < VAR_9; VAR_16++)
            {
                if (VAR_11[VAR_16] &&
                    VAR_11[VAR_16]->x11.output == VAR_13->outputs[VAR_15])
                {
                    VAR_11[VAR_16] = ((void*)0);
                    break;
                }
            }

            if (VAR_16 < VAR_9)
            {
                FUNC_4(VAR_20);
                continue;
            }

            XRRCrtcInfo* VAR_21 = FUNC_6(VAR_8.x11.display, VAR_13, VAR_20->crtc);
            if (VAR_21->rotation == VAR_5 || VAR_21->rotation == VAR_4)
            {
                VAR_18 = VAR_20->mm_height;
                VAR_19 = VAR_20->mm_width;
            }
            else
            {
                VAR_18 = VAR_20->mm_width;
                VAR_19 = VAR_20->mm_height;
            }

            if (VAR_18 <= 0 || VAR_19 <= 0)
            {




                VAR_18 = (int) (VAR_21->width * 25.4f / 96.f);
                VAR_19 = (int) (VAR_21->height * 25.4f / 96.f);
            }

            _GLFWmonitor* VAR_22 = FUNC_11(VAR_20->name, VAR_18, VAR_19);
            VAR_22->x11.output = VAR_13->outputs[VAR_15];
            VAR_22->x11.crtc = VAR_20->crtc;

            for (VAR_16 = 0; VAR_16 < VAR_10; VAR_16++)
            {
                if (VAR_12[VAR_16].x_org == VAR_21->x &&
                    VAR_12[VAR_16].y_org == VAR_21->y &&
                    VAR_12[VAR_16].width == VAR_21->width &&
                    VAR_12[VAR_16].height == VAR_21->height)
                {
                    VAR_22->x11.index = VAR_16;
                    break;
                }
            }

            if (VAR_22->x11.output == VAR_14)
                VAR_17 = VAR_6;
            else
                VAR_17 = VAR_7;

            FUNC_12(VAR_22, VAR_0, VAR_17);

            FUNC_4(VAR_20);
            FUNC_3(VAR_21);
        }

        FUNC_5(VAR_13);

        if (VAR_12)
            FUNC_2(VAR_12);

        for (int VAR_23 = 0; VAR_23 < VAR_9; VAR_23++)
        {
            if (VAR_11[VAR_23])
                FUNC_12(VAR_11[VAR_23], VAR_1, 0);
        }

        FUNC_14(VAR_11);
    }
    else
    {
        const int VAR_24 = FUNC_1(VAR_8.x11.display, VAR_8.x11.screen);
        const int VAR_25 = FUNC_0(VAR_8.x11.display, VAR_8.x11.screen);

        FUNC_12(FUNC_11("Display", VAR_24, VAR_25),
                          VAR_0,
                          VAR_6);
    }
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_7__ ;
typedef struct TYPE_29__ TYPE_6__ ;
typedef struct TYPE_28__ TYPE_5__ ;
typedef struct TYPE_27__ TYPE_4__ ;
typedef struct TYPE_26__ TYPE_3__ ;
typedef struct TYPE_25__ TYPE_2__ ;
typedef struct TYPE_24__ TYPE_1__ ;
typedef struct TYPE_23__ TYPE_16__ ;


typedef int protocols ;
struct TYPE_24__ {char const* instanceName; char const* className; } ;
struct TYPE_27__ {int width; int height; char const* title; TYPE_1__ x11; scalar_t__ maximized; scalar_t__ floating; int decorated; scalar_t__ scaleToMonitor; } ;
typedef TYPE_4__ _GLFWwndconfig ;
struct TYPE_25__ {int height; int width; int ypos; int xpos; int handle; int ic; int maximized; int colormap; int transparent; } ;
struct TYPE_28__ {TYPE_2__ x11; int monitor; } ;
typedef TYPE_5__ _GLFWwindow ;
struct TYPE_29__ {char* res_name; char* res_class; int initial_state; int flags; } ;
typedef TYPE_6__ XWMHints ;
struct TYPE_30__ {int event_mask; scalar_t__ border_pixel; int colormap; } ;
typedef TYPE_7__ XSetWindowAttributes ;
typedef int XPointer ;
typedef TYPE_6__ XClassHint ;
typedef int Visual ;
struct TYPE_26__ {int contentScaleX; int contentScaleY; scalar_t__ im; scalar_t__ XdndAware; int display; scalar_t__ NET_WM_WINDOW_TYPE; scalar_t__ NET_WM_WINDOW_TYPE_NORMAL; scalar_t__ NET_WM_PID; scalar_t__ NET_WM_PING; scalar_t__ WM_DELETE_WINDOW; scalar_t__ NET_WM_STATE; scalar_t__ NET_WM_STATE_MAXIMIZED_HORZ; scalar_t__ NET_WM_STATE_MAXIMIZED_VERT; scalar_t__ NET_WM_STATE_ABOVE; int context; int root; } ;
struct TYPE_23__ {TYPE_3__ x11; } ;
typedef int GLFWbool ;
typedef scalar_t__ Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 TYPE_6__* FUNC_0 () ;
 TYPE_6__* FUNC_1 () ;
 int FUNC_2 (int ,int ,scalar_t__,int ,int,int ,unsigned char*,int) ;
 int FUNC_3 (int ,int ,int *,int ) ;
 int FUNC_4 (scalar_t__,int ,int,int ,int ,int ,int ,int *) ;
 int FUNC_5 (int ,int ,int ,int ,int,int,int ,int,int ,int *,unsigned long const,TYPE_7__*) ;
 int FUNC_6 (TYPE_6__*) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 int FUNC_7 (int ,int ,int ,int ) ;
 int FUNC_8 (int ,int ,TYPE_6__*) ;
 int FUNC_9 (int ,int ,TYPE_6__*) ;
 int FUNC_10 (int ,int ,scalar_t__*,int) ;
 scalar_t__ VAR_31 ;
 TYPE_16__ VAR_32 ;
 int FUNC_11 () ;
 int FUNC_12 (int ,char*) ;
 int FUNC_13 (int ,char*) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (TYPE_5__*,int *,int *) ;
 int FUNC_16 (TYPE_5__*,int *,int *) ;
 int FUNC_17 (TYPE_5__*,int ) ;
 int FUNC_18 (TYPE_5__*,char const*) ;
 int FUNC_19 () ;
 char* FUNC_20 (char*) ;
 long FUNC_21 () ;
 scalar_t__ FUNC_22 (char const*) ;
 int FUNC_23 (TYPE_5__*,int,int) ;

__attribute__((used)) static GLFWbool FUNC_24(_GLFWwindow* VAR_33,
                                   const _GLFWwndconfig* VAR_34,
                                   Visual* VAR_35, int VAR_36)
{
    int VAR_37 = VAR_34->width;
    int VAR_38 = VAR_34->height;

    if (VAR_34->scaleToMonitor)
    {
        VAR_37 *= VAR_32.x11.contentScaleX;
        VAR_38 *= VAR_32.x11.contentScaleY;
    }


    VAR_33->x11.colormap = FUNC_3(VAR_32.x11.display,
                                           VAR_32.x11.root,
                                           VAR_35,
                                           VAR_0);

    VAR_33->x11.transparent = FUNC_14(VAR_35);


    {
        XSetWindowAttributes VAR_39;
        const unsigned long VAR_40 = VAR_3 | VAR_4 | VAR_5;

        VAR_39.colormap = VAR_33->x11.colormap;
        VAR_39.border_pixel = 0;
        VAR_39.event_mask = VAR_22 | VAR_14 | VAR_15 |
                        VAR_18 | VAR_1 | VAR_2 |
                        VAR_7 | VAR_8 | VAR_23 |
                        VAR_6 | VAR_16 | VAR_20;

        FUNC_11();

        VAR_33->x11.handle = FUNC_5(VAR_32.x11.display,
                                           VAR_32.x11.root,
                                           0, 0,
                                           VAR_37, VAR_38,
                                           0,
                                           VAR_36,
                                           VAR_13,
                                           VAR_35,
                                           VAR_40,
                                           &VAR_39);

        FUNC_19();

        if (!VAR_33->x11.handle)
        {
            FUNC_13(VAR_11,
                               "X11: Failed to create window");
            return VAR_9;
        }

        FUNC_7(VAR_32.x11.display,
                     VAR_33->x11.handle,
                     VAR_32.x11.context,
                     (XPointer) VAR_33);
    }

    if (!VAR_34->decorated)
        FUNC_17(VAR_33, VAR_9);

    if (VAR_32.x11.NET_WM_STATE && !VAR_33->monitor)
    {
        Atom VAR_41[3];
        int VAR_42 = 0;

        if (VAR_34->floating)
        {
            if (VAR_32.x11.NET_WM_STATE_ABOVE)
                VAR_41[VAR_42++] = VAR_32.x11.NET_WM_STATE_ABOVE;
        }

        if (VAR_34->maximized)
        {
            if (VAR_32.x11.NET_WM_STATE_MAXIMIZED_VERT &&
                VAR_32.x11.NET_WM_STATE_MAXIMIZED_HORZ)
            {
                VAR_41[VAR_42++] = VAR_32.x11.NET_WM_STATE_MAXIMIZED_VERT;
                VAR_41[VAR_42++] = VAR_32.x11.NET_WM_STATE_MAXIMIZED_HORZ;
                VAR_33->x11.maximized = VAR_12;
            }
        }

        if (VAR_42)
        {
            FUNC_2(VAR_32.x11.display, VAR_33->x11.handle,
                            VAR_32.x11.NET_WM_STATE, VAR_24, 32,
                            VAR_19, (unsigned char*) &VAR_41, VAR_42);
        }
    }


    {
        Atom VAR_43[] =
        {
            VAR_32.x11.WM_DELETE_WINDOW,
            VAR_32.x11.NET_WM_PING
        };

        FUNC_10(VAR_32.x11.display, VAR_33->x11.handle,
                        VAR_43, sizeof(VAR_43) / sizeof(Atom));
    }


    {
        const long VAR_44 = FUNC_21();

        FUNC_2(VAR_32.x11.display, VAR_33->x11.handle,
                        VAR_32.x11.NET_WM_PID, VAR_25, 32,
                        VAR_19,
                        (unsigned char*) &VAR_44, 1);
    }

    if (VAR_32.x11.NET_WM_WINDOW_TYPE && VAR_32.x11.NET_WM_WINDOW_TYPE_NORMAL)
    {
        Atom VAR_45 = VAR_32.x11.NET_WM_WINDOW_TYPE_NORMAL;
        FUNC_2(VAR_32.x11.display, VAR_33->x11.handle,
                        VAR_32.x11.NET_WM_WINDOW_TYPE, VAR_24, 32,
                        VAR_19, (unsigned char*) &VAR_45, 1);
    }


    {
        XWMHints* VAR_46 = FUNC_1();
        if (!VAR_46)
        {
            FUNC_12(VAR_10,
                            "X11: Failed to allocate WM hints");
            return VAR_9;
        }

        VAR_46->flags = VAR_21;
        VAR_46->initial_state = VAR_17;

        FUNC_9(VAR_32.x11.display, VAR_33->x11.handle, VAR_46);
        FUNC_6(VAR_46);
    }

    FUNC_23(VAR_33, VAR_37, VAR_38);


    {
        XClassHint* VAR_47 = FUNC_0();

        if (FUNC_22(VAR_34->x11.instanceName) &&
            FUNC_22(VAR_34->x11.className))
        {
            VAR_47->res_name = (char*) VAR_34->x11.instanceName;
            VAR_47->res_class = (char*) VAR_34->x11.className;
        }
        else
        {
            const char* VAR_48 = FUNC_20("RESOURCE_NAME");
            if (VAR_48 && FUNC_22(VAR_48))
                VAR_47->res_name = (char*) VAR_48;
            else if (FUNC_22(VAR_34->title))
                VAR_47->res_name = (char*) VAR_34->title;
            else
                VAR_47->res_name = (char*) "glfw-application";

            if (FUNC_22(VAR_34->title))
                VAR_47->res_class = (char*) VAR_34->title;
            else
                VAR_47->res_class = (char*) "GLFW-Application";
        }

        FUNC_8(VAR_32.x11.display, VAR_33->x11.handle, VAR_47);
        FUNC_6(VAR_47);
    }


    {
        const Atom VAR_49 = VAR_31;
        FUNC_2(VAR_32.x11.display, VAR_33->x11.handle,
                        VAR_32.x11.XdndAware, VAR_24, 32,
                        VAR_19, (unsigned char*) &VAR_49, 1);
    }

    FUNC_18(VAR_33, VAR_34->title);

    if (VAR_32.x11.im)
    {
        VAR_33->x11.ic = FUNC_4(VAR_32.x11.im,
                                   VAR_30,
                                   VAR_26 | VAR_27,
                                   VAR_28,
                                   VAR_33->x11.handle,
                                   VAR_29,
                                   VAR_33->x11.handle,
                                   ((void*)0));
    }

    FUNC_15(VAR_33, &VAR_33->x11.xpos, &VAR_33->x11.ypos);
    FUNC_16(VAR_33, &VAR_33->x11.width, &VAR_33->x11.height);

    return VAR_12;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ Window ;
struct TYPE_3__ {scalar_t__ root; void* NET_REQUEST_FRAME_EXTENTS; void* NET_FRAME_EXTENTS; void* NET_ACTIVE_WINDOW; void* NET_CURRENT_DESKTOP; void* NET_WORKAREA; void* NET_WM_WINDOW_TYPE_NORMAL; void* NET_WM_WINDOW_TYPE; void* NET_WM_FULLSCREEN_MONITORS; void* NET_WM_STATE_DEMANDS_ATTENTION; void* NET_WM_STATE_MAXIMIZED_HORZ; void* NET_WM_STATE_MAXIMIZED_VERT; void* NET_WM_STATE_FULLSCREEN; void* NET_WM_STATE_ABOVE; void* NET_WM_STATE; int NET_SUPPORTED; int NET_SUPPORTING_WM_CHECK; } ;
struct TYPE_4__ {TYPE_1__ x11; } ;
typedef scalar_t__ Atom ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__*) ;
 TYPE_2__ VAR_2 ;
 unsigned long FUNC_1 (scalar_t__,int ,int ,unsigned char**) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 void* FUNC_4 (scalar_t__*,unsigned long const,char*) ;

__attribute__((used)) static void FUNC_5(void)
{


    Window* VAR_3 = ((void*)0);
    if (!FUNC_1(VAR_2.x11.root,
                                   VAR_2.x11.NET_SUPPORTING_WM_CHECK,
                                   VAR_1,
                                   (unsigned char**) &VAR_3))
    {
        return;
    }

    FUNC_2();




    Window* VAR_4 = ((void*)0);
    if (!FUNC_1(*VAR_3,
                                   VAR_2.x11.NET_SUPPORTING_WM_CHECK,
                                   VAR_1,
                                   (unsigned char**) &VAR_4))
    {
        FUNC_0(VAR_3);
        return;
    }

    FUNC_3();



    if (*VAR_3 != *VAR_4)
    {
        FUNC_0(VAR_3);
        FUNC_0(VAR_4);
        return;
    }

    FUNC_0(VAR_3);
    FUNC_0(VAR_4);






    Atom* VAR_5 = ((void*)0);
    const unsigned long VAR_6 =
        FUNC_1(VAR_2.x11.root,
                                  VAR_2.x11.NET_SUPPORTED,
                                  VAR_0,
                                  (unsigned char**) &VAR_5);



    VAR_2.x11.NET_WM_STATE =
        FUNC_4(VAR_5, VAR_6, "_NET_WM_STATE");
    VAR_2.x11.NET_WM_STATE_ABOVE =
        FUNC_4(VAR_5, VAR_6, "_NET_WM_STATE_ABOVE");
    VAR_2.x11.NET_WM_STATE_FULLSCREEN =
        FUNC_4(VAR_5, VAR_6, "_NET_WM_STATE_FULLSCREEN");
    VAR_2.x11.NET_WM_STATE_MAXIMIZED_VERT =
        FUNC_4(VAR_5, VAR_6, "_NET_WM_STATE_MAXIMIZED_VERT");
    VAR_2.x11.NET_WM_STATE_MAXIMIZED_HORZ =
        FUNC_4(VAR_5, VAR_6, "_NET_WM_STATE_MAXIMIZED_HORZ");
    VAR_2.x11.NET_WM_STATE_DEMANDS_ATTENTION =
        FUNC_4(VAR_5, VAR_6, "_NET_WM_STATE_DEMANDS_ATTENTION");
    VAR_2.x11.NET_WM_FULLSCREEN_MONITORS =
        FUNC_4(VAR_5, VAR_6, "_NET_WM_FULLSCREEN_MONITORS");
    VAR_2.x11.NET_WM_WINDOW_TYPE =
        FUNC_4(VAR_5, VAR_6, "_NET_WM_WINDOW_TYPE");
    VAR_2.x11.NET_WM_WINDOW_TYPE_NORMAL =
        FUNC_4(VAR_5, VAR_6, "_NET_WM_WINDOW_TYPE_NORMAL");
    VAR_2.x11.NET_WORKAREA =
        FUNC_4(VAR_5, VAR_6, "_NET_WORKAREA");
    VAR_2.x11.NET_CURRENT_DESKTOP =
        FUNC_4(VAR_5, VAR_6, "_NET_CURRENT_DESKTOP");
    VAR_2.x11.NET_ACTIVE_WINDOW =
        FUNC_4(VAR_5, VAR_6, "_NET_ACTIVE_WINDOW");
    VAR_2.x11.NET_FRAME_EXTENTS =
        FUNC_4(VAR_5, VAR_6, "_NET_FRAME_EXTENTS");
    VAR_2.x11.NET_REQUEST_FRAME_EXTENTS =
        FUNC_4(VAR_5, VAR_6, "_NET_REQUEST_FRAME_EXTENTS");

    if (VAR_5)
        FUNC_0(VAR_5);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_9__ ;
typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_16__ {int * handle; } ;
struct TYPE_15__ {int * handle; } ;
struct TYPE_14__ {int * handle; } ;
struct TYPE_13__ {int * handle; } ;
struct TYPE_12__ {int * handle; } ;
struct TYPE_11__ {int * handle; } ;
struct TYPE_10__ {int * handle; } ;
struct TYPE_17__ {scalar_t__ helperWindowHandle; TYPE_7__ xi; TYPE_6__ vidmode; TYPE_5__ xrender; TYPE_4__ xinerama; TYPE_3__ randr; TYPE_2__ xcursor; TYPE_1__ x11xcb; int * display; int * im; int clipboardString; int primarySelectionString; scalar_t__ hiddenCursorHandle; int CLIPBOARD; } ;
struct TYPE_18__ {TYPE_8__ x11; } ;
typedef scalar_t__ Cursor ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,scalar_t__) ;
 int FUNC_3 (int *,scalar_t__) ;
 scalar_t__ FUNC_4 (int *,int ) ;
 TYPE_9__ VAR_1 ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int ) ;

void FUNC_11(void)
{
    if (VAR_1.x11.helperWindowHandle)
    {
        if (FUNC_4(VAR_1.x11.display, VAR_1.x11.CLIPBOARD) ==
            VAR_1.x11.helperWindowHandle)
        {
            FUNC_5();
        }

        FUNC_2(VAR_1.x11.display, VAR_1.x11.helperWindowHandle);
        VAR_1.x11.helperWindowHandle = VAR_0;
    }

    if (VAR_1.x11.hiddenCursorHandle)
    {
        FUNC_3(VAR_1.x11.display, VAR_1.x11.hiddenCursorHandle);
        VAR_1.x11.hiddenCursorHandle = (Cursor) 0;
    }

    FUNC_10(VAR_1.x11.primarySelectionString);
    FUNC_10(VAR_1.x11.clipboardString);

    if (VAR_1.x11.im)
    {
        FUNC_1(VAR_1.x11.im);
        VAR_1.x11.im = ((void*)0);
    }

    if (VAR_1.x11.display)
    {
        FUNC_0(VAR_1.x11.display);
        VAR_1.x11.display = ((void*)0);
    }

    if (VAR_1.x11.x11xcb.handle)
    {
        FUNC_9(VAR_1.x11.x11xcb.handle);
        VAR_1.x11.x11xcb.handle = ((void*)0);
    }

    if (VAR_1.x11.xcursor.handle)
    {
        FUNC_9(VAR_1.x11.xcursor.handle);
        VAR_1.x11.xcursor.handle = ((void*)0);
    }

    if (VAR_1.x11.randr.handle)
    {
        FUNC_9(VAR_1.x11.randr.handle);
        VAR_1.x11.randr.handle = ((void*)0);
    }

    if (VAR_1.x11.xinerama.handle)
    {
        FUNC_9(VAR_1.x11.xinerama.handle);
        VAR_1.x11.xinerama.handle = ((void*)0);
    }

    if (VAR_1.x11.xrender.handle)
    {
        FUNC_9(VAR_1.x11.xrender.handle);
        VAR_1.x11.xrender.handle = ((void*)0);
    }

    if (VAR_1.x11.vidmode.handle)
    {
        FUNC_9(VAR_1.x11.vidmode.handle);
        VAR_1.x11.vidmode.handle = ((void*)0);
    }

    if (VAR_1.x11.xi.handle)
    {
        FUNC_9(VAR_1.x11.xi.handle);
        VAR_1.x11.xi.handle = ((void*)0);
    }



    FUNC_6();
    FUNC_7();


    FUNC_8();

}

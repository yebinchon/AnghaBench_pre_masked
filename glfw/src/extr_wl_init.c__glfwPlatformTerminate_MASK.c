
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {int * handle; } ;
struct TYPE_7__ {int * handle; scalar_t__ context; scalar_t__ state; scalar_t__ keymap; scalar_t__ composeState; } ;
struct TYPE_6__ {int * handle; } ;
struct TYPE_9__ {scalar_t__ timerfd; scalar_t__ cursorTimerfd; scalar_t__ clipboardSendString; scalar_t__ clipboardString; scalar_t__ display; scalar_t__ registry; scalar_t__ idleInhibitManager; scalar_t__ pointerConstraints; scalar_t__ relativePointerManager; scalar_t__ seat; scalar_t__ keyboard; scalar_t__ pointer; scalar_t__ dataDeviceManager; scalar_t__ dataOffer; scalar_t__ dataDevice; scalar_t__ dataSource; scalar_t__ wmBase; scalar_t__ decorationManager; scalar_t__ viewporter; scalar_t__ shm; scalar_t__ compositor; scalar_t__ subcompositor; scalar_t__ cursorSurface; TYPE_3__ cursor; scalar_t__ cursorThemeHiDPI; scalar_t__ cursorTheme; TYPE_2__ xkb; TYPE_1__ egl; } ;
struct TYPE_10__ {TYPE_4__ wl; } ;


 TYPE_5__ VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int *) ;
 int FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__) ;
 int FUNC_9 (scalar_t__) ;
 int FUNC_10 (scalar_t__) ;
 int FUNC_11 (scalar_t__) ;
 int FUNC_12 (scalar_t__) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__) ;
 int FUNC_15 (scalar_t__) ;
 int FUNC_16 (scalar_t__) ;
 int FUNC_17 (scalar_t__) ;
 int FUNC_18 (scalar_t__) ;
 int FUNC_19 (scalar_t__) ;
 int FUNC_20 (scalar_t__) ;
 int FUNC_21 (scalar_t__) ;
 int FUNC_22 (scalar_t__) ;
 int FUNC_23 (scalar_t__) ;
 int FUNC_24 (scalar_t__) ;
 int FUNC_25 (scalar_t__) ;
 int FUNC_26 (scalar_t__) ;
 int FUNC_27 (scalar_t__) ;
 int FUNC_28 (scalar_t__) ;
 int FUNC_29 (scalar_t__) ;

void FUNC_30(void)
{

    FUNC_1();

    FUNC_0();
    if (VAR_0.wl.egl.handle)
    {
        FUNC_2(VAR_0.wl.egl.handle);
        VAR_0.wl.egl.handle = ((void*)0);
    }





    if (VAR_0.wl.xkb.keymap)
        FUNC_24(VAR_0.wl.xkb.keymap);
    if (VAR_0.wl.xkb.state)
        FUNC_25(VAR_0.wl.xkb.state);
    if (VAR_0.wl.xkb.context)
        FUNC_23(VAR_0.wl.xkb.context);
    if (VAR_0.wl.xkb.handle)
    {
        FUNC_2(VAR_0.wl.xkb.handle);
        VAR_0.wl.xkb.handle = ((void*)0);
    }

    if (VAR_0.wl.cursorTheme)
        FUNC_6(VAR_0.wl.cursorTheme);
    if (VAR_0.wl.cursorThemeHiDPI)
        FUNC_6(VAR_0.wl.cursorThemeHiDPI);
    if (VAR_0.wl.cursor.handle)
    {
        FUNC_2(VAR_0.wl.cursor.handle);
        VAR_0.wl.cursor.handle = ((void*)0);
    }

    if (VAR_0.wl.cursorSurface)
        FUNC_19(VAR_0.wl.cursorSurface);
    if (VAR_0.wl.subcompositor)
        FUNC_18(VAR_0.wl.subcompositor);
    if (VAR_0.wl.compositor)
        FUNC_5(VAR_0.wl.compositor);
    if (VAR_0.wl.shm)
        FUNC_17(VAR_0.wl.shm);
    if (VAR_0.wl.viewporter)
        FUNC_20(VAR_0.wl.viewporter);
    if (VAR_0.wl.decorationManager)
        FUNC_29(VAR_0.wl.decorationManager);
    if (VAR_0.wl.wmBase)
        FUNC_21(VAR_0.wl.wmBase);
    if (VAR_0.wl.dataSource)
        FUNC_10(VAR_0.wl.dataSource);
    if (VAR_0.wl.dataDevice)
        FUNC_7(VAR_0.wl.dataDevice);
    if (VAR_0.wl.dataOffer)
        FUNC_9(VAR_0.wl.dataOffer);
    if (VAR_0.wl.dataDeviceManager)
        FUNC_8(VAR_0.wl.dataDeviceManager);
    if (VAR_0.wl.pointer)
        FUNC_14(VAR_0.wl.pointer);
    if (VAR_0.wl.keyboard)
        FUNC_13(VAR_0.wl.keyboard);
    if (VAR_0.wl.seat)
        FUNC_16(VAR_0.wl.seat);
    if (VAR_0.wl.relativePointerManager)
        FUNC_28(VAR_0.wl.relativePointerManager);
    if (VAR_0.wl.pointerConstraints)
        FUNC_27(VAR_0.wl.pointerConstraints);
    if (VAR_0.wl.idleInhibitManager)
        FUNC_26(VAR_0.wl.idleInhibitManager);
    if (VAR_0.wl.registry)
        FUNC_15(VAR_0.wl.registry);
    if (VAR_0.wl.display)
    {
        FUNC_12(VAR_0.wl.display);
        FUNC_11(VAR_0.wl.display);
    }

    if (VAR_0.wl.timerfd >= 0)
        FUNC_3(VAR_0.wl.timerfd);
    if (VAR_0.wl.cursorTimerfd >= 0)
        FUNC_3(VAR_0.wl.cursorTimerfd);

    if (VAR_0.wl.clipboardString)
        FUNC_4(VAR_0.wl.clipboardString);
    if (VAR_0.wl.clipboardSendString)
        FUNC_4(VAR_0.wl.clipboardSendString);
}

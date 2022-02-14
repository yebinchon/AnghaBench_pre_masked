
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


struct TYPE_16__ {scalar_t__ instance; } ;
struct TYPE_15__ {scalar_t__ instance; } ;
struct TYPE_14__ {scalar_t__ instance; } ;
struct TYPE_13__ {scalar_t__ instance; } ;
struct TYPE_12__ {scalar_t__ instance; } ;
struct TYPE_11__ {scalar_t__ instance; } ;
struct TYPE_10__ {scalar_t__ instance; } ;
struct TYPE_17__ {TYPE_7__ ntdll; TYPE_6__ shcore; TYPE_5__ dwmapi; TYPE_4__ user32; TYPE_3__ winmm; TYPE_2__ dinput8; TYPE_1__ xinput; } ;
struct TYPE_18__ {TYPE_8__ win32; } ;


 int FUNC_0 (scalar_t__) ;
 TYPE_9__ VAR_0 ;

__attribute__((used)) static void FUNC_1(void)
{
    if (VAR_0.win32.xinput.instance)
        FUNC_0(VAR_0.win32.xinput.instance);

    if (VAR_0.win32.dinput8.instance)
        FUNC_0(VAR_0.win32.dinput8.instance);

    if (VAR_0.win32.winmm.instance)
        FUNC_0(VAR_0.win32.winmm.instance);

    if (VAR_0.win32.user32.instance)
        FUNC_0(VAR_0.win32.user32.instance);

    if (VAR_0.win32.dwmapi.instance)
        FUNC_0(VAR_0.win32.dwmapi.instance);

    if (VAR_0.win32.shcore.instance)
        FUNC_0(VAR_0.win32.shcore.instance);

    if (VAR_0.win32.ntdll.instance)
        FUNC_0(VAR_0.win32.ntdll.instance);
}

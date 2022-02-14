
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


struct TYPE_16__ {void* instance; scalar_t__ RtlVerifyVersionInfo_; } ;
struct TYPE_15__ {void* instance; scalar_t__ GetDpiForMonitor_; scalar_t__ SetProcessDpiAwareness_; } ;
struct TYPE_14__ {void* instance; scalar_t__ EnableBlurBehindWindow; scalar_t__ Flush; scalar_t__ IsCompositionEnabled; } ;
struct TYPE_13__ {void* instance; scalar_t__ GetState; scalar_t__ GetCapabilities; } ;
struct TYPE_12__ {void* instance; scalar_t__ Create; } ;
struct TYPE_11__ {void* instance; scalar_t__ AdjustWindowRectExForDpi_; scalar_t__ GetDpiForWindow_; scalar_t__ SetProcessDpiAwarenessContext_; scalar_t__ EnableNonClientDpiScaling_; scalar_t__ ChangeWindowMessageFilterEx_; scalar_t__ SetProcessDPIAware_; } ;
struct TYPE_10__ {void* instance; scalar_t__ GetTime; } ;
struct TYPE_17__ {TYPE_7__ ntdll; TYPE_6__ shcore; TYPE_5__ dwmapi; TYPE_4__ xinput; TYPE_3__ dinput8; TYPE_2__ user32; TYPE_1__ winmm; } ;
struct TYPE_18__ {TYPE_8__ win32; } ;
typedef scalar_t__ PFN_timeGetTime ;
typedef scalar_t__ PFN_XInputGetState ;
typedef scalar_t__ PFN_XInputGetCapabilities ;
typedef scalar_t__ PFN_SetProcessDpiAwarenessContext ;
typedef scalar_t__ PFN_SetProcessDpiAwareness ;
typedef scalar_t__ PFN_SetProcessDPIAware ;
typedef scalar_t__ PFN_RtlVerifyVersionInfo ;
typedef scalar_t__ PFN_GetDpiForWindow ;
typedef scalar_t__ PFN_GetDpiForMonitor ;
typedef scalar_t__ PFN_EnableNonClientDpiScaling ;
typedef scalar_t__ PFN_DwmIsCompositionEnabled ;
typedef scalar_t__ PFN_DwmFlush ;
typedef scalar_t__ PFN_DwmEnableBlurBehindWindow ;
typedef scalar_t__ PFN_DirectInput8Create ;
typedef scalar_t__ PFN_ChangeWindowMessageFilterEx ;
typedef scalar_t__ PFN_AdjustWindowRectExForDpi ;
typedef int GLFWbool ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (void*,char*) ;
 void* FUNC_1 (char const*) ;
 TYPE_9__ VAR_3 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static GLFWbool FUNC_3(void)
{
    VAR_3.win32.winmm.instance = FUNC_1("winmm.dll");
    if (!VAR_3.win32.winmm.instance)
    {
        FUNC_2(VAR_1,
                             "Win32: Failed to load winmm.dll");
        return VAR_0;
    }

    VAR_3.win32.winmm.GetTime = (PFN_timeGetTime)
        FUNC_0(VAR_3.win32.winmm.instance, "timeGetTime");

    VAR_3.win32.user32.instance = FUNC_1("user32.dll");
    if (!VAR_3.win32.user32.instance)
    {
        FUNC_2(VAR_1,
                             "Win32: Failed to load user32.dll");
        return VAR_0;
    }

    VAR_3.win32.user32.SetProcessDPIAware_ = (PFN_SetProcessDPIAware)
        FUNC_0(VAR_3.win32.user32.instance, "SetProcessDPIAware");
    VAR_3.win32.user32.ChangeWindowMessageFilterEx_ = (PFN_ChangeWindowMessageFilterEx)
        FUNC_0(VAR_3.win32.user32.instance, "ChangeWindowMessageFilterEx");
    VAR_3.win32.user32.EnableNonClientDpiScaling_ = (PFN_EnableNonClientDpiScaling)
        FUNC_0(VAR_3.win32.user32.instance, "EnableNonClientDpiScaling");
    VAR_3.win32.user32.SetProcessDpiAwarenessContext_ = (PFN_SetProcessDpiAwarenessContext)
        FUNC_0(VAR_3.win32.user32.instance, "SetProcessDpiAwarenessContext");
    VAR_3.win32.user32.GetDpiForWindow_ = (PFN_GetDpiForWindow)
        FUNC_0(VAR_3.win32.user32.instance, "GetDpiForWindow");
    VAR_3.win32.user32.AdjustWindowRectExForDpi_ = (PFN_AdjustWindowRectExForDpi)
        FUNC_0(VAR_3.win32.user32.instance, "AdjustWindowRectExForDpi");

    VAR_3.win32.dinput8.instance = FUNC_1("dinput8.dll");
    if (VAR_3.win32.dinput8.instance)
    {
        VAR_3.win32.dinput8.Create = (PFN_DirectInput8Create)
            FUNC_0(VAR_3.win32.dinput8.instance, "DirectInput8Create");
    }

    {
        int VAR_4;
        const char* VAR_5[] =
        {
            "xinput1_4.dll",
            "xinput1_3.dll",
            "xinput9_1_0.dll",
            "xinput1_2.dll",
            "xinput1_1.dll",
            ((void*)0)
        };

        for (VAR_4 = 0; VAR_5[VAR_4]; VAR_4++)
        {
            VAR_3.win32.xinput.instance = FUNC_1(VAR_5[VAR_4]);
            if (VAR_3.win32.xinput.instance)
            {
                VAR_3.win32.xinput.GetCapabilities = (PFN_XInputGetCapabilities)
                    FUNC_0(VAR_3.win32.xinput.instance, "XInputGetCapabilities");
                VAR_3.win32.xinput.GetState = (PFN_XInputGetState)
                    FUNC_0(VAR_3.win32.xinput.instance, "XInputGetState");

                break;
            }
        }
    }

    VAR_3.win32.dwmapi.instance = FUNC_1("dwmapi.dll");
    if (VAR_3.win32.dwmapi.instance)
    {
        VAR_3.win32.dwmapi.IsCompositionEnabled = (PFN_DwmIsCompositionEnabled)
            FUNC_0(VAR_3.win32.dwmapi.instance, "DwmIsCompositionEnabled");
        VAR_3.win32.dwmapi.Flush = (PFN_DwmFlush)
            FUNC_0(VAR_3.win32.dwmapi.instance, "DwmFlush");
        VAR_3.win32.dwmapi.EnableBlurBehindWindow = (PFN_DwmEnableBlurBehindWindow)
            FUNC_0(VAR_3.win32.dwmapi.instance, "DwmEnableBlurBehindWindow");
    }

    VAR_3.win32.shcore.instance = FUNC_1("shcore.dll");
    if (VAR_3.win32.shcore.instance)
    {
        VAR_3.win32.shcore.SetProcessDpiAwareness_ = (PFN_SetProcessDpiAwareness)
            FUNC_0(VAR_3.win32.shcore.instance, "SetProcessDpiAwareness");
        VAR_3.win32.shcore.GetDpiForMonitor_ = (PFN_GetDpiForMonitor)
            FUNC_0(VAR_3.win32.shcore.instance, "GetDpiForMonitor");
    }

    VAR_3.win32.ntdll.instance = FUNC_1("ntdll.dll");
    if (VAR_3.win32.ntdll.instance)
    {
        VAR_3.win32.ntdll.RtlVerifyVersionInfo_ = (PFN_RtlVerifyVersionInfo)
            FUNC_0(VAR_3.win32.ntdll.instance, "RtlVerifyVersionInfo");
    }

    return VAR_2;
}

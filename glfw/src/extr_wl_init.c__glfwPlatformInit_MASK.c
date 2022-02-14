
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int context; void* handle; scalar_t__ compose_state_get_one_sym; scalar_t__ compose_state_get_status; scalar_t__ compose_state_feed; scalar_t__ compose_state_unref; scalar_t__ compose_state_new; scalar_t__ compose_table_unref; scalar_t__ compose_table_new_from_locale; scalar_t__ state_serialize_mods; scalar_t__ state_update_mask; scalar_t__ state_key_get_syms; scalar_t__ state_unref; scalar_t__ state_new; scalar_t__ keymap_key_repeats; scalar_t__ keymap_mod_get_index; scalar_t__ keymap_unref; scalar_t__ keymap_new_from_string; scalar_t__ context_unref; scalar_t__ context_new; } ;
struct TYPE_8__ {void* handle; scalar_t__ window_resize; scalar_t__ window_destroy; scalar_t__ window_create; } ;
struct TYPE_7__ {void* handle; scalar_t__ image_get_buffer; scalar_t__ theme_get_cursor; scalar_t__ theme_destroy; scalar_t__ theme_load; } ;
struct TYPE_9__ {int timerfd; int seatVersion; int clipboardSize; int clipboardString; int dataDevice; scalar_t__ seat; scalar_t__ dataDeviceManager; void* cursorTimerfd; int compositor; int cursorSurface; scalar_t__ shm; void* cursorThemeHiDPI; void* cursorTheme; scalar_t__ pointer; int wmBase; int display; TYPE_1__ xkb; int registry; TYPE_3__ egl; TYPE_2__ cursor; } ;
struct TYPE_10__ {TYPE_4__ wl; } ;
typedef scalar_t__ PFN_xkb_state_update_mask ;
typedef scalar_t__ PFN_xkb_state_unref ;
typedef scalar_t__ PFN_xkb_state_serialize_mods ;
typedef scalar_t__ PFN_xkb_state_new ;
typedef scalar_t__ PFN_xkb_state_key_get_syms ;
typedef scalar_t__ PFN_xkb_keymap_unref ;
typedef scalar_t__ PFN_xkb_keymap_new_from_string ;
typedef scalar_t__ PFN_xkb_keymap_mod_get_index ;
typedef scalar_t__ PFN_xkb_keymap_key_repeats ;
typedef scalar_t__ PFN_xkb_context_unref ;
typedef scalar_t__ PFN_xkb_context_new ;
typedef scalar_t__ PFN_xkb_compose_table_unref ;
typedef scalar_t__ PFN_xkb_compose_table_new_from_locale ;
typedef scalar_t__ PFN_xkb_compose_state_unref ;
typedef scalar_t__ PFN_xkb_compose_state_new ;
typedef scalar_t__ PFN_xkb_compose_state_get_status ;
typedef scalar_t__ PFN_xkb_compose_state_get_one_sym ;
typedef scalar_t__ PFN_xkb_compose_state_feed ;
typedef scalar_t__ PFN_wl_egl_window_resize ;
typedef scalar_t__ PFN_wl_egl_window_destroy ;
typedef scalar_t__ PFN_wl_egl_window_create ;
typedef scalar_t__ PFN_wl_cursor_theme_load ;
typedef scalar_t__ PFN_wl_cursor_theme_get_cursor ;
typedef scalar_t__ PFN_wl_cursor_theme_destroy ;
typedef scalar_t__ PFN_wl_cursor_image_get_buffer ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 long VAR_4 ;
 int VAR_5 ;
 TYPE_5__ VAR_6 ;
 int FUNC_0 () ;
 int FUNC_1 () ;
 int FUNC_2 (int ,char*) ;
 void* FUNC_3 (char*) ;
 scalar_t__ FUNC_4 (void*,char*) ;
 int FUNC_5 () ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 char* FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 int VAR_9 ;
 long FUNC_8 (char const*,char**,int) ;
 void* FUNC_9 (int ,int ) ;
 int FUNC_10 (int ) ;
 void* FUNC_11 (char const*,int,scalar_t__) ;
 int FUNC_12 (int ,int *,int *) ;
 int FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ,int *,int *) ;
 int FUNC_18 (int ) ;

int FUNC_19(void)
{
    const char *VAR_10;
    const char *VAR_11;
    char *VAR_12;
    long VAR_13;
    int VAR_14;

    VAR_6.wl.cursor.handle = FUNC_3("libwayland-cursor.so.0");
    if (!VAR_6.wl.cursor.handle)
    {
        FUNC_2(VAR_2,
                        "Wayland: Failed to open libwayland-cursor");
        return VAR_1;
    }

    VAR_6.wl.cursor.theme_load = (PFN_wl_cursor_theme_load)
        FUNC_4(VAR_6.wl.cursor.handle, "wl_cursor_theme_load");
    VAR_6.wl.cursor.theme_destroy = (PFN_wl_cursor_theme_destroy)
        FUNC_4(VAR_6.wl.cursor.handle, "wl_cursor_theme_destroy");
    VAR_6.wl.cursor.theme_get_cursor = (PFN_wl_cursor_theme_get_cursor)
        FUNC_4(VAR_6.wl.cursor.handle, "wl_cursor_theme_get_cursor");
    VAR_6.wl.cursor.image_get_buffer = (PFN_wl_cursor_image_get_buffer)
        FUNC_4(VAR_6.wl.cursor.handle, "wl_cursor_image_get_buffer");

    VAR_6.wl.egl.handle = FUNC_3("libwayland-egl.so.1");
    if (!VAR_6.wl.egl.handle)
    {
        FUNC_2(VAR_2,
                        "Wayland: Failed to open libwayland-egl");
        return VAR_1;
    }

    VAR_6.wl.egl.window_create = (PFN_wl_egl_window_create)
        FUNC_4(VAR_6.wl.egl.handle, "wl_egl_window_create");
    VAR_6.wl.egl.window_destroy = (PFN_wl_egl_window_destroy)
        FUNC_4(VAR_6.wl.egl.handle, "wl_egl_window_destroy");
    VAR_6.wl.egl.window_resize = (PFN_wl_egl_window_resize)
        FUNC_4(VAR_6.wl.egl.handle, "wl_egl_window_resize");

    VAR_6.wl.xkb.handle = FUNC_3("libxkbcommon.so.0");
    if (!VAR_6.wl.xkb.handle)
    {
        FUNC_2(VAR_2,
                        "Wayland: Failed to open libxkbcommon");
        return VAR_1;
    }

    VAR_6.wl.xkb.context_new = (PFN_xkb_context_new)
        FUNC_4(VAR_6.wl.xkb.handle, "xkb_context_new");
    VAR_6.wl.xkb.context_unref = (PFN_xkb_context_unref)
        FUNC_4(VAR_6.wl.xkb.handle, "xkb_context_unref");
    VAR_6.wl.xkb.keymap_new_from_string = (PFN_xkb_keymap_new_from_string)
        FUNC_4(VAR_6.wl.xkb.handle, "xkb_keymap_new_from_string");
    VAR_6.wl.xkb.keymap_unref = (PFN_xkb_keymap_unref)
        FUNC_4(VAR_6.wl.xkb.handle, "xkb_keymap_unref");
    VAR_6.wl.xkb.keymap_mod_get_index = (PFN_xkb_keymap_mod_get_index)
        FUNC_4(VAR_6.wl.xkb.handle, "xkb_keymap_mod_get_index");
    VAR_6.wl.xkb.keymap_key_repeats = (PFN_xkb_keymap_key_repeats)
        FUNC_4(VAR_6.wl.xkb.handle, "xkb_keymap_key_repeats");
    VAR_6.wl.xkb.state_new = (PFN_xkb_state_new)
        FUNC_4(VAR_6.wl.xkb.handle, "xkb_state_new");
    VAR_6.wl.xkb.state_unref = (PFN_xkb_state_unref)
        FUNC_4(VAR_6.wl.xkb.handle, "xkb_state_unref");
    VAR_6.wl.xkb.state_key_get_syms = (PFN_xkb_state_key_get_syms)
        FUNC_4(VAR_6.wl.xkb.handle, "xkb_state_key_get_syms");
    VAR_6.wl.xkb.state_update_mask = (PFN_xkb_state_update_mask)
        FUNC_4(VAR_6.wl.xkb.handle, "xkb_state_update_mask");
    VAR_6.wl.xkb.state_serialize_mods = (PFN_xkb_state_serialize_mods)
        FUNC_4(VAR_6.wl.xkb.handle, "xkb_state_serialize_mods");
    VAR_6.wl.display = FUNC_14(((void*)0));
    if (!VAR_6.wl.display)
    {
        FUNC_2(VAR_2,
                        "Wayland: Failed to connect to display");
        return VAR_1;
    }

    VAR_6.wl.registry = FUNC_15(VAR_6.wl.display);
    FUNC_17(VAR_6.wl.registry, &VAR_9, ((void*)0));

    FUNC_5();

    VAR_6.wl.xkb.context = FUNC_18(0);
    if (!VAR_6.wl.xkb.context)
    {
        FUNC_2(VAR_2,
                        "Wayland: Failed to initialize xkb context");
        return VAR_1;
    }


    FUNC_16(VAR_6.wl.display);


    FUNC_16(VAR_6.wl.display);


    if (!FUNC_0())
        return VAR_1;


    FUNC_1();

    VAR_6.wl.timerfd = -1;
    if (VAR_6.wl.seatVersion >= 4)
        VAR_6.wl.timerfd = FUNC_9(VAR_0, VAR_5);

    if (!VAR_6.wl.wmBase)
    {
        FUNC_2(VAR_2,
                        "Wayland: Failed to find xdg-shell in your compositor");
        return VAR_1;
    }

    if (VAR_6.wl.pointer && VAR_6.wl.shm)
    {
        VAR_10 = FUNC_6("XCURSOR_THEME");
        VAR_11 = FUNC_6("XCURSOR_SIZE");
        VAR_14 = 32;
        if (VAR_11)
        {
            VAR_8 = 0;
            VAR_13 = FUNC_8(VAR_11, &VAR_12, 10);
            if (!*VAR_12 && !VAR_8 && VAR_13 > 0 && VAR_13 <= VAR_4)
                VAR_14 = (int)VAR_13;
        }
        VAR_6.wl.cursorTheme =
            FUNC_11(VAR_10, VAR_14, VAR_6.wl.shm);
        if (!VAR_6.wl.cursorTheme)
        {
            FUNC_2(VAR_2,
                            "Wayland: Unable to load default cursor theme");
            return VAR_1;
        }

        VAR_6.wl.cursorThemeHiDPI =
            FUNC_11(VAR_10, 2 * VAR_14, VAR_6.wl.shm);
        VAR_6.wl.cursorSurface =
            FUNC_10(VAR_6.wl.compositor);
        VAR_6.wl.cursorTimerfd = FUNC_9(VAR_0, VAR_5);
    }

    if (VAR_6.wl.seat && VAR_6.wl.dataDeviceManager)
    {
        VAR_6.wl.dataDevice =
            FUNC_13(VAR_6.wl.dataDeviceManager,
                                                   VAR_6.wl.seat);
        FUNC_12(VAR_6.wl.dataDevice, &VAR_7, ((void*)0));
        VAR_6.wl.clipboardString = FUNC_7(4096);
        if (!VAR_6.wl.clipboardString)
        {
            FUNC_2(VAR_2,
                            "Wayland: Unable to allocate clipboard memory");
            return VAR_1;
        }
        VAR_6.wl.clipboardSize = 4096;
    }

    return VAR_3;
}

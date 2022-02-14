
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct xkb_state {int dummy; } ;
struct xkb_keymap {int dummy; } ;
struct xkb_compose_table {int dummy; } ;
struct xkb_compose_state {int dummy; } ;
struct wl_keyboard {int dummy; } ;
struct TYPE_4__ {int controlMask; int altMask; int shiftMask; int superMask; int capsLockMask; int numLockMask; struct xkb_keymap* keymap; struct xkb_state* state; struct xkb_compose_state* composeState; int context; } ;
struct TYPE_5__ {TYPE_1__ xkb; } ;
struct TYPE_6__ {TYPE_2__ wl; } ;


 int VAR_0 ;
 char* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_3__ VAR_8 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int) ;
 char* FUNC_2 (char*) ;
 char* FUNC_3 (int *,scalar_t__,int ,int ,int,int ) ;
 int FUNC_4 (char*,scalar_t__) ;
 struct xkb_compose_state* FUNC_5 (struct xkb_compose_table*,int ) ;
 struct xkb_compose_table* FUNC_6 (int ,char const*,int ) ;
 int FUNC_7 (struct xkb_compose_table*) ;
 int FUNC_8 (struct xkb_keymap*,char*) ;
 struct xkb_keymap* FUNC_9 (int ,char*,int ,int ) ;
 int FUNC_10 (struct xkb_keymap*) ;
 struct xkb_state* FUNC_11 (struct xkb_keymap*) ;
 int FUNC_12 (struct xkb_state*) ;

__attribute__((used)) static void FUNC_13(void* VAR_9,
                                 struct wl_keyboard* VAR_10,
                                 uint32_t VAR_11,
                                 int VAR_12,
                                 uint32_t VAR_13)
{
    struct xkb_keymap* VAR_14;
    struct xkb_state* VAR_15;






    char* VAR_16;
    const char* VAR_17;

    if (VAR_11 != VAR_4)
    {
        FUNC_1(VAR_12);
        return;
    }

    VAR_16 = FUNC_3(((void*)0), VAR_13, VAR_3, VAR_2, VAR_12, 0);
    if (VAR_16 == VAR_1) {
        FUNC_1(VAR_12);
        return;
    }

    VAR_14 = FUNC_9(VAR_8.wl.xkb.context,
                                        VAR_16,
                                        VAR_7,
                                        0);
    FUNC_4(VAR_16, VAR_13);
    FUNC_1(VAR_12);

    if (!VAR_14)
    {
        FUNC_0(VAR_0,
                        "Wayland: Failed to compile keymap");
        return;
    }

    VAR_15 = FUNC_11(VAR_14);
    if (!VAR_15)
    {
        FUNC_0(VAR_0,
                        "Wayland: Failed to create XKB state");
        FUNC_10(VAR_14);
        return;
    }


    VAR_17 = FUNC_2("LC_ALL");
    if (!VAR_17)
        VAR_17 = FUNC_2("LC_CTYPE");
    if (!VAR_17)
        VAR_17 = FUNC_2("LANG");
    if (!VAR_17)
        VAR_17 = "C";
    FUNC_10(VAR_8.wl.xkb.keymap);
    FUNC_12(VAR_8.wl.xkb.state);
    VAR_8.wl.xkb.keymap = VAR_14;
    VAR_8.wl.xkb.state = VAR_15;

    VAR_8.wl.xkb.controlMask =
        1 << FUNC_8(VAR_8.wl.xkb.keymap, "Control");
    VAR_8.wl.xkb.altMask =
        1 << FUNC_8(VAR_8.wl.xkb.keymap, "Mod1");
    VAR_8.wl.xkb.shiftMask =
        1 << FUNC_8(VAR_8.wl.xkb.keymap, "Shift");
    VAR_8.wl.xkb.superMask =
        1 << FUNC_8(VAR_8.wl.xkb.keymap, "Mod4");
    VAR_8.wl.xkb.capsLockMask =
        1 << FUNC_8(VAR_8.wl.xkb.keymap, "Lock");
    VAR_8.wl.xkb.numLockMask =
        1 << FUNC_8(VAR_8.wl.xkb.keymap, "Mod2");
}

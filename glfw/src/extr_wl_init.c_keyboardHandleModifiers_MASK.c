
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int xkb_mod_mask_t ;
typedef int uint32_t ;
struct wl_keyboard {int dummy; } ;
struct TYPE_4__ {int controlMask; int altMask; int shiftMask; int superMask; int capsLockMask; int numLockMask; unsigned int modifiers; int state; int keymap; } ;
struct TYPE_5__ {TYPE_1__ xkb; int serial; } ;
struct TYPE_6__ {TYPE_2__ wl; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 TYPE_3__ VAR_10 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static void FUNC_2(void* VAR_11,
                                    struct wl_keyboard* VAR_12,
                                    uint32_t VAR_13,
                                    uint32_t VAR_14,
                                    uint32_t VAR_15,
                                    uint32_t VAR_16,
                                    uint32_t VAR_17)
{
    xkb_mod_mask_t VAR_18;
    unsigned int VAR_19 = 0;

    VAR_10.wl.serial = VAR_13;

    if (!VAR_10.wl.xkb.keymap)
        return;

    FUNC_1(VAR_10.wl.xkb.state,
                          VAR_14,
                          VAR_15,
                          VAR_16,
                          0,
                          0,
                          VAR_17);

    VAR_18 = FUNC_0(VAR_10.wl.xkb.state,
                                    VAR_8 |
                                    VAR_6 |
                                    VAR_9 |
                                    VAR_7);
    if (VAR_18 & VAR_10.wl.xkb.controlMask)
        VAR_19 |= VAR_2;
    if (VAR_18 & VAR_10.wl.xkb.altMask)
        VAR_19 |= VAR_0;
    if (VAR_18 & VAR_10.wl.xkb.shiftMask)
        VAR_19 |= VAR_4;
    if (VAR_18 & VAR_10.wl.xkb.superMask)
        VAR_19 |= VAR_5;
    if (VAR_18 & VAR_10.wl.xkb.capsLockMask)
        VAR_19 |= VAR_1;
    if (VAR_18 & VAR_10.wl.xkb.numLockMask)
        VAR_19 |= VAR_3;
    VAR_10.wl.xkb.modifiers = VAR_19;
}

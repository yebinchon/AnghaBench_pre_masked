
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ xcb_keycode_t ;
struct TYPE_2__ {scalar_t__ min_keycode; scalar_t__ max_keycode; } ;
typedef scalar_t__ KeySym ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ,scalar_t__,int) ;

__attribute__((used)) static bool FUNC_2(KeySym VAR_2, xcb_keycode_t VAR_3) {
    xcb_keycode_t VAR_4,
        VAR_5 = FUNC_0(VAR_0)->min_keycode,
        VAR_6 = FUNC_0(VAR_0)->max_keycode;

    for (VAR_4 = VAR_5; VAR_4 && VAR_4 <= VAR_6; VAR_4++) {
        if (VAR_4 == VAR_3)
            continue;
        for (int VAR_7 = 0; VAR_7 < 4; VAR_7++) {
            if (FUNC_1(VAR_1, VAR_4, VAR_7) != VAR_2)
                continue;
            return 1;
        }
    }
    return 0;
}

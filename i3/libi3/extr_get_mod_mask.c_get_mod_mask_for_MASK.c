
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ xcb_keycode_t ;
typedef int xcb_key_symbols_t ;
struct TYPE_4__ {int keycodes_per_modifier; } ;
typedef TYPE_1__ xcb_get_modifier_mapping_reply_t ;
typedef int uint32_t ;


 int FUNC_0 (scalar_t__*) ;
 scalar_t__* FUNC_1 (TYPE_1__*) ;
 scalar_t__* FUNC_2 (int *,int) ;

uint32_t FUNC_3(uint32_t VAR_0,
                          xcb_key_symbols_t *VAR_1,
                          xcb_get_modifier_mapping_reply_t *VAR_2) {
    xcb_keycode_t *VAR_3, *VAR_4;
    xcb_keycode_t VAR_5;

    VAR_4 = FUNC_1(VAR_2);


    if (!(VAR_3 = FUNC_2(VAR_1, VAR_0)))
        return 0;


    for (int VAR_6 = 0; VAR_6 < 8; VAR_6++)
        for (int VAR_7 = 0; VAR_7 < VAR_2->keycodes_per_modifier; VAR_7++) {

            VAR_5 = VAR_4[(VAR_6 * VAR_2->keycodes_per_modifier) + VAR_7];


            for (xcb_keycode_t *VAR_8 = VAR_3; *VAR_8; VAR_8++) {
                if (*VAR_8 != VAR_5)
                    continue;

                FUNC_0(VAR_3);

                return (1 << VAR_6);
            }
        }

    return 0;
}

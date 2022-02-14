
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_get_property_reply_t ;
typedef int uint32_t ;
typedef int i3Window ;
typedef int border_style_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
 size_t VAR_8 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;

void FUNC_3(i3Window *VAR_9, xcb_get_property_reply_t *VAR_10, border_style_t *VAR_11) {
    if (VAR_11 != ((void*)0))
        *VAR_11 = VAR_1;

    if (VAR_10 == ((void*)0) || FUNC_2(VAR_10) == 0) {
        FUNC_0(VAR_10);
        return;
    }
    uint32_t *VAR_12 = (uint32_t *)FUNC_1(VAR_10);

    if (VAR_11 != ((void*)0) &&
        VAR_12[0] & (1 << 1)) {
        if (VAR_12[2] & (1 << 0) ||
            VAR_12[2] & (1 << 3))
            *VAR_11 = VAR_1;
        else if (VAR_12[2] & (1 << 1))
            *VAR_11 = VAR_2;
        else
            *VAR_11 = VAR_0;
    }

    FUNC_0(VAR_10);







}

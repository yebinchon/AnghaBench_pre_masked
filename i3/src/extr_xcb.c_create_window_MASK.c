
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef void* xcb_window_t ;
typedef int xcb_void_cookie_t ;
typedef void* xcb_visualid_t ;
struct TYPE_11__ {int error_code; } ;
typedef TYPE_3__ xcb_generic_error_t ;
typedef void* xcb_cursor_t ;
typedef int xcb_connection_t ;
typedef void* uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_9__ {int id; } ;
struct TYPE_10__ {TYPE_1__ xcb; } ;
struct TYPE_12__ {TYPE_2__ specific; } ;
typedef TYPE_4__ i3Font ;
typedef enum xcursor_cursor_t { ____Placeholder_xcursor_cursor_t } xcursor_cursor_t ;
struct TYPE_13__ {int height; int width; int y; int x; } ;
typedef TYPE_5__ Rect ;


 int FUNC_0 (char*,int ) ;
 void* VAR_0 ;
 void* VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_4__ FUNC_1 (char*,int) ;
 int VAR_3 ;
 int FUNC_2 (int *,void*,void*,void**) ;
 int FUNC_3 (int *,void*,int ,int ,int,int,int ,int ,int ,int,int,int) ;
 int FUNC_4 (int *,scalar_t__,void*,int ,int ,int ,int ,int ,int ,scalar_t__,void*,void*,void**) ;
 int FUNC_5 (int *,void*) ;
 void* FUNC_6 (int *) ;
 int FUNC_7 (int *,void*) ;
 TYPE_3__* FUNC_8 (int *,int ) ;
 void* FUNC_9 (int) ;
 int FUNC_10 (int) ;
 scalar_t__ VAR_4 ;

xcb_window_t FUNC_11(xcb_connection_t *VAR_5, Rect VAR_6,
                           uint16_t VAR_7, xcb_visualid_t VAR_8, uint16_t VAR_9,
                           enum xcursor_cursor_t VAR_10, bool VAR_11, uint32_t VAR_12, uint32_t *VAR_13) {
    xcb_window_t VAR_14 = FUNC_6(VAR_5);



    if (VAR_9 == VAR_2) {
        VAR_7 = VAR_0;
        VAR_8 = VAR_0;
    }

    xcb_void_cookie_t VAR_15 = FUNC_4(VAR_5,
                                                    VAR_7,
                                                    VAR_14,
                                                    VAR_3,
                                                    VAR_6.x, VAR_6.y, VAR_6.width, VAR_6.height,
                                                    0,
                                                    VAR_9,
                                                    VAR_8,
                                                    VAR_12,
                                                    VAR_13);

    xcb_generic_error_t *VAR_16 = FUNC_8(VAR_5, VAR_15);
    if (VAR_16 != ((void*)0)) {
        FUNC_0("Could not create window. Error code: %d.\n", VAR_16->error_code);
    }


    if (VAR_4) {
        VAR_12 = VAR_1;
        VAR_13[0] = FUNC_9(VAR_10);
        FUNC_2(VAR_5, VAR_14, VAR_12, VAR_13);
    } else {
        xcb_cursor_t VAR_17 = FUNC_6(VAR_5);
        i3Font VAR_18 = FUNC_1("cursor", 0);
        int VAR_19 = FUNC_10(VAR_10);
        FUNC_3(VAR_5, VAR_17, VAR_18.specific.xcb.id,
                                VAR_18.specific.xcb.id, VAR_19, VAR_19 + 1, 0, 0, 0,
                                65535, 65535, 65535);
        FUNC_2(VAR_5, VAR_14, VAR_1, &VAR_17);
        FUNC_5(VAR_5, VAR_17);
    }


    if (VAR_11)
        FUNC_7(VAR_5, VAR_14);

    return VAR_14;
}

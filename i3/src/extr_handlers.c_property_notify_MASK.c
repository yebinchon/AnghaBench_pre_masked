
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int xcb_window_t ;
typedef int xcb_get_property_reply_t ;
typedef int xcb_get_property_cookie_t ;
typedef scalar_t__ xcb_atom_t ;
typedef scalar_t__ uint8_t ;
struct property_handler_t {scalar_t__ atom; int (* cb ) (int *,int ,scalar_t__,int ,scalar_t__,int *) ;int long_len; } ;


 int FUNC_0 (int *) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct property_handler_t* VAR_4 ;
 int FUNC_1 (int *,int ,scalar_t__,int ,scalar_t__,int *) ;
 int FUNC_2 (int ,int ,int ,scalar_t__,int ,int ,int ) ;
 int * FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static void FUNC_4(uint8_t VAR_5, xcb_window_t VAR_6, xcb_atom_t VAR_7) {
    struct property_handler_t *VAR_8 = ((void*)0);
    xcb_get_property_reply_t *VAR_9 = ((void*)0);

    for (size_t VAR_10 = 0; VAR_10 < VAR_0; VAR_10++) {
        if (VAR_4[VAR_10].atom != VAR_7)
            continue;

        VAR_8 = &VAR_4[VAR_10];
        break;
    }

    if (VAR_8 == ((void*)0)) {

        return;
    }

    if (VAR_5 != VAR_2) {
        xcb_get_property_cookie_t VAR_11 = FUNC_2(VAR_3, 0, VAR_6, VAR_7, VAR_1, 0, VAR_8->long_len);
        VAR_9 = FUNC_3(VAR_3, VAR_11, 0);
    }


    if (!VAR_8->cb(((void*)0), VAR_3, VAR_5, VAR_6, VAR_7, VAR_9))
        FUNC_0(VAR_9);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int xcb_window_t ;
typedef int xcb_get_property_reply_t ;
typedef int xcb_connection_t ;
typedef int xcb_atom_t ;
typedef int uint8_t ;
typedef int uint64_t ;
typedef scalar_t__ border_style_t ;
struct TYPE_5__ {scalar_t__ border_style; int current_border_width; int * window; } ;
typedef TYPE_1__ Con ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,TYPE_1__*,scalar_t__) ;
 int VAR_2 ;
 TYPE_1__* FUNC_1 (int ) ;
 int FUNC_2 (TYPE_1__*,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_3 (int *,int *,scalar_t__*) ;
 int FUNC_4 (int ) ;
 int * FUNC_5 (int *,int ,int *) ;
 int FUNC_6 (int *,int,int ,int ,int ,int ,int) ;

__attribute__((used)) static bool FUNC_7(void *VAR_4, xcb_connection_t *VAR_5, uint8_t VAR_6, xcb_window_t VAR_7,
                                      xcb_atom_t VAR_8, xcb_get_property_reply_t *VAR_9) {
    Con *VAR_10;
    if ((VAR_10 = FUNC_1(VAR_7)) == ((void*)0) || VAR_10->window == ((void*)0))
        return 0;

    if (VAR_9 == ((void*)0)) {
        VAR_9 = FUNC_5(VAR_5, FUNC_6(VAR_5, 0, VAR_7, VAR_0, VAR_2, 0, 5 * sizeof(uint64_t)),
                                      ((void*)0));

        if (VAR_9 == ((void*)0))
            return 0;
    }

    border_style_t VAR_11;
    FUNC_3(VAR_10->window, VAR_9, &VAR_11);

    if (VAR_11 != VAR_10->border_style && VAR_11 != VAR_1) {
        FUNC_0("Update border style of con %p to %d\n", VAR_10, VAR_11);
        FUNC_2(VAR_10, VAR_11, VAR_10->current_border_width);

        FUNC_4(VAR_3);
    }

    return 1;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int major_version; int minor_version; int error_code; } ;
typedef TYPE_1__ xcb_randr_query_version_reply_t ;
struct TYPE_9__ {int first_event; int present; } ;
typedef TYPE_2__ xcb_query_extension_reply_t ;
typedef TYPE_1__ xcb_generic_error_t ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (TYPE_1__*) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_6 () ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (int ,int *) ;
 int VAR_11 ;
 int FUNC_9 (int ,int ,int ) ;
 TYPE_1__* FUNC_10 (int ,int ,TYPE_1__**) ;
 int FUNC_11 (int ,int ,int) ;

void FUNC_12(int *VAR_12, const bool VAR_13) {
    const xcb_query_extension_reply_t *VAR_14;

    VAR_10 = FUNC_3(VAR_6);
    FUNC_2(&VAR_8, VAR_10, VAR_8);

    VAR_14 = FUNC_8(VAR_6, &VAR_11);
    if (!VAR_14->present) {
        FUNC_0("RandR is not present, activating root output.\n");
        FUNC_4();
        return;
    }

    xcb_generic_error_t *VAR_15;
    xcb_randr_query_version_reply_t *VAR_16 =
        FUNC_10(
            VAR_6, FUNC_9(VAR_6, VAR_0, VAR_1), &VAR_15);
    if (VAR_15 != ((void*)0)) {
        FUNC_1("Could not query RandR version: X11 error code %d\n", VAR_15->error_code);
        FUNC_5(VAR_15);
        FUNC_4();
        return;
    }

    VAR_7 = (VAR_16->major_version >= 1) &&
                    (VAR_16->minor_version >= 5) &&
                    !VAR_13;

    FUNC_5(VAR_16);

    FUNC_6();

    if (VAR_12 != ((void*)0))
        *VAR_12 = VAR_14->first_event;

    FUNC_11(VAR_6, VAR_9,
                           VAR_5 |
                               VAR_3 |
                               VAR_2 |
                               VAR_4);

    FUNC_7(VAR_6);
}

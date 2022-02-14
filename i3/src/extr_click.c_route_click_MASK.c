
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_37__ TYPE_4__ ;
typedef struct TYPE_36__ TYPE_3__ ;
typedef struct TYPE_35__ TYPE_2__ ;
typedef struct TYPE_34__ TYPE_1__ ;
typedef struct TYPE_33__ TYPE_12__ ;


typedef int xcb_generic_event_t ;
struct TYPE_35__ {scalar_t__ detail; scalar_t__ response_type; int state; int time; } ;
typedef TYPE_2__ xcb_button_press_event_t ;
typedef int position_t ;
typedef int click_destination_t ;
struct TYPE_37__ {scalar_t__ border; scalar_t__ whole_window; int exclude_titlebar; } ;
struct TYPE_36__ {TYPE_1__* parent; int name; int type; } ;
struct TYPE_34__ {scalar_t__ type; scalar_t__ layout; int focus_head; } ;
struct TYPE_33__ {int focus_head; } ;
typedef TYPE_3__ Con ;
typedef int CommandResult ;
typedef TYPE_4__ Binding ;


 int VAR_0 ;
 int VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 TYPE_3__* FUNC_1 (int *) ;
 int VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 TYPE_3__* FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (TYPE_3__*) ;
 int FUNC_6 (TYPE_3__*) ;
 TYPE_3__* FUNC_7 (TYPE_3__*) ;
 TYPE_3__* FUNC_8 (TYPE_3__*) ;
 int VAR_18 ;
 int FUNC_9 (TYPE_3__*,TYPE_2__*,int) ;
 scalar_t__ FUNC_10 (TYPE_3__*,TYPE_2__*) ;
 int FUNC_11 (TYPE_3__*,int const,TYPE_2__*) ;
 TYPE_3__* VAR_19 ;
 TYPE_4__* FUNC_12 (int *) ;
 TYPE_3__* FUNC_13 (TYPE_3__*,int const) ;
 TYPE_12__* FUNC_14 (int ) ;
 int * FUNC_15 (TYPE_4__*,TYPE_3__*) ;
 scalar_t__ FUNC_16 (TYPE_3__*,TYPE_2__*,int const,int) ;
 int FUNC_17 () ;
 int FUNC_18 (TYPE_3__*) ;
 int FUNC_19 (int ,int ,int ) ;
 int FUNC_20 (int ) ;

__attribute__((used)) static int FUNC_21(Con *VAR_20, xcb_button_press_event_t *VAR_21, const bool VAR_22, const click_destination_t VAR_23) {
    FUNC_0("--> click properties: mod = %d, destination = %d\n", VAR_22, VAR_23);
    FUNC_0("--> OUTCOME = %p\n", VAR_20);
    FUNC_0("type = %d, name = %s\n", VAR_20->type, VAR_20->name);


    if (VAR_20->parent->type == VAR_5)
        goto done;

    const bool VAR_24 = (VAR_21->detail == VAR_10 ||
                                         VAR_21->detail == VAR_11);



    if (VAR_23 == VAR_3 || VAR_23 == VAR_4 || VAR_23 == VAR_2) {
        Binding *VAR_25 = FUNC_12((xcb_generic_event_t *)VAR_21);

        if (VAR_25 != ((void*)0) && ((VAR_23 == VAR_3 && !VAR_25->exclude_titlebar) ||
                             (VAR_23 == VAR_4 && VAR_25->whole_window) ||
                             (VAR_23 == VAR_2 && VAR_25->border))) {
            CommandResult *VAR_26 = FUNC_15(VAR_25, VAR_20);


            FUNC_19(VAR_18, VAR_8, VAR_21->time);
            FUNC_20(VAR_18);

            FUNC_2(VAR_26);
            return 0;
        }
    }


    if (VAR_21->response_type == VAR_12) {
        goto done;
    }




    Con *VAR_27 = FUNC_7(VAR_20);
    Con *VAR_28 = FUNC_7(VAR_19);

    if (!VAR_27) {
        VAR_27 = FUNC_1(&(FUNC_14(FUNC_6(VAR_20))->focus_head));
        if (!VAR_27)
            goto done;
    }

    if (VAR_27 != VAR_28)
        FUNC_18(VAR_27);


    Con *VAR_29 = FUNC_8(VAR_20);
    const bool VAR_30 = (VAR_21->state & VAR_17) == VAR_17;
    const bool VAR_31 = (VAR_20->parent->layout == VAR_6 || VAR_20->parent->layout == VAR_7);
    const bool VAR_32 = VAR_19 == VAR_20;


    if (VAR_31 &&
        VAR_23 == VAR_3 &&
        (VAR_21->detail == VAR_16 ||
         VAR_21->detail == VAR_13 ||
         VAR_21->detail == VAR_14 ||
         VAR_21->detail == VAR_15)) {
        FUNC_0("Scrolling on a window decoration\n");


        Con *VAR_33 = FUNC_1(&(VAR_20->parent->focus_head));
        const position_t VAR_34 =
            (VAR_21->detail == VAR_16 || VAR_21->detail == VAR_14) ? VAR_1 : VAR_0;
        Con *VAR_35 = FUNC_13(VAR_33, VAR_34);
        FUNC_3(FUNC_4(VAR_35 ? VAR_35 : VAR_33));

        goto done;
    }


    FUNC_3(VAR_20);



    Con *VAR_36 = FUNC_5(VAR_27);
    if (VAR_29 != ((void*)0) && VAR_36 != VAR_20) {

        if (VAR_22 && VAR_21->detail == VAR_10) {
            FUNC_9(VAR_29, VAR_21, 0);
            return 1;
        }




        if (VAR_22 && VAR_21->detail == VAR_11) {
            FUNC_0("floating resize due to floatingmodifier\n");
            FUNC_11(VAR_29, VAR_30, VAR_21);
            return 1;
        }

        if (!VAR_31 && VAR_23 == VAR_3 &&
            VAR_24) {

            FUNC_0("tiling resize with fallback\n");
            if (FUNC_16(VAR_20, VAR_21, VAR_23, !VAR_32))
                goto done;
        }

        if (VAR_23 == VAR_3 && VAR_21->detail == VAR_11) {
            FUNC_0("floating resize due to decoration right click\n");
            FUNC_11(VAR_29, VAR_30, VAR_21);
            return 1;
        }

        if (VAR_23 == VAR_2 && VAR_24) {
            FUNC_0("floating resize due to border click\n");
            FUNC_11(VAR_29, VAR_30, VAR_21);
            return 1;
        }



        if (VAR_23 == VAR_3 && VAR_21->detail == VAR_10) {
            FUNC_9(VAR_29, VAR_21, !VAR_32);
            return 1;
        }

        goto done;
    }


    if (VAR_23 == VAR_4 && VAR_22 && VAR_21->detail == VAR_11) {
        if (FUNC_10(VAR_20, VAR_21))
            return 1;
    }

    else if ((VAR_23 == VAR_2 || VAR_23 == VAR_3) &&
             VAR_24) {
        FUNC_0("Trying to resize (tiling)\n");



        FUNC_17();
        FUNC_16(VAR_20, VAR_21, VAR_23, VAR_23 == VAR_3 && !VAR_32);
    }

done:
    FUNC_19(VAR_18, VAR_9, VAR_21->time);
    FUNC_20(VAR_18);
    FUNC_17();

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_29__ TYPE_1__ ;


typedef int position_t ;
typedef scalar_t__ orientation_t ;
typedef int direction_t ;
struct TYPE_29__ {scalar_t__ type; scalar_t__ fullscreen_mode; scalar_t__ layout; int deco_render_params; struct TYPE_29__* parent; int nodes_head; } ;
typedef TYPE_1__ Con ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*) ;
 scalar_t__ VAR_7 ;
 TYPE_1__* FUNC_3 (TYPE_1__*,int ) ;
 TYPE_1__* FUNC_4 (TYPE_1__*,int ,int ) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*,int *,int ) ;
 int FUNC_6 (TYPE_1__*,TYPE_1__*,int ) ;
 TYPE_1__* FUNC_7 (TYPE_1__*,int ) ;
 int FUNC_8 (TYPE_1__*) ;
 TYPE_1__* FUNC_9 (TYPE_1__*) ;
 scalar_t__ FUNC_10 (TYPE_1__*) ;
 scalar_t__ FUNC_11 (TYPE_1__*) ;
 int FUNC_12 (TYPE_1__*) ;
 int FUNC_13 (TYPE_1__*) ;
 scalar_t__ FUNC_14 (TYPE_1__*) ;
 TYPE_1__* FUNC_15 (TYPE_1__*,scalar_t__) ;
 int VAR_8 ;
 int FUNC_16 () ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_19 (char*,TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (TYPE_1__*,scalar_t__) ;

void FUNC_24(Con *VAR_11, direction_t VAR_12) {
    position_t VAR_13;
    Con *VAR_14;

    FUNC_0("Moving in direction %d\n", VAR_12);



    if (VAR_11->type == VAR_4) {
        FUNC_0("Not moving workspace\n");
        return;
    }

    if (VAR_11->fullscreen_mode == VAR_2) {
        FUNC_0("Not moving fullscreen global container\n");
        return;
    }

    if ((VAR_11->fullscreen_mode == VAR_3) ||
        (VAR_11->parent->type == VAR_4 && FUNC_13(VAR_11->parent) == 1)) {

        FUNC_20(VAR_11, VAR_12);
        return;
    }

    orientation_t VAR_15 = FUNC_21(VAR_12);

    Con *VAR_16 = FUNC_15(VAR_11, VAR_15);



    do {

        if (!VAR_16) {
            if (FUNC_11(VAR_11)) {

                FUNC_17(VAR_11);
                return;
            }
            if (FUNC_10(VAR_11)) {

                FUNC_0("Inside floating, moving to workspace\n");
                FUNC_6(VAR_11, FUNC_9(VAR_11), VAR_12);
                goto end;
            }
            FUNC_0("Force-changing orientation\n");
            FUNC_23(FUNC_9(VAR_11), VAR_15);
            VAR_16 = FUNC_15(VAR_11, VAR_15);
        }


        if (VAR_16 == VAR_11->parent) {
            Con *VAR_17 = (VAR_12 == VAR_5 || VAR_12 == VAR_6)
                            ? FUNC_4(VAR_11, VAR_10, VAR_9)
                            : FUNC_3(VAR_11, VAR_9);
            if (VAR_17) {
                if (!FUNC_12(VAR_17)) {
                    FUNC_0("Moving into our bordering branch\n");
                    VAR_14 = FUNC_7(VAR_17, VAR_12);
                    VAR_13 = (FUNC_14(VAR_14->parent) != VAR_15 ||
                                        VAR_12 == VAR_6 ||
                                        VAR_12 == VAR_5
                                    ? VAR_0
                                    : VAR_1);
                    FUNC_18(VAR_11, VAR_14, VAR_13);
                    goto end;
                }

                FUNC_0("Swapping with sibling.\n");
                if (VAR_12 == VAR_5 || VAR_12 == VAR_6) {
                    FUNC_5(VAR_17, VAR_11, &(VAR_17->parent->nodes_head), VAR_9);
                } else {
                    FUNC_5(VAR_11, VAR_17, &(VAR_17->parent->nodes_head), VAR_9);
                }

                FUNC_19("move", VAR_11);
                return;
            }

            if (VAR_11->parent == FUNC_9(VAR_11)) {


                FUNC_20(VAR_11, VAR_12);
                return;
            }



            VAR_16 = FUNC_15(VAR_11->parent, VAR_15);
        }
    } while (VAR_16 == ((void*)0));




    Con *VAR_18 = VAR_11;
    while (VAR_18->parent != VAR_16)
        VAR_18 = VAR_18->parent;


    if (!FUNC_8(VAR_18->parent)) {
        FUNC_2("Cannot move out of fullscreen container\n");
        return;
    }

    FUNC_0("above = %p\n", VAR_18);

    Con *VAR_19 = (VAR_12 == VAR_6 || VAR_12 == VAR_5 ? FUNC_4(VAR_18, VAR_10, VAR_9) : FUNC_3(VAR_18, VAR_9));

    if (VAR_19 && !FUNC_12(VAR_19)) {
        FUNC_0("Moving into the bordering branch of our adjacent container\n");
        VAR_14 = FUNC_7(VAR_19, VAR_12);
        VAR_13 = (FUNC_14(VAR_14->parent) != VAR_15 ||
                            VAR_12 == VAR_6 ||
                            VAR_12 == VAR_5
                        ? VAR_0
                        : VAR_1);
        FUNC_18(VAR_11, VAR_14, VAR_13);
    } else if (!VAR_19 &&
               VAR_11->parent->parent->type == VAR_4 &&
               VAR_11->parent->layout != VAR_7 &&
               FUNC_13(VAR_11->parent) == 1) {



        FUNC_0("Grandparent is workspace\n");
        FUNC_20(VAR_11, VAR_12);
        return;
    } else {
        FUNC_0("Moving into container above\n");
        VAR_13 = (VAR_12 == VAR_6 || VAR_12 == VAR_5 ? VAR_1 : VAR_0);
        FUNC_18(VAR_11, VAR_18, VAR_13);
    }

end:

    FUNC_1(VAR_11->deco_render_params);

    FUNC_19("move", VAR_11);
    FUNC_22(VAR_8);
    FUNC_16();
}

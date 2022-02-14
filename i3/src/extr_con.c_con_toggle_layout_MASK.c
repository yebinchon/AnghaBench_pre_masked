
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ layout_t ;
struct TYPE_6__ {scalar_t__ type; scalar_t__ layout; scalar_t__ last_split_layout; struct TYPE_6__* parent; } ;
typedef TYPE_1__ Con ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,TYPE_1__*,char const*,TYPE_1__*) ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (TYPE_1__*,scalar_t__) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char*,scalar_t__*) ;
 char* FUNC_5 (char const*) ;
 scalar_t__ FUNC_6 (char const*,char*) ;
 scalar_t__ FUNC_7 (char const*,char const*) ;
 char* FUNC_8 (char*,char const*) ;

void FUNC_9(Con *VAR_6, const char *VAR_7) {
    Con *VAR_8 = VAR_6;



    if (VAR_6->type != VAR_0)
        VAR_8 = VAR_6->parent;
    FUNC_0("con_toggle_layout(%p, %s), parent = %p\n", VAR_6, VAR_7, VAR_8);

    const char VAR_9[] = " ";

    if (FUNC_6(VAR_7, "split") == 0 || FUNC_7(VAR_7, VAR_9)) {


        layout_t VAR_10 = VAR_1;
        bool VAR_11 = 0;
        char *VAR_12 = FUNC_5(VAR_7);
        char *VAR_13 = FUNC_8(VAR_12, VAR_9);

        for (layout_t VAR_14; VAR_13 != ((void*)0); VAR_13 = FUNC_8(((void*)0), VAR_9)) {
            if (FUNC_6(VAR_13, "split") == 0) {



                if (VAR_8->layout != VAR_2 && VAR_8->layout != VAR_3) {
                    VAR_14 = VAR_8->last_split_layout;

                    if (VAR_14 == VAR_1) {
                        VAR_14 = VAR_2;
                    }
                } else {
                    VAR_14 = (VAR_8->layout == VAR_2) ? VAR_3 : VAR_2;
                }
            } else {
                bool VAR_15 = FUNC_4(VAR_13, &VAR_14);
                if (!VAR_15 || VAR_14 == VAR_1) {
                    FUNC_1("The token '%s' was not recognized and has been skipped.\n", VAR_13);
                    continue;
                }
            }



            if (VAR_10 == VAR_1) {
                VAR_10 = VAR_14;
            }



            if (VAR_11) {
                VAR_10 = VAR_14;
                break;
            }

            if (VAR_8->layout == VAR_14) {
                VAR_11 = 1;
            }
        }
        FUNC_3(VAR_12);

        if (VAR_10 != VAR_1) {
            FUNC_2(VAR_6, VAR_10);
        }
    } else if (FUNC_6(VAR_7, "all") == 0 || FUNC_6(VAR_7, "default") == 0) {
        if (VAR_8->layout == VAR_4)
            FUNC_2(VAR_6, VAR_5);
        else if (VAR_8->layout == VAR_5) {
            if (FUNC_6(VAR_7, "all") == 0)
                FUNC_2(VAR_6, VAR_2);
            else
                FUNC_2(VAR_6, VAR_8->last_split_layout);
        } else if (VAR_8->layout == VAR_2 || VAR_8->layout == VAR_3) {
            if (FUNC_6(VAR_7, "all") == 0) {



                if (VAR_8->layout == VAR_2)
                    FUNC_2(VAR_6, VAR_3);
                else
                    FUNC_2(VAR_6, VAR_4);
            } else {
                FUNC_2(VAR_6, VAR_4);
            }
        }
    }
}

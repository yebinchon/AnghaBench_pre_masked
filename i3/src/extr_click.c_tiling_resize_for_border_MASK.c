
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


typedef int xcb_button_press_event_t ;
typedef int orientation_t ;
typedef scalar_t__ direction_t ;
typedef int border_t ;
struct TYPE_7__ {scalar_t__ parent; } ;
typedef TYPE_1__ Con ;






 int FUNC_0 (char*,...) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (char*) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (TYPE_1__**,TYPE_1__**,scalar_t__,int) ;
 int FUNC_4 (TYPE_1__*,TYPE_1__*,int const,int *,int) ;
 int FUNC_5 () ;

__attribute__((used)) static bool FUNC_6(Con *VAR_6, border_t VAR_7, xcb_button_press_event_t *VAR_8, bool VAR_9) {
    FUNC_0("border = %d, con = %p\n", VAR_7, VAR_6);
    Con *VAR_10 = ((void*)0);
    Con *VAR_11 = VAR_6;
    direction_t VAR_12;
    switch (VAR_7) {
        case 130:
            VAR_12 = VAR_1;
            break;
        case 129:
            VAR_12 = VAR_2;
            break;
        case 128:
            VAR_12 = VAR_3;
            break;
        case 131:
            VAR_12 = VAR_0;
            break;
    }

    bool VAR_13 = FUNC_3(&VAR_11, &VAR_10, VAR_12, 0);
    if (!VAR_13) {
        FUNC_1("No second container in this direction found.\n");
        return 0;
    }

    FUNC_2(VAR_11 != VAR_10);
    FUNC_2(VAR_11->parent == VAR_10->parent);


    if (VAR_12 == VAR_3 || VAR_12 == VAR_1) {
        Con *VAR_14 = VAR_11;
        VAR_11 = VAR_10;
        VAR_10 = VAR_14;
    }

    const orientation_t VAR_15 = ((VAR_7 == 130 || VAR_7 == 129) ? VAR_4 : VAR_5);

    FUNC_4(VAR_11, VAR_10, VAR_15, VAR_8, VAR_9);

    FUNC_0("After resize handler, rendering\n");
    FUNC_5();
    return 1;
}

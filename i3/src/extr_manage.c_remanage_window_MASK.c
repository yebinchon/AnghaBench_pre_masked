
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef scalar_t__ xcb_window_t ;
struct TYPE_18__ {scalar_t__ managed_since; int id; } ;
struct TYPE_17__ {TYPE_4__* window; } ;
typedef int Match ;
typedef TYPE_1__ Con ;


 int FUNC_0 (char*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_1 (TYPE_4__*,TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (int ,TYPE_4__*,int **) ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*,TYPE_1__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_6 () ;
 int FUNC_7 (int ) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 int FUNC_10 (TYPE_4__*) ;
 int FUNC_11 (TYPE_1__*,TYPE_1__*) ;
 int FUNC_12 (int ,scalar_t__) ;

Con *FUNC_13(Con *VAR_3) {
    Match *VAR_4;
    Con *VAR_5 = FUNC_3(VAR_2, VAR_3->window, &VAR_4);
    if (VAR_5 == ((void*)0) || VAR_5->window == ((void*)0) || VAR_5->window == VAR_3->window) {
        FUNC_8(VAR_3->window);
        return VAR_3;
    }



    if (VAR_5->window->managed_since > VAR_3->window->managed_since) {
        FUNC_8(VAR_3->window);
        return VAR_3;
    }

    if (!FUNC_7(VAR_5->window->id)) {
        FUNC_0("Uh?! Container without a placeholder, but with a window, has swallowed this managed window?!\n");
    } else {
        FUNC_2(VAR_5);
    }
    FUNC_10(VAR_5->window);

    xcb_window_t VAR_6 = FUNC_1(VAR_3->window, VAR_5);

    FUNC_11(VAR_5, VAR_3);

    bool VAR_7 = (FUNC_4(VAR_5) != FUNC_4(VAR_3));

    FUNC_5(VAR_3, VAR_5);



    if (VAR_6 != VAR_0) {
        FUNC_12(VAR_1, VAR_6);
    }

    FUNC_8(VAR_5->window);

    if (VAR_7) {


        FUNC_9(VAR_5->window);

        FUNC_6();
    }

    return VAR_5;
}

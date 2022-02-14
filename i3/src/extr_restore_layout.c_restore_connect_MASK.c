
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ev_prepare {int dummy; } ;
struct ev_io {int dummy; } ;
typedef int placeholder_state ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (int *,int ,int ,int ) ;
 int FUNC_6 (int ,int *) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int *,int ) ;
 int FUNC_9 (int ,int *) ;
 int FUNC_10 (int ,int *) ;
 int FUNC_11 (int *) ;
 int VAR_2 ;
 int * VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_12 (int,int) ;
 int VAR_6 ;
 int * FUNC_13 (int *,int*) ;
 scalar_t__ FUNC_14 (int *) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int * VAR_7 ;
 int * VAR_8 ;

void FUNC_17(void) {
    if (VAR_3 != ((void*)0)) {


        FUNC_7(VAR_2, VAR_8);
        FUNC_10(VAR_2, VAR_7);

        placeholder_state *VAR_9;
        while (!FUNC_0(&VAR_6)) {
            VAR_9 = FUNC_1(&VAR_6);
            FUNC_2(&VAR_6, VAR_9, VAR_9);
            FUNC_11(VAR_9);
        }





        FUNC_15(VAR_3);
        FUNC_11(VAR_8);
        FUNC_11(VAR_7);
    }

    int VAR_10;
    VAR_3 = FUNC_13(((void*)0), &VAR_10);
    if (VAR_3 == ((void*)0) || FUNC_14(VAR_3)) {
        if (VAR_3 != ((void*)0)) {
            FUNC_15(VAR_3);
        }



        FUNC_4(VAR_1, "Cannot open display");
    }

    VAR_8 = FUNC_12(1, sizeof(struct ev_io));
    VAR_7 = FUNC_12(1, sizeof(struct ev_prepare));

    FUNC_5(VAR_8, VAR_4, FUNC_16(VAR_3), VAR_0);
    FUNC_6(VAR_2, VAR_8);

    FUNC_8(VAR_7, VAR_5);
    FUNC_9(VAR_2, VAR_7);
}

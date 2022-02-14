
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ev_timer {int * data; } ;
struct Startup_Sequence {int * context; void* workspace; void* id; } ;
struct TYPE_3__ {char const* name; } ;
typedef int SnLauncherContext ;
typedef TYPE_1__ Con ;


 int FUNC_0 (char*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,struct Startup_Sequence*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int) ;
 TYPE_1__* FUNC_4 (int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_5 (struct ev_timer*,int ,double,int) ;
 int FUNC_6 (int ,struct ev_timer*) ;
 int FUNC_7 (int ,int ,char*,char const*,int *) ;
 int VAR_8 ;
 scalar_t__ FUNC_8 () ;
 int FUNC_9 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* FUNC_10 (int,int) ;
 int VAR_13 ;
 int FUNC_11 (char*,int ,int) ;
 int FUNC_12 (int ,int *) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,int ) ;
 char const* FUNC_15 (int *) ;
 int FUNC_16 (int *,char*,char*,int ) ;
 int * FUNC_17 (int ,int ) ;
 int FUNC_18 (int *) ;
 int FUNC_19 (int *,char*) ;
 int FUNC_20 (int *,char*) ;
 int FUNC_21 (int *) ;
 int VAR_14 ;
 void* FUNC_22 (char const*) ;
 int VAR_15 ;
 int VAR_16 ;
 char* FUNC_23 (char*,char) ;
 int FUNC_24 (char*) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 scalar_t__ VAR_17 ;

void FUNC_28(const char *VAR_18, bool VAR_19) {
    SnLauncherContext *VAR_20 = ((void*)0);

    if (!VAR_19) {


        VAR_20 = FUNC_17(VAR_14, VAR_6);
        FUNC_20(VAR_20, "i3");
        FUNC_19(VAR_20, "exec command in i3");


        char *VAR_21 = FUNC_22(VAR_18);
        char *VAR_22 = FUNC_23(VAR_21, ' ');
        if (VAR_22)
            *VAR_22 = '\0';
        FUNC_16(VAR_20, "i3", VAR_21, VAR_9);
        FUNC_9(VAR_21);


        struct ev_timer *VAR_23 = FUNC_10(1, sizeof(struct ev_timer));
        FUNC_5(VAR_23, VAR_16, 60.0, 0.);
        VAR_23->data = VAR_20;
        FUNC_6(VAR_11, VAR_23);

        FUNC_0("startup id = %s\n", FUNC_15(VAR_20));



        Con *VAR_24 = FUNC_4(VAR_8);
        struct Startup_Sequence *VAR_25 = FUNC_10(1, sizeof(struct Startup_Sequence));
        VAR_25->id = FUNC_22(FUNC_15(VAR_20));
        VAR_25->workspace = FUNC_22(VAR_24->name);
        VAR_25->context = VAR_20;
        FUNC_1(&VAR_15, VAR_25, VAR_13);




        FUNC_18(VAR_20);
    }

    FUNC_0("executing: %s\n", VAR_18);
    if (FUNC_8() == 0) {

        FUNC_13();
        FUNC_12(VAR_0, &VAR_12);


        for (int VAR_26 = VAR_1;
             VAR_26 < (VAR_1 + VAR_10);
             VAR_26++) {
            FUNC_3(VAR_26);
        }
        FUNC_24("LISTEN_PID");
        FUNC_24("LISTEN_FDS");
        FUNC_14(VAR_2, VAR_3);
        if (FUNC_8() == 0) {

            if (!VAR_19)
                FUNC_21(VAR_20);
            FUNC_11("I3SOCK", VAR_7, 1);

            FUNC_7(VAR_5, VAR_5, "-c", VAR_18, ((void*)0));

        }
        FUNC_2(0);
    }
    FUNC_25(0);

    if (!VAR_19) {

        if (VAR_17)
            FUNC_27(VAR_4);
        else
            FUNC_26(VAR_4);
    }
}

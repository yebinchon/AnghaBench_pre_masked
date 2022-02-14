
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sockaddr_un {char* sun_path; int sun_family; } ;
struct sockaddr {int dummy; } ;
struct option {char* member_0; char* name; int member_3; int member_2; int const member_1; } ;
struct ev_loop {int dummy; } ;
typedef int pid_t ;
typedef int ev_io ;
typedef int ev_child ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int,struct sockaddr*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (int *,int ,int,int ) ;
 int FUNC_5 (struct ev_loop*,int *) ;
 struct ev_loop* FUNC_6 (int ) ;
 int FUNC_7 (int *,int ,int,int ) ;
 int FUNC_8 (struct ev_loop*,int *) ;
 int FUNC_9 (struct ev_loop*,int ) ;
 int FUNC_10 (char*,char**) ;
 int FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int,int ,int ) ;
 int FUNC_13 () ;
 int FUNC_14 (int ,char*,char*) ;
 int FUNC_15 (char*) ;
 int VAR_9 ;
 int FUNC_16 (int,char**,char*,struct option*,int*) ;
 int VAR_10 ;
 int FUNC_17 (int,int) ;
 int FUNC_18 (struct sockaddr_un*,int ,int) ;
 int FUNC_19 (int ,int *) ;
 int VAR_11 ;
 int VAR_12 ;

 int FUNC_20 (char**,char*,int) ;
 int FUNC_21 (char*,char*,int) ;
 int FUNC_22 (char*,int,char*,int) ;
 int FUNC_23 (int ,int ,int ) ;
 int FUNC_24 (char*) ;
 int VAR_13 ;
 int FUNC_25 (char const*,char*) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_26 (char*,...) ;

int FUNC_27(int VAR_16, char *VAR_17[]) {
    static struct option VAR_18[] = {
        {"getmonitors_reply", 128, 0, 0},
        {"getoutputinfo_reply", 128, 0, 0},
        {0, 0, 0, 0},
    };
    char *VAR_19 = "";
    int VAR_20;
    int VAR_21 = 0;

    while ((VAR_20 = FUNC_16(VAR_16, VAR_17, VAR_19, VAR_18, &VAR_21)) != -1) {
        switch (VAR_20) {
            case 0: {
                const char *VAR_22 = VAR_18[VAR_21].name;
                if (FUNC_25(VAR_22, "getmonitors_reply") == 0) {
                    FUNC_19(VAR_11, &VAR_9);
                } else if (FUNC_25(VAR_22, "getoutputinfo_reply") == 0) {
                    FUNC_19(VAR_11, &VAR_10);
                }
                break;
            }
            default:
                FUNC_11(VAR_3);
        }
    }

    if (VAR_12 >= VAR_16) {
        FUNC_3(VAR_3, "syntax: %s [options] <command>", VAR_17[0]);
    }

    int VAR_23 = FUNC_23(VAR_0, VAR_6, 0);
    if (VAR_23 == -1) {
        FUNC_2(VAR_3, "socket(AF_UNIX)");
    }

    if (FUNC_12(VAR_23, VAR_5, VAR_4)) {
        FUNC_26("Could not set FD_CLOEXEC");
    }

    struct sockaddr_un VAR_24;
    FUNC_18(&VAR_24, 0, sizeof(struct sockaddr_un));
    VAR_24.sun_family = VAR_1;
    int VAR_25;
    bool VAR_26 = 0;
    for (VAR_25 = 0; VAR_25 < 100; VAR_25++) {



        FUNC_22(VAR_24.sun_path, sizeof(VAR_24.sun_path), "/tmp/.X11-unix/X%d", VAR_25);

        if (FUNC_1(VAR_23, (struct sockaddr *)&VAR_24, sizeof(struct sockaddr_un)) == -1) {
            FUNC_26("bind(%s)", VAR_24.sun_path);
        } else {
            VAR_26 = 1;


            FUNC_14(VAR_13, "Successfuly bound to %s\n", VAR_24.sun_path);
            VAR_14 = FUNC_24(VAR_24.sun_path);
            break;
        }
    }

    if (!VAR_26) {
        FUNC_2(VAR_3, "bind()");
    }

    FUNC_0(VAR_8);



    if (FUNC_17(VAR_23, 1) == -1) {
        FUNC_2(VAR_3, "listen()");
    }

    pid_t VAR_27 = FUNC_13();
    if (VAR_27 == -1) {
        FUNC_2(VAR_3, "fork()");
    }
    if (VAR_27 == 0) {
        char *VAR_28;
        FUNC_20(&VAR_28, ":%d", VAR_25);
        FUNC_21("DISPLAY", VAR_28, 1);
        FUNC_15(VAR_28);

        char **VAR_29 = VAR_17 + VAR_12;
        FUNC_10(VAR_29[0], VAR_29);
        FUNC_2(VAR_3, "exec()");
    }

    struct ev_loop *VAR_30 = FUNC_6(0);

    ev_child VAR_31;
    FUNC_4(&VAR_31, VAR_7, VAR_27, 0);
    FUNC_5(VAR_30, &VAR_31);

    ev_io VAR_32;
    FUNC_7(&VAR_32, VAR_15, VAR_23, VAR_2);
    FUNC_8(VAR_30, &VAR_32);

    FUNC_9(VAR_30, 0);
}

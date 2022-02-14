
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct option {char* member_0; char member_3; int * member_2; int const member_1; } ;
struct addrinfo {int ai_addrlen; int ai_addr; int ai_flags; int ai_protocol; int ai_socktype; } ;
typedef int reuseaddr_flag ;
typedef int hints ;
typedef int h2o_socket_t ;
struct TYPE_2__ {int max_cwnd; int min_rtt; } ;
typedef int EC_KEY ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 char* FUNC_2 (int) ;
 int FUNC_3 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int *) ;
 int FUNC_8 (int ,char*,int ) ;
 int FUNC_9 (int ,char*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int VAR_14 ;
 scalar_t__ FUNC_14 (int,int ,int ) ;
 int VAR_15 ;
 int FUNC_15 (int) ;
 int FUNC_16 (int ,char*,...) ;
 char* FUNC_17 (int) ;
 int FUNC_18 (char*,char*,struct addrinfo*,struct addrinfo**) ;
 int FUNC_19 (int,char**,char*,struct option const*,int *) ;
 int FUNC_20 () ;
 int FUNC_21 (int ,int ) ;
 int * FUNC_22 (int ,int,int ) ;
 int * FUNC_23 (int ,int ,int ,int ) ;
 int FUNC_24 (int *,int ) ;
 char* VAR_16 ;
 TYPE_1__ VAR_17 ;
 scalar_t__ FUNC_25 (int,int ) ;
 int VAR_18 ;
 int FUNC_26 (struct addrinfo*,int ,int) ;
 int VAR_19 ;

 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 char* VAR_24 ;

 scalar_t__ FUNC_27 (int,int ,int ,int*,int) ;
 int * VAR_25 ;
 int FUNC_28 (int ,int ,int ) ;
 int FUNC_29 (int ,char*,int *) ;
 int VAR_26 ;
 int VAR_27 ;
 char* FUNC_30 (char*,char) ;
 char* FUNC_31 (char*) ;
 char* FUNC_32 (int ) ;
 int FUNC_33 (char*) ;
 int FUNC_34 () ;
 int FUNC_35 (int ,int ) ;
 int VAR_28 ;

int FUNC_36(int VAR_29, char **VAR_30)
{
    static const struct option VAR_31[] = {{"listen", 129, ((void*)0), 'l'},
                                             {"reverse-role", 129, ((void*)0), 'r'},
                                             {"tls", 129, ((void*)0), 't'},
                                             {"block-size", 129, ((void*)0), 'b'},
                                             {"min-rtt", 128, ((void*)0), 'R'},
                                             {"max-cwnd", 128, ((void*)0), 'c'},
                                             {}};
    int VAR_32, VAR_33 = 0, VAR_34 = 0, VAR_35 = 0;
    struct addrinfo VAR_36, *VAR_37 = ((void*)0);
    int VAR_38;

    while ((VAR_32 = FUNC_19(VAR_29, VAR_30, "lrtb:R:c:", VAR_31, ((void*)0))) != -1) {
        switch (VAR_32) {
        case 'l':
            VAR_33 = 1;
            break;
        case 'r':
            VAR_34 = 1;
            break;
        case 't':
            VAR_35 = 1;
            break;
        case 'b':
            if (FUNC_29(VAR_22, "%zu", &VAR_28) != 1) {
                FUNC_16(VAR_27, "write block size (-b) must be a non-negative number of octets\n");
                FUNC_15(1);
            }
            break;
        case 'R':
            if (FUNC_29(VAR_22, "%u", &VAR_17.min_rtt) != 1) {
                FUNC_16(VAR_27, "min RTT (-m) must be a non-negative number in milliseconds\n");
                FUNC_15(1);
            }
            break;
        case 'c':
            if (FUNC_29(VAR_22, "%u", &VAR_17.max_cwnd) != 1) {
                FUNC_16(VAR_27, "max CWND size must be a non-negative number of octets\n");
                FUNC_15(1);
            }
            break;
        default:
            FUNC_33(VAR_30[0]);
            break;
        }
    }
    VAR_19 = VAR_33;
    if (VAR_34)
        VAR_19 = !VAR_19;

    if (VAR_29 == VAR_23) {
        FUNC_33(VAR_30[0]);
    } else {
        char *VAR_39 = VAR_30[VAR_23], *VAR_40;
        if ((VAR_40 = FUNC_30(VAR_39, ':')) != ((void*)0)) {
            VAR_39 = VAR_30[VAR_23];
            VAR_16 = FUNC_31(VAR_39);
            VAR_16[VAR_40 - VAR_39] = '\0';
            VAR_24 = VAR_40 + 1;
        } else {
            VAR_16 = "0.0.0.0";
            VAR_24 = VAR_30[VAR_23];
        }
    }

    if (VAR_35) {
        FUNC_11();
        FUNC_10();
        FUNC_3();
        if (VAR_19) {
            VAR_26 = FUNC_4(FUNC_13());
            FUNC_9(VAR_26, "examples/h2o/server.crt");
            FUNC_8(VAR_26, "examples/h2o/server.key", VAR_10);
        } else {
            VAR_26 = FUNC_4(FUNC_12());
        }
        int VAR_41 = VAR_5;
        EC_KEY *VAR_42 = FUNC_1(VAR_41);
        if (VAR_42 == ((void*)0)) {
            FUNC_16(VAR_27, "Failed to create curve \"%s\"\n", FUNC_2(VAR_41));
            FUNC_15(1);
        }
        FUNC_7(VAR_26, VAR_42);
        FUNC_0(VAR_42);
        FUNC_6(VAR_26, VAR_11 | VAR_12 | VAR_13);
        FUNC_5(VAR_26, "ECDHE-RSA-AES128-GCM-SHA256");
    }




    VAR_18 = FUNC_20();



    FUNC_26(&VAR_36, 0, sizeof(VAR_36));
    VAR_36.ai_socktype = VAR_6;
    VAR_36.ai_protocol = VAR_4;
    VAR_36.ai_flags = VAR_1;
    if ((VAR_38 = FUNC_18(VAR_16, VAR_24, &VAR_36, &VAR_37)) != 0) {
        FUNC_16(VAR_27, "failed to resolve %s:%s:%s\n", VAR_16, VAR_24, FUNC_17(VAR_38));
        FUNC_15(1);
    }

    if (VAR_33) {
        int VAR_43, VAR_44 = 1;
        if ((VAR_43 = FUNC_28(VAR_0, VAR_6, 0)) == -1 ||
            FUNC_27(VAR_43, VAR_7, VAR_9, &VAR_44, sizeof(VAR_44)) != 0 ||
            FUNC_14(VAR_43, VAR_37->ai_addr, VAR_37->ai_addrlen) != 0 || FUNC_25(VAR_43, VAR_8) != 0) {
            FUNC_16(VAR_27, "failed to listen to %s:%s:%s\n", VAR_16, VAR_24, FUNC_32(VAR_15));
            FUNC_15(1);
        }
        h2o_socket_t *VAR_45 = FUNC_22(VAR_18, VAR_43, VAR_2);
        FUNC_24(VAR_45, VAR_20);
    } else {
        if ((VAR_25 = FUNC_23(VAR_18, VAR_37->ai_addr, VAR_37->ai_addrlen, VAR_21)) == ((void*)0)) {
            FUNC_16(VAR_27, "failed to create socket:%s\n", FUNC_32(VAR_15));
            FUNC_15(1);
        }
    }

    while (1) {



        FUNC_21(VAR_18, VAR_3);

    }

    return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* path; } ;
struct TYPE_3__ {char* host; int port; } ;
struct config {int type; TYPE_2__ unix_sock; TYPE_1__ tcp; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int) ;
 int VAR_5 ;
 int FUNC_2 (int ,char*,char*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ) ;
 int VAR_6 ;
 int FUNC_5 (char*,char*) ;
 int FUNC_6 (struct config) ;
 int FUNC_7 (struct config) ;
 int FUNC_8 () ;
 int FUNC_9 (struct config) ;
 int FUNC_10 (struct config) ;
 int FUNC_11 () ;
 int FUNC_12 () ;
 int FUNC_13 (struct config) ;
 int FUNC_14 () ;
 int FUNC_15 (struct config) ;

int FUNC_16(int VAR_7, char **VAR_8) {
    struct config VAR_9 = {
        .tcp = {
            .host = "127.0.0.1",
            .port = 6379
        },
        .unix_sock = {
            .path = "/tmp/redis.sock"
        }
    };
    int VAR_10 = 1;
    int VAR_11 = 1;


    FUNC_4(VAR_3, VAR_4);


    VAR_8++; VAR_7--;
    while (VAR_7) {
        if (VAR_7 >= 2 && !FUNC_5(VAR_8[0],"-h")) {
            VAR_8++; VAR_7--;
            VAR_9.tcp.host = VAR_8[0];
        } else if (VAR_7 >= 2 && !FUNC_5(VAR_8[0],"-p")) {
            VAR_8++; VAR_7--;
            VAR_9.tcp.port = FUNC_0(VAR_8[0]);
        } else if (VAR_7 >= 2 && !FUNC_5(VAR_8[0],"-s")) {
            VAR_8++; VAR_7--;
            VAR_9.unix_sock.path = VAR_8[0];
        } else if (VAR_7 >= 1 && !FUNC_5(VAR_8[0],"--skip-throughput")) {
            VAR_10 = 0;
        } else if (VAR_7 >= 1 && !FUNC_5(VAR_8[0],"--skip-inherit-fd")) {
            VAR_11 = 0;
        } else {
            FUNC_2(VAR_6, "Invalid argument: %s\n", VAR_8[0]);
            FUNC_1(1);
        }
        VAR_8++; VAR_7--;
    }

    FUNC_11();
    FUNC_14();
    FUNC_8();
    FUNC_12();

    FUNC_3("\nTesting against TCP connection (%s:%d):\n", VAR_9.tcp.host, VAR_9.tcp.port);
    VAR_9.type = VAR_1;
    FUNC_7(VAR_9);
    FUNC_9(VAR_9);
    FUNC_10(VAR_9);
    FUNC_13(VAR_9);
    FUNC_6(VAR_9);
    if (VAR_10) FUNC_15(VAR_9);

    FUNC_3("\nTesting against Unix socket connection (%s):\n", VAR_9.unix_sock.path);
    VAR_9.type = VAR_2;
    FUNC_7(VAR_9);
    FUNC_9(VAR_9);
    FUNC_10(VAR_9);
    if (VAR_10) FUNC_15(VAR_9);

    if (VAR_11) {
        FUNC_3("\nTesting against inherited fd (%s):\n", VAR_9.unix_sock.path);
        VAR_9.type = VAR_0;
        FUNC_7(VAR_9);
    }


    if (VAR_5) {
        FUNC_3("*** %d TESTS FAILED ***\n", VAR_5);
        return 1;
    }

    FUNC_3("ALL TESTS PASSED\n");
    return 0;
}

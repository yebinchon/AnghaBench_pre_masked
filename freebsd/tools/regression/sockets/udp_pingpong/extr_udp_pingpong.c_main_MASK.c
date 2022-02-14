
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 () ;
 int FUNC_3 (int ,int,int,char*) ;

int
FUNC_4(void)
{
    int VAR_6;

    FUNC_2();

    for (VAR_6 = 0; VAR_6 < 2; VAR_6++) {
        FUNC_3(0, VAR_6, 0, "send()/recv()");
        FUNC_1("OK\n");
        FUNC_3(VAR_4, VAR_6, 1,
          "send()/recvmsg(), setsockopt(SO_TIMESTAMP, 1)");
        FUNC_1("OK\n");
        if (VAR_6 == 0) {
            FUNC_3(VAR_0, VAR_6, 1,
              "send()/recvmsg(), setsockopt(SO_BINTIME, 1)");
            FUNC_1("OK\n");
        }
        FUNC_3(VAR_3, VAR_6, 1,
          "send()/recvmsg(), setsockopt(SO_TS_CLOCK, SO_TS_REALTIME_MICRO)");
        FUNC_1("OK\n");
        FUNC_3(VAR_5, VAR_6, 1,
          "send()/recvmsg(), setsockopt(SO_TS_CLOCK, SO_TS_BINTIME)");
        FUNC_1("OK\n");
        FUNC_3(VAR_2, VAR_6, 1,
          "send()/recvmsg(), setsockopt(SO_TS_CLOCK, SO_TS_REALTIME)");
        FUNC_1("OK\n");
        FUNC_3(VAR_1, VAR_6, 1,
          "send()/recvmsg(), setsockopt(SO_TS_CLOCK, SO_TS_MONOTONIC)");
        FUNC_1("OK\n");
    }
    FUNC_0(0);
}

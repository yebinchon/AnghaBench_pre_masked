
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uv_uid_t ;
typedef scalar_t__ uv_gid_t ;
typedef int ssize_t ;
typedef int out ;
typedef int fd ;
typedef int buffer ;
typedef int HANDLE ;
typedef int DWORD ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ,char const*,int,int *,int *) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (char*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_4 (char*,int,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*,int ) ;
 int FUNC_7 (int) ;
 char* FUNC_8 (char*) ;
 scalar_t__ FUNC_9 () ;
 scalar_t__ FUNC_10 () ;
 int FUNC_11 (int) ;
 int FUNC_12 () ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 int FUNC_15 () ;
 int FUNC_16 () ;
 int FUNC_17 () ;
 int FUNC_18 () ;
 int FUNC_19 (int ) ;
 int FUNC_20 (char*) ;
 int FUNC_21 (int ,int*,int) ;
 int FUNC_22 (char*,int ,int) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_25 () ;
 int VAR_4 ;
 scalar_t__ FUNC_26 (char*,char*) ;
 int FUNC_27 (int) ;
 int FUNC_28 (int,char const*,int) ;

__attribute__((used)) static int FUNC_29(int VAR_5, char **VAR_6) {
  if (FUNC_26(VAR_6[1], "--list") == 0) {
    FUNC_19(VAR_4);
    return 0;
  }

  if (FUNC_26(VAR_6[1], "ipc_helper_listen_before_write") == 0) {
    return FUNC_11(0);
  }

  if (FUNC_26(VAR_6[1], "ipc_helper_listen_after_write") == 0) {
    return FUNC_11(1);
  }

  if (FUNC_26(VAR_6[1], "ipc_helper_heavy_traffic_deadlock_bug") == 0) {
    return FUNC_14();
  }

  if (FUNC_26(VAR_6[1], "ipc_send_recv_helper") == 0) {
    return FUNC_17();
  }

  if (FUNC_26(VAR_6[1], "ipc_helper_tcp_connection") == 0) {
    return FUNC_16();
  }

  if (FUNC_26(VAR_6[1], "ipc_helper_closed_handle") == 0) {
    return FUNC_13();
  }

  if (FUNC_26(VAR_6[1], "ipc_helper_bind_twice") == 0) {
    return FUNC_12();
  }

  if (FUNC_26(VAR_6[1], "ipc_helper_send_zero") == 0) {
    return FUNC_15();
  }

  if (FUNC_26(VAR_6[1], "stdio_over_pipes_helper") == 0) {
    return FUNC_25();
  }

  if (FUNC_26(VAR_6[1], "spawn_helper1") == 0) {
    FUNC_18();
    return 1;
  }

  if (FUNC_26(VAR_6[1], "spawn_helper2") == 0) {
    FUNC_18();
    FUNC_20("hello world\n");
    return 1;
  }

  if (FUNC_26(VAR_6[1], "spawn_tcp_server_helper") == 0) {
    FUNC_18();
    return FUNC_24();
  }

  if (FUNC_26(VAR_6[1], "spawn_helper3") == 0) {
    char VAR_7[256];
    FUNC_18();
    FUNC_0(VAR_7 == FUNC_4(VAR_7, sizeof(VAR_7) - 1, VAR_3));
    VAR_7[sizeof(VAR_7) - 1] = '\0';
    FUNC_6(VAR_7, VAR_4);
    return 1;
  }

  if (FUNC_26(VAR_6[1], "spawn_helper4") == 0) {
    FUNC_18();

    while (1) FUNC_27(10000);
  }

  if (FUNC_26(VAR_6[1], "spawn_helper5") == 0) {
    const char VAR_8[] = "fourth stdio!\n";
    FUNC_18();
    {




      ssize_t VAR_9;

      do
        VAR_9 = FUNC_28(3, VAR_8, sizeof(VAR_8) - 1);
      while (VAR_9 == -1 && VAR_1 == VAR_0);

      FUNC_7(3);

    }
    return 1;
  }

  if (FUNC_26(VAR_6[1], "spawn_helper6") == 0) {
    int VAR_10;

    FUNC_18();

    VAR_10 = FUNC_5(VAR_4, "hello world\n");
    FUNC_0(VAR_10 > 0);

    VAR_10 = FUNC_5(VAR_2, "hello errworld\n");
    FUNC_0(VAR_10 > 0);

    return 1;
  }

  if (FUNC_26(VAR_6[1], "spawn_helper7") == 0) {
    int VAR_11;
    char *VAR_12;

    FUNC_18();


    VAR_12 = FUNC_8("ENV_TEST");
    FUNC_0(VAR_12 != ((void*)0));

    VAR_11 = FUNC_5(VAR_4, "%s", VAR_12);
    FUNC_0(VAR_11 > 0);

    return 1;
  }


  if (FUNC_26(VAR_6[1], "spawn_helper8") == 0) {
    int VAR_13;

    FUNC_18();
    FUNC_0(sizeof(VAR_13) == FUNC_21(0, &VAR_13, sizeof(VAR_13)));
    FUNC_0(VAR_13 > 2);
    FUNC_0(-1 == FUNC_28(VAR_13, "x", 1));

    return 1;
  }


  if (FUNC_26(VAR_6[1], "spawn_helper9") == 0) {
    FUNC_18();
    FUNC_23();
    return 1;
  }


  if (FUNC_26(VAR_6[1], "spawn_helper_setuid_setgid") == 0) {
    uv_uid_t VAR_14 = FUNC_3(VAR_6[2]);
    uv_gid_t VAR_15 = FUNC_3(VAR_6[3]);

    FUNC_0(VAR_14 == FUNC_10());
    FUNC_0(VAR_15 == FUNC_9());
    FUNC_18();

    return 1;
  }


  return FUNC_22(VAR_6[1], 0, 1);
}

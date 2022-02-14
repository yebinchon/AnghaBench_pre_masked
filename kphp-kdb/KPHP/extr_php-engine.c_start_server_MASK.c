
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct conn_query {int dummy; } ;
struct TYPE_8__ {struct conn_query* first_query; } ;
struct TYPE_7__ {int * rpc_ready; } ;
struct TYPE_6__ {int s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 long long VAR_7 ;
 long long VAR_8 ;
 long long VAR_9 ;
 long long VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 long long VAR_14 ;
 long long VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 (int) ;
 int VAR_19 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int,int *,TYPE_3__*) ;
 int FUNC_6 () ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;
 int VAR_24 ;
 int FUNC_7 () ;
 int FUNC_8 (int,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (scalar_t__,int *,int ,int,int ) ;
 int FUNC_11 (long long,int ) ;
 double FUNC_12 () ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 () ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 void* FUNC_17 (char*,int,int *) ;
 int FUNC_18 () ;
 int FUNC_19 () ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 scalar_t__ VAR_28 ;
 int FUNC_20 () ;
 int FUNC_21 (scalar_t__,int *,int *) ;
 int FUNC_22 (scalar_t__,int *,int *,int ) ;
 int FUNC_23 () ;
 int FUNC_24 () ;
 int * VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 scalar_t__ VAR_32 ;
 int VAR_33 ;
 TYPE_4__ VAR_34 ;
 long long VAR_35 ;
 int VAR_36 ;
 int FUNC_25 (int*) ;
 int VAR_37 ;
 double VAR_38 ;
 int FUNC_26 (int,int*,int) ;
 scalar_t__ VAR_39 ;
 int FUNC_27 () ;
 int VAR_40 ;
 char* VAR_41 ;
 TYPE_3__ VAR_42 ;
 int VAR_43 ;
 void* VAR_44 ;
 void* VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 scalar_t__ VAR_48 ;
 int VAR_49 ;
 int FUNC_28 () ;
 scalar_t__ VAR_50 ;
 int VAR_51 ;
 scalar_t__ FUNC_29 (int,TYPE_1__,int ,int ) ;
 int FUNC_30 () ;
 TYPE_1__ VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 long long VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 scalar_t__ VAR_59 ;
 double VAR_60 ;
 int VAR_61 ;
 scalar_t__ VAR_62 ;
 int VAR_63 ;
 int FUNC_31 (scalar_t__*,scalar_t__ (*) (),int) ;
 scalar_t__ FUNC_32 () ;
 char* VAR_64 ;
 scalar_t__ VAR_65 ;
 int FUNC_33 (int,char*,...) ;
 int FUNC_34 (int,int*,size_t) ;
 int FUNC_35 () ;

void FUNC_36 (void) {
  int VAR_66;
  int VAR_67;
  double VAR_68 = 0;

  if (VAR_50) {
    VAR_30 = 0;
    VAR_47 = -1;
    VAR_27 = -1;
    VAR_43 = -1;
  }

  VAR_35 = 0;
  if (VAR_23) {
    FUNC_30();

    FUNC_11 (VAR_7, VAR_53);
    FUNC_27();
  }
  if (VAR_30) {
    FUNC_33 (-1, "master\n");
    if (VAR_47 != -1) {
      FUNC_33 (-1, "rpc_port is ignored in master mode\n");
      VAR_47 = -1;
    }

    if (0 && VAR_27 != -1) {
      FUNC_33 (-1, "http_port is ignored in master mode\n");
      VAR_27 = -1;
    }
  }

  FUNC_23();

  FUNC_20();
  if (VAR_30) {
    FUNC_31 (VAR_27 > 0 ? &VAR_28 : ((void*)0), &FUNC_32, VAR_27);

    if (VAR_29 != ((void*)0)) {
      FUNC_27();
    }
  }

  VAR_67 = 0;

  if (VAR_27 > 0 && VAR_28 < 0) {
    FUNC_8 (!VAR_30, "failed to get http_fd\n");
    if (VAR_30) {
      FUNC_33 (-1, "try_get_http_fd after start_master\n");
      FUNC_16 (1);
    }
    VAR_28 = FUNC_32();
    if (VAR_28 < 0) {
      FUNC_33 (-1, "cannot open http server socket at port %d: %m\n", VAR_27);
      FUNC_16 (1);
    }
  }

  if (VAR_47 > 0 && VAR_48 < 0) {
    VAR_48 = FUNC_29 (VAR_47, VAR_52, VAR_19, 0);
    if (VAR_48 < 0) {
      FUNC_33 (-1, "cannot open rpc server socket at port %d: %m\n", VAR_47);
      FUNC_16 (1);
    }
  }

  if (VAR_65 > 0 && VAR_28 >= 0) {
    FUNC_33 (-1, "created listening socket at %s:%d, fd=%d\n", FUNC_3 (VAR_52.s_addr, ((void*)0)), VAR_37, VAR_28);
  }

  if (FUNC_1 (VAR_64) < 0) {
    FUNC_33 (-1, "fatal: cannot change user to %s\n", VAR_64 ? VAR_64 : "(none)");
    FUNC_16 (1);
  }

  if (VAR_28 >= 0) {
    FUNC_22 (VAR_28, &VAR_20, &VAR_26, VAR_17);
  }

  if (VAR_48 >= 0) {
    FUNC_21 (VAR_48, &VAR_21, &VAR_46);
  }

  if (VAR_32) {
    VAR_63 = -1;
  } else {
    VAR_63 = FUNC_17 ("localhost", 3306, &VAR_24);
    FUNC_0 (VAR_63 != -1);
  }

  if ((VAR_41 != ((void*)0)) ^ (VAR_43 != -1)) {
    FUNC_33 (-1, "warning: only rpc_client_host or rpc_client_port is defined\n");
  }
  if (VAR_41 != ((void*)0) && VAR_43 != -1) {
    FUNC_33 (-1, "create rpc client target: %s:%d\n", VAR_41, VAR_43);
    VAR_44 = FUNC_17 (VAR_41, VAR_43, &VAR_40);
    VAR_45 = VAR_44;
  }

  if (VAR_50) {
    int VAR_69[2];
    FUNC_25 (VAR_69);

    int VAR_70 = VAR_69[0];
    int VAR_71 = VAR_69[1];

    VAR_42.rpc_ready = ((void*)0);
    FUNC_5 (VAR_70, &VAR_22, &VAR_42);

    int VAR_72[6];
    int VAR_73 = 6 * sizeof (int);
    VAR_72[2] = VAR_3;
    int VAR_74;
    for (VAR_74 = 0; VAR_74 < VAR_51; VAR_74++) {
      FUNC_26 (VAR_74, VAR_72, VAR_73);
      FUNC_0 (FUNC_34 (VAR_71, VAR_72, (size_t)VAR_73) == VAR_73);
    }
  }

  FUNC_18();


  FUNC_11 (VAR_14, VAR_58);
  FUNC_11 (VAR_9, VAR_16);
  FUNC_11 (VAR_8, VAR_54);
  FUNC_11 (VAR_15, VAR_61);
  FUNC_11 (VAR_10, VAR_56);


  FUNC_0 (VAR_12 <= VAR_13 && VAR_13 <= VAR_11);
  FUNC_10 (VAR_13, ((void*)0), FUNC_9(), VAR_6 | VAR_4 | VAR_5, VAR_57);

  FUNC_7();

  FUNC_33 (1, "Server started\n");
  for (VAR_66 = 0; !(VAR_35 & ~((1ll << VAR_15) | (1ll << VAR_7))); VAR_66++) {
    if (VAR_65 > 0 && !(VAR_66 & 255)) {
      FUNC_33 (1, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
          VAR_18, VAR_31, VAR_2, VAR_0, VAR_1);
    }
    FUNC_15 (57);

    if (VAR_38 > VAR_68) {
      FUNC_4();
      VAR_68 = VAR_38 + 0.03 + 0.02 * FUNC_12();
    }

    while (VAR_62 > 0) {
      FUNC_35();
      VAR_62--;
    }

    if (VAR_55 > 0) {
      FUNC_33 (1, "after epoll_work(), sigpoll_cnt=%d\n", VAR_55);
      VAR_55 = 0;
    }

    if (VAR_35 & (1ll << VAR_7)) {
      VAR_35 &= ~(1ll << VAR_7);
    }

    if (VAR_35 & (1ll << VAR_15)) {
      VAR_35 &= ~(1ll << VAR_15);

      FUNC_27();
    }

    if (VAR_33 != VAR_67) {
      VAR_67 = VAR_33;
      FUNC_6();
    }

    FUNC_24();
    if (VAR_59 && !VAR_49) {
      FUNC_28();
    }
    if (VAR_59 && !VAR_25) {
      FUNC_19();
    }

    if (&FUNC_14) {
      FUNC_14();
    }

    if (VAR_39 && !--VAR_39) break;

    if (VAR_59 && VAR_38 > VAR_60 && !VAR_36 &&
        VAR_34.first_query == (struct conn_query *)&VAR_34) {
      FUNC_33 (1, "Quitting because of sigterm\n");
      break;
    }
  }

  if (VAR_65 > 0 && VAR_35) {
    FUNC_33 (1, "Quitting because of pending signals = %llx\n", VAR_35);
  }

  if (VAR_28 >= 0) {
    FUNC_13 (VAR_28);
    FUNC_0 (FUNC_2 (VAR_28) >= 0);
  }
}

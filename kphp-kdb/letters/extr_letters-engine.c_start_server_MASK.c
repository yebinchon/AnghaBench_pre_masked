
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 long long VAR_3 ;
 long long VAR_4 ;
 long long VAR_5 ;
 long long VAR_6 ;
 long long VAR_7 ;
 long long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 char* FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 () ;
 int FUNC_11 (scalar_t__,int *,int *) ;
 int FUNC_12 () ;
 int VAR_15 ;
 int VAR_16 ;
 long long VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_13 () ;
 int VAR_20 ;
 scalar_t__ FUNC_14 (int,TYPE_1__,int ,int ) ;
 int FUNC_15 () ;
 TYPE_1__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_16 (long long,int ) ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_17 () ;
 char* VAR_30 ;
 int VAR_31 ;

void FUNC_18 (void) {
  int VAR_32;
  int VAR_33;

  FUNC_10();
  FUNC_12();

  VAR_33 = 0;

  if (!VAR_22) {
    VAR_22 = FUNC_14 (VAR_18, VAR_21, VAR_11, 0);
  }

  if (VAR_22 < 0) {
    FUNC_9 (VAR_29, "cannot open server socket at port %d: %m\n", VAR_18);
    FUNC_7 (3);
  }

  if (VAR_31 > 0) {
    FUNC_9 (VAR_29, "created listening socket at %s:%d, fd=%ld\n", FUNC_3 (VAR_21.s_addr, VAR_12), VAR_18, VAR_22);
  }

  if (VAR_14) {
    FUNC_15();
  }

  if (FUNC_1 (VAR_30) < 0) {
    FUNC_9 (VAR_29, "fatal: cannot change user to %s\n", VAR_30 ? VAR_30 : "(none)");
    FUNC_7 (1);
  }

  FUNC_11 (VAR_22, &VAR_13, &VAR_20);

  FUNC_16 (VAR_4, VAR_24);
  FUNC_16 (VAR_7, VAR_27);
  FUNC_16 (VAR_8, VAR_28);
  FUNC_16 (VAR_5, VAR_9);
  FUNC_16 (VAR_6, VAR_26);
  if (VAR_14) {
    FUNC_16 (VAR_3, VAR_23);
    FUNC_13();
  }

  if (VAR_31 > 0) {
    FUNC_9 (VAR_29, "Server started\n");
  }

  for (VAR_32 = 0; !(VAR_17 & ~((1ll << VAR_8) | (1ll << VAR_3))); VAR_32++) {
    if (VAR_31 > 0 && !(VAR_32 & 255)) {
      FUNC_9 (VAR_29, "epoll_work(): %d out of %d connections, network bufers: %d used, %d out of %d allocated\n",
         VAR_10, VAR_15, VAR_2, VAR_0, VAR_1);
    }
    FUNC_6 (57);

    if (VAR_25 > 0) {
      if (VAR_31 > 1) {
        FUNC_9 (VAR_29, "after epoll_work(), sigpoll_cnt=%d\n", VAR_25);
      }
      VAR_25 = 0;
    }

    if (VAR_17 & (1ll << VAR_3)) {
      VAR_17 &= ~(1ll << VAR_3);

      FUNC_8 (1);
    }

    if (VAR_17 & (1ll << VAR_8)) {
      VAR_17 &= ~(1ll << VAR_8);

      FUNC_13();
      FUNC_8 (1);
    }

    FUNC_17();

    if (VAR_16 != VAR_33) {
      VAR_33 = VAR_16;
      FUNC_4();
    }

    if (VAR_19 && !--VAR_19) break;
  }

  if (VAR_31 > 0 && VAR_17) {
    FUNC_9 (VAR_29, "Quitting because of pending signals = %llx\n", VAR_17);
  }

  FUNC_5 (VAR_22);
  FUNC_0 (FUNC_2 (VAR_22) >= 0);
}

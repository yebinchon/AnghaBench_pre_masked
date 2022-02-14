
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int s_addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (scalar_t__) ;
 char* FUNC_2 (int ,char*) ;
 int VAR_11 ;
 int FUNC_3 () ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 () ;
 int FUNC_9 (scalar_t__,int *,int *) ;
 int FUNC_10 () ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ FUNC_11 (int,TYPE_1__,int ,int ) ;
 int FUNC_12 () ;
 TYPE_1__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int FUNC_13 (int ,int ) ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 char* VAR_26 ;
 scalar_t__ VAR_27 ;

void FUNC_14 (void) {

  char VAR_28[64];
  int VAR_29;
  int VAR_30;

  FUNC_8();
  FUNC_10();

  VAR_30 = 0;

  if (!VAR_20) {
    VAR_20 = FUNC_11 (VAR_17, VAR_19, VAR_10, 0);
  }

  if (VAR_20 < 0) {
    FUNC_7(VAR_25, "cannot open server socket at port %d: %m\n", VAR_17);
    FUNC_6(3);
  }

  if (VAR_27) {
    FUNC_7 (VAR_25, "created listening socket at %s:%d, fd=%ld\n", FUNC_2(VAR_19.s_addr, VAR_28), VAR_17, VAR_20);
  }

  if (VAR_13) {
    FUNC_12();
  }

  if (FUNC_0(VAR_26) < 0 && !VAR_14) {
    FUNC_7 (VAR_25, "fatal: cannot change user to %s\n", VAR_26 ? VAR_26 : "(none)");
    FUNC_6(1);
  }

  FUNC_9 (VAR_20, &VAR_12, &VAR_11);

  FUNC_13(VAR_4, VAR_22);
  FUNC_13(VAR_6, VAR_23);
  FUNC_13(VAR_7, VAR_24);
  if (VAR_13) {
    FUNC_13(VAR_3, VAR_21);
  }
  FUNC_13(VAR_5, VAR_8);

  for (VAR_29 = 0; ; VAR_29++) {
    if (VAR_27 > 0 && !(VAR_29 & 255)) {
      FUNC_7 (VAR_25, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
        VAR_9, VAR_15, VAR_2, VAR_0, VAR_1);
    }
    FUNC_5 (53);

    if (VAR_16 != VAR_30) {
      VAR_30 = VAR_16;
      FUNC_3();
    }
    if (VAR_18 && !--VAR_18) break;
  }

  FUNC_4 (VAR_20);
  FUNC_1(VAR_20);
}

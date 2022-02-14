
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
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (int) ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 int FUNC_5 (int) ;
 double FUNC_6 () ;
 scalar_t__ VAR_17 ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int) ;
 int FUNC_10 (int) ;
 int FUNC_11 () ;
 int FUNC_12 (int ,char*,...) ;
 int FUNC_13 () ;
 int FUNC_14 () ;
 scalar_t__ FUNC_15 (scalar_t__,int *,int *,scalar_t__) ;
 int FUNC_16 (int ) ;
 int FUNC_17 () ;
 int FUNC_18 (scalar_t__,int,int *,int *,scalar_t__) ;
 int FUNC_19 (char*,scalar_t__) ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 double VAR_23 ;
 scalar_t__ VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 scalar_t__ FUNC_20 (int,int ,int ,scalar_t__) ;
 int FUNC_21 () ;
 int VAR_29 ;
 scalar_t__ VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int FUNC_22 (int ,int ) ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 char* VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;

void FUNC_23 (void) {

  int VAR_41;
  int VAR_42;
  double VAR_43 = 0;

  FUNC_14();
  FUNC_17();
  FUNC_16 (0);

  VAR_42 = 0;

  if (VAR_15) {
    FUNC_21 ();
  }

  if (FUNC_1 (VAR_38) < 0) {
    FUNC_12 (VAR_36, "fatal: cannot change user to %s\n", VAR_38 ? VAR_38 : "(none)");
    FUNC_9 (1);
  }

  if (!VAR_30) {
    VAR_30 = FUNC_20 (VAR_22, VAR_29, VAR_11, VAR_17 );
  }

  if (VAR_30 < 0) {
    FUNC_12 (VAR_36, "cannot open server socket at port %d: %m\n", VAR_22);
    FUNC_9 (1);
  }

  if (!VAR_39) {
    VAR_39 = FUNC_20 (VAR_22, VAR_29, VAR_11, VAR_17 + 1);
  }

  if (VAR_39 < 0) {
    FUNC_12 (VAR_36, "cannot open udp port: %m\n");
    FUNC_9 (1);
  }

  if (!VAR_37) {
    FUNC_0 (FUNC_15 (VAR_30, &VAR_13, &VAR_25, VAR_17) >= 0);
  } else {
    FUNC_0 (FUNC_15 (VAR_30, &VAR_14, &VAR_26, VAR_17) >= 0);
  }

  FUNC_0 ((VAR_16 = FUNC_18 (VAR_39, VAR_22, &VAR_27, &VAR_28, VAR_17)));

  FUNC_13 ();

  FUNC_3 ();

  FUNC_22 (VAR_4, VAR_32);
  FUNC_22 (VAR_6, VAR_33);
  FUNC_22 (VAR_7, VAR_34);
  FUNC_22 (VAR_8, VAR_35);
  FUNC_22 (VAR_5, VAR_9);
  if (VAR_15) {
    FUNC_22 (VAR_3, VAR_31);
  }

  for (VAR_41 = 0; ; VAR_41++) {
    if (VAR_40 > 0 && !(VAR_41 & 255)) {
      FUNC_12 (VAR_36, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
         VAR_10, VAR_18, VAR_2, VAR_0, VAR_1);
    }
    FUNC_8 (57);
    if (VAR_23 > VAR_43) {
      FUNC_3 ();
      VAR_43 = VAR_23 + 0.05 + 0.02 * FUNC_6();
    }
    if (VAR_20 != VAR_42) {
      VAR_42 = VAR_20;
      FUNC_4 ();
    }
    if (VAR_21) {
      break;
    }
    if (VAR_19) {
      FUNC_5 (1);
    }
    if (VAR_12) {
      FUNC_10 (0);
    }
    if (VAR_24 && !--VAR_24) break;
  }

  FUNC_7 (VAR_30);
  FUNC_2(VAR_30);

  if (VAR_12) {
    FUNC_10 (2);
    FUNC_11 ();
  }
  FUNC_19 ("Terminated (pending_signals = 0x%llx).\n", VAR_21);

}

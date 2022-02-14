
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
 scalar_t__ FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_4 (int) ;
 double FUNC_5 () ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int ,char*,...) ;
 int FUNC_10 () ;
 int FUNC_11 (int ,int *,int *) ;
 int FUNC_12 () ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 double VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_13 () ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int FUNC_14 (int ,int ) ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 char* VAR_31 ;
 scalar_t__ VAR_32 ;

void FUNC_15 (void) {

  int VAR_33;
  int VAR_34;
  double VAR_35 = 0;

  FUNC_10();
  FUNC_12();

  VAR_34 = 0;

  if (VAR_13) {
    FUNC_13();
  }

  if (FUNC_0 (VAR_31) < 0 && !VAR_30) {
    FUNC_9 (VAR_29, "fatal: cannot change user to %s\n", VAR_31 ? VAR_31 : "(none)");
    FUNC_8(1);
  }

  FUNC_11 (VAR_23, &VAR_12, &VAR_14);

  if (VAR_17) {
    FUNC_11 (VAR_18, &VAR_11, &VAR_15);
  }

  FUNC_2 ();

  FUNC_14(VAR_4, VAR_25);
  FUNC_14(VAR_6, VAR_26);
  FUNC_14(VAR_7, VAR_27);
  FUNC_14(VAR_8, VAR_28);
  FUNC_14(VAR_5, VAR_9);
  if (VAR_13) {
    FUNC_14(VAR_3, VAR_24);
  }

  for (VAR_33 = 0; ; VAR_33++) {
    if (VAR_32 > 0 && !(VAR_33 & 255)) {
      FUNC_9 (VAR_29, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
        VAR_10, VAR_16, VAR_2, VAR_0, VAR_1);
    }
    FUNC_7 (50);
    if (VAR_21 > VAR_35) {
      FUNC_2 ();
      VAR_35 = VAR_21 + 0.03 + 0.02 * FUNC_5();
    }
    if (VAR_20 != VAR_34) {
      VAR_34 = VAR_20;
      FUNC_3();
    }
    if (VAR_19) {
      FUNC_4 (1);
    }
    if (VAR_22 && !--VAR_22) break;
  }

  FUNC_6 (VAR_23);
  FUNC_1(VAR_23);


}

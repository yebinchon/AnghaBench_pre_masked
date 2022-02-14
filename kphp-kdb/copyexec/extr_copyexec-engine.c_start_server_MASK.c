
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_flags; int sa_mask; int sa_handler; } ;
typedef int sigset_t ;


 int VAR_0 ;
 long long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 long long VAR_6 ;
 long long VAR_7 ;
 long long VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 long long VAR_12 ;
 long long VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_16 ;
 int VAR_17 ;
 scalar_t__ VAR_18 ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 () ;
 int VAR_19 ;
 int FUNC_4 () ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int) ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 int FUNC_11 () ;
 int FUNC_12 (scalar_t__,int *,int *) ;
 int FUNC_13 () ;
 scalar_t__ FUNC_14 () ;
 int FUNC_15 (scalar_t__,long long) ;
 int FUNC_16 (char*,...) ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 long long VAR_26 ;
 int FUNC_17 (int *,long long) ;
 scalar_t__ VAR_27 ;
 int FUNC_18 () ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ FUNC_19 (scalar_t__,int ,int ,int ) ;
 int FUNC_20 () ;
 int VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ FUNC_21 (int,struct sigaction*,int *) ;
 int FUNC_22 (int *,long long) ;
 int FUNC_23 (int *) ;
 scalar_t__ FUNC_24 (int *,int) ;
 int FUNC_25 (int ,int ) ;
 int FUNC_26 (int) ;
 int FUNC_27 (long long) ;
 int FUNC_28 () ;
 int FUNC_29 (long long) ;
 int FUNC_30 (int,char*,long long,...) ;

void FUNC_31 (void) {
  int VAR_32, VAR_33 = 0;

  FUNC_11 ();

  if (!VAR_31 && VAR_27 >= 0) {
    VAR_31 = FUNC_19 (VAR_27, VAR_30, VAR_16, 0);
    if (VAR_31 < 0) {
      FUNC_16 ("cannot open server socket at port %d: %m\n", VAR_27);
      FUNC_7 (3);
    }
    FUNC_13 ();
  }

  if (VAR_21) {
    FUNC_20 ();
    FUNC_18 ();
  }

  FUNC_30 (1, "%s\n", VAR_1);

  if (VAR_18 && !VAR_17) {
    FUNC_30 (3, "log_readto_pos: %lld\n", VAR_22);
    FUNC_1 (FUNC_0 (VAR_0) == VAR_22);
  }

  VAR_32 = FUNC_8 ();
  FUNC_30 (1, "found %d running transactions\n", VAR_32);

  FUNC_3 ();

  if (VAR_31) {
    FUNC_12 (VAR_31, &VAR_20, &VAR_24);
  }

  FUNC_25 (VAR_10, VAR_14);
  FUNC_25 (VAR_9, VAR_14);

  sigset_t VAR_34;
  FUNC_23 (&VAR_34);
  FUNC_22 (&VAR_34, VAR_8);
  FUNC_22 (&VAR_34, VAR_12);
  FUNC_22 (&VAR_34, VAR_13);
  FUNC_22 (&VAR_34, VAR_6);
  if (VAR_21) {
    FUNC_22 (&VAR_34, VAR_7);
  }
  struct sigaction VAR_35;
  VAR_35.sa_handler = VAR_19;
  VAR_35.sa_mask = VAR_34;
  VAR_35.sa_flags = VAR_5;
  for (VAR_32 = 1; VAR_32 <= VAR_11; VAR_32++) {
    if (FUNC_24 (&VAR_34, VAR_32)) {
      if (FUNC_21 (VAR_32, &VAR_35, ((void*)0)) < 0) {
        FUNC_16 ("sigaction (%d) failed. %m\n", VAR_32);
        FUNC_7 (1);
      }
    }
  }

  int VAR_36 = 0;

  for (VAR_32 = 0; ; VAR_32++) {
    if (!(VAR_32 & 1023)) {
      FUNC_30 (2, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
        VAR_15, VAR_23, VAR_4, VAR_2, VAR_3);
    }
    FUNC_6 (77);

    if (FUNC_14 ()) {
      break;
    }

    if (VAR_26 & (1LL << VAR_6)) {
      FUNC_17 (&VAR_34, VAR_6);
      FUNC_16 ("got SIGCHLD.\n");
      FUNC_28 ();
    }

    if (VAR_26 & (1LL << VAR_7)) {
      FUNC_17 (&VAR_34, VAR_7);
      FUNC_16 ("got SIGHUP.\n");
      FUNC_26 (2);
    }

    if (VAR_26 & (1LL << VAR_13)) {
      FUNC_17 (&VAR_34, VAR_13);
      FUNC_16 ("got SIGUSR1, rotate logs.\n");
      FUNC_18 ();
      FUNC_29 (VAR_13);
      FUNC_27 (VAR_13);
      if (VAR_29 && VAR_28 && VAR_28 == FUNC_10 (VAR_29)) {
        FUNC_15 (VAR_29, VAR_13);
      }

      FUNC_26 (2);
    }

    if (VAR_25 != VAR_33) {
      VAR_33 = VAR_25;
      FUNC_4 ();
    }

    if (VAR_36 && !--VAR_36) break;
  }

  if (VAR_31) {
    FUNC_5 (VAR_31);
    FUNC_2 (VAR_31);
  }

  FUNC_9 ();
  FUNC_26 (2);
  FUNC_30 (0, "Main process terminated (pending_signals: 0x%llx).\n", VAR_26);
}


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
 scalar_t__ FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 () ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int) ;
 int FUNC_7 (int ,char*,...) ;
 int FUNC_8 () ;
 int FUNC_9 (int ,int *,int *) ;
 int FUNC_10 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 int FUNC_11 () ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int FUNC_12 (int ,int ) ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 char* VAR_25 ;
 scalar_t__ VAR_26 ;

void FUNC_13 (void) {
  int VAR_27;
  int VAR_28;

  FUNC_8();
  FUNC_10();

  VAR_28 = 0;

  if (VAR_12) {
    FUNC_11();
  }

  if (FUNC_1 (VAR_25) < 0 && !VAR_13) {
    FUNC_7 (VAR_24, "fatal: cannot change user to %s\n", VAR_25 ? VAR_25 : "(none)");
    FUNC_6 (1);
  }

  FUNC_9 (VAR_18, &VAR_11, &VAR_15);

  FUNC_12 (VAR_4, VAR_20);
  FUNC_12 (VAR_7, VAR_22);
  FUNC_12 (VAR_8, VAR_23);
  FUNC_12 (VAR_6, VAR_21);
  FUNC_12 (VAR_5, VAR_9);
  if (VAR_12) {
    FUNC_12 (VAR_3, VAR_19);
  }

  for (VAR_27 = 0; ; VAR_27++) {
    if (VAR_26 > 0 && !(VAR_27 & 255)) {
      FUNC_7 (VAR_24, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
         VAR_10, VAR_14, VAR_2, VAR_0, VAR_1);
    }
    FUNC_5 (57);
    if (VAR_16 != VAR_28) {
      VAR_28 = VAR_16;
      FUNC_3();
    }
    if (VAR_17 && !--VAR_17) break;
  }

  FUNC_4 (VAR_18);
  FUNC_0 (FUNC_2 (VAR_18) >= 0);
}

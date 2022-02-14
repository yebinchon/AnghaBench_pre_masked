
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
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ,char*,char*) ;
 int FUNC_7 () ;
 int FUNC_8 (int ,int *,int *) ;
 int FUNC_9 () ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_10 () ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_11 (int ,int ) ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 char* VAR_22 ;
 int FUNC_12 (int,char*,int ,int ,int ,int ,int ) ;

void FUNC_13 (void) {
  int VAR_23;
  int VAR_24;

  FUNC_7 ();
  FUNC_9 ();

  VAR_24 = 0;

  if (VAR_12) {
    FUNC_10();
  }

  if (FUNC_0(VAR_22) < 0) {
    FUNC_6 (VAR_21, "fatal: cannot change user to %s\n", VAR_22 ? VAR_22 : "(none)");
    FUNC_5 (1);
  }

  FUNC_8 (VAR_16, &VAR_11, &VAR_14);

  FUNC_11 (VAR_4, VAR_18);
  FUNC_11 (VAR_7, VAR_19);
  FUNC_11 (VAR_8, VAR_20);
  FUNC_11 (VAR_6, VAR_9);
  FUNC_11 (VAR_5, VAR_9);
  if (VAR_12) {
    FUNC_11 (VAR_3, VAR_17);
  }

  int VAR_25 = 0;

  for (VAR_23 = 0; ; VAR_23++) {
    if (!(VAR_23 & 255)) {
      FUNC_12 (1, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
        VAR_10, VAR_13, VAR_2, VAR_0, VAR_1);
    }
    FUNC_4 (57);

    if (VAR_15 != VAR_24) {
      VAR_24 = VAR_15;
      FUNC_2();
    }
    if (VAR_25 && !--VAR_25) break;
  }

  FUNC_3 (VAR_16);
  FUNC_1 (VAR_16);

}

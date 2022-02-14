
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
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (char*) ;
 int FUNC_2 () ;
 int VAR_6 ;
 int FUNC_3 () ;
 int FUNC_4 () ;
 int FUNC_5 (int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int) ;
 scalar_t__ VAR_7 ;
 int FUNC_8 (scalar_t__,char*,char*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 () ;
 int FUNC_11 () ;
 int FUNC_12 (char*,...) ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 scalar_t__ VAR_12 ;
 char* FUNC_13 (char*) ;
 int FUNC_14 (char*) ;
 int VAR_13 ;
 int FUNC_15 (int ,int ) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_16 (char*) ;
 char* VAR_16 ;
 int FUNC_17 (int,char*,...) ;

void FUNC_18 (void) {
  int VAR_17;
  int VAR_18;

  FUNC_10 ();
  FUNC_11 ();

  VAR_18 = 0;

  if (FUNC_1 (VAR_16) < 0) {
    FUNC_12 ("fatal: cannot change user to %s\n", VAR_16 ? VAR_16 : "(none)");
    FUNC_7 (1);
  }

  FUNC_3 ();

  FUNC_15 (VAR_3, VAR_13);
  FUNC_15 (VAR_4, VAR_14);

  for (VAR_17 = 0; !VAR_11; VAR_17++) {
    if (!(VAR_17 & 255)) {
      FUNC_17 (1, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
        VAR_5, VAR_9, VAR_2, VAR_0, VAR_1);
    }

    FUNC_5 (97);

    if (VAR_10 != VAR_18) {
      VAR_18 = VAR_10;
      FUNC_4 ();
      if (!VAR_6 && VAR_10 - VAR_15 > 10) {
        FUNC_12 ("Didn't connect to server after 10 seconds.\n");
        FUNC_7 (1);
      }
    }

    if (VAR_7) {
      FUNC_17 (4, "Before readline call.\n");
      char *VAR_19 = FUNC_13 ("TL>");
      if (VAR_19[0]) {
        int VAR_20;
        if (VAR_8) {
          FUNC_8 (VAR_8, "TL>%s\n", VAR_19);
        }
        FUNC_0 (VAR_19);
        for (VAR_20 = FUNC_16 (VAR_19) - 1; VAR_20 > 0 && VAR_19[VAR_20] == ' '; VAR_20--) {
          VAR_19[VAR_20] = 0;
        }

        if (VAR_19[0] == '(') {
          FUNC_14 (VAR_19);
        } else {
          FUNC_6 (VAR_19);
        }
      }
      if (VAR_19 != ((void*)0)) {
        FUNC_9 (VAR_19);
      }
    }
    if (VAR_12 && !--VAR_12) break;
  }

  FUNC_2 ();

}

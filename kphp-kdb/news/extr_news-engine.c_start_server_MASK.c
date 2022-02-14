
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,scalar_t__) ;
 int VAR_5 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,char*,int,int,int,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_8 () ;
 int VAR_10 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *,int *,int *,int *) ;
 int VAR_11 ;
 double VAR_12 ;
 int VAR_13 ;
 int FUNC_11 () ;
 scalar_t__ VAR_14 ;

void FUNC_12 (void) {
  VAR_13 = VAR_9;
  VAR_12 = 2.0;
  FUNC_10 (&VAR_7, &VAR_8, &VAR_5, &VAR_10);
  int VAR_15 = 0, VAR_16 = 17, VAR_17;
  for (VAR_17 = 0; ; VAR_17++) {
    if (VAR_14 > 0 && !(VAR_17 & 1023)) {
      FUNC_5 (VAR_11, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
        VAR_3, VAR_6, VAR_2, VAR_0, VAR_1);
    }
    FUNC_3 (VAR_4 ? FUNC_6() : FUNC_7 ());
    FUNC_2 (VAR_16);

    if (!FUNC_8 ()) {
      break;
    }

    FUNC_0 ();
    FUNC_11 ();

    FUNC_4 ();
    FUNC_1 (VAR_4 ? FUNC_6() : FUNC_7 (), VAR_4);
    if (VAR_15 && !--VAR_15) break;
  }

  FUNC_9 (&VAR_7);
}

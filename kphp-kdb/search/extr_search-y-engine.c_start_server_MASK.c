
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (char*,int ,int ,int ,int ,int ) ;
 int VAR_5 ;
 int FUNC_2 () ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int *,int *,int *) ;
 double VAR_11 ;
 int VAR_12 ;
 int FUNC_5 () ;
 int VAR_13 ;
 int VAR_14 ;

void FUNC_6 (void) {
  int VAR_15;

  VAR_12 = VAR_9;
  VAR_13 = VAR_10;
  VAR_11 = 2.0;

  FUNC_4 (&VAR_7, &VAR_8, &VAR_4, &VAR_6);

  int VAR_16 = 0;

  for (VAR_15 = 0; ; VAR_15++) {
    if (VAR_14 > 1 && !(VAR_15 & 255)) {
      FUNC_1 ("epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
        VAR_3, VAR_5, VAR_2, VAR_0, VAR_1);
    }

    FUNC_0 (57);
    if (!FUNC_2 ()) {
      break;
    }
    FUNC_5 ();
    if (VAR_16 && !--VAR_16) break;
  }

  FUNC_3 (&VAR_7);
}

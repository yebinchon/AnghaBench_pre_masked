
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 () ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_5 (int ,char*,int,int,int,int,int) ;
 int FUNC_6 () ;
 int FUNC_7 (int ,int *,int *) ;
 int FUNC_8 () ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_9 (int *) ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;

__attribute__((used)) static void *FUNC_10 (void *VAR_12) {
  int VAR_13, VAR_14 = 0;

  FUNC_6 ();
  FUNC_8 ();
  FUNC_7 (VAR_5, &VAR_4, &VAR_8);

  for (VAR_13 = 0; !VAR_6 ; VAR_13++) {
    if (VAR_11 > 0 && !(VAR_13 & 255)) {
      FUNC_5 (VAR_10, "epoll_work(): %d out of %d connections, network buffers: %d used, %d out of %d allocated\n",
        VAR_3, VAR_7, VAR_2, VAR_0, VAR_1);
    }
    FUNC_4 (67);

    if (VAR_9 != VAR_14) {
      VAR_14 = VAR_9;
      FUNC_1 ();
    }

    if (&FUNC_3) {
      FUNC_3();
    }
  }

  FUNC_2 (VAR_5);
  FUNC_0 (VAR_5);
  FUNC_9 (((void*)0));
}

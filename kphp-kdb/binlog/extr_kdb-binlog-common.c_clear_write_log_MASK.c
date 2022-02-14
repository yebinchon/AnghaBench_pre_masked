
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
 int FUNC_0 (int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,char*,...) ;
 int VAR_8 ;
 int FUNC_5 (int) ;

void FUNC_6 (void) {
  if (VAR_6) {
    FUNC_1 (&VAR_4, VAR_1, VAR_2);
  } else {

    int VAR_9 = 0;
    while (VAR_7) {
      FUNC_3 ();
      FUNC_5 (10000);
      if (++VAR_9 > 300) {
        FUNC_4 (VAR_8, "cannot write binlog for 3 seconds!");
        FUNC_2 (3);
      }
    }
    if (VAR_9 > 0) {
      FUNC_4 (VAR_8, "clear_write_log: had to wait %d milliseconds for aio_write termination\n", VAR_9);
    }

    FUNC_0 (!VAR_5);

    FUNC_1 (&VAR_4, VAR_0, VAR_3);
  }
}

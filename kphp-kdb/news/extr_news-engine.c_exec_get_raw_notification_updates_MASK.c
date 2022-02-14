
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,char*,int,...) ;
 int FUNC_2 (int,int,int,int,int ) ;
 int FUNC_3 (struct connection*,char const*,int,int,int,scalar_t__,scalar_t__) ;
 int FUNC_4 (char const*,char*,int*,int*,...) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static int FUNC_5 (struct connection *VAR_4, const char *VAR_5, int VAR_6, int VAR_7) {
  int VAR_8;
  int VAR_9 = -1, VAR_10 = 0, VAR_11 = 0, VAR_12 = 0, VAR_13 = 0;

  if (VAR_3 >= 2) {
    FUNC_1 (VAR_2, "exec_get_raw_notifications (%d, %s, %d, %d)\n", VAR_4, VAR_5, VAR_6, VAR_7);
  }

  if (*VAR_5 == '%') {
    VAR_13 = 1;
  }

  if ((FUNC_4 (VAR_5+VAR_13, "raw_notification_updates%d[%d,%d]:%n%d", &VAR_9, &VAR_10, &VAR_11, &VAR_12, &VAR_8) >= 4 ||
       FUNC_4 (VAR_5+VAR_13, "raw_notification_updates%n%d", &VAR_12, &VAR_8) >= 1) && VAR_12 > 0) {
    if (VAR_3 >= 3) {
      FUNC_1 (VAR_2, "mask = %d, st_time = %d, end_time = %d, x = %d, user_id = %d\n", VAR_9, VAR_10, VAR_11, VAR_12, VAR_8);
    }
    VAR_12 += VAR_13;

    FUNC_0 ();
    int VAR_14 = FUNC_2 (VAR_8, VAR_9, VAR_10, VAR_11, 0);
    if (VAR_3 > 1) {
      FUNC_1 (VAR_2, "prepare_raw_updates(%d) = %d\n", VAR_8, VAR_14);
    }
    if (VAR_14 >= 0) {
      return FUNC_3 (VAR_4, VAR_5-VAR_7, VAR_7 + VAR_6, 0x7fffffff, -VAR_13, VAR_0, VAR_1 - VAR_0);
    }
  }
  return 0;
}

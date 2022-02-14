
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int,int,int,int,int ) ;
 int FUNC_1 (int,int,int,int) ;
 int FUNC_2 (int,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int,int,int,int,int) ;
 int FUNC_5 (int,int,int,int) ;
 int FUNC_6 (int,int,int,int,int) ;
 int FUNC_7 (char const*,char*,int*,...) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (int *,char*,int) ;

int FUNC_9 (struct connection *VAR_7, const char *VAR_8, int VAR_9) {
  VAR_7->flags &= ~VAR_1;
  int VAR_10, VAR_11, VAR_12, VAR_13, VAR_14, VAR_15 = 0;
  switch (*VAR_8) {
  case 'u':
    if (VAR_3 && FUNC_7 (VAR_8, "updates%d", &VAR_10) == 1 && VAR_10 && (VAR_10 ^ VAR_5) >= 0) {
      VAR_4++;
      VAR_15 = FUNC_3 (VAR_10);
    } else if (VAR_0 && FUNC_7 (VAR_8, "undelete_comm_update%d_%d_%d_%d", &VAR_11, &VAR_12, &VAR_13, &VAR_14) == 4 && VAR_13 > 0 && VAR_14 > 0) {
      VAR_6++;
      VAR_15 = FUNC_5 (VAR_11, VAR_12, VAR_13, VAR_14);
    } else if (VAR_2 && FUNC_7 (VAR_8, "undelete_notification_update%d_%d_%d_%d", &VAR_11, &VAR_12, &VAR_13, &VAR_14) == 4 && VAR_13 > 0 && VAR_14 >= 0) {
      VAR_6++;
      VAR_15 = FUNC_5 (VAR_11, VAR_12, VAR_13, VAR_14);
    } else if (VAR_2 && FUNC_7 (VAR_8, "undelete_notification_user_update%d_%d_%d_%d_%d", &VAR_10, &VAR_11, &VAR_12, &VAR_13, &VAR_14) == 5 && VAR_13 > 0 && VAR_14 >= 0) {
      VAR_6++;
      VAR_15 = FUNC_6 (VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
    }
    break;
  case 'c':
    if (VAR_0 && FUNC_7 (VAR_8, "comm_updates%d_%d_%d", &VAR_11, &VAR_12, &VAR_13) == 3 && VAR_13 > 0) {
      VAR_4++;
      VAR_15 = FUNC_2 (VAR_11, VAR_12, VAR_13);
    } else if (VAR_0 && FUNC_7 (VAR_8, "comm_update%d_%d_%d_%d", &VAR_11, &VAR_12, &VAR_13, &VAR_14) == 4 && VAR_13 > 0 && VAR_14 > 0) {
      VAR_4++;
      VAR_15 = FUNC_1 (VAR_11, VAR_12, VAR_13, VAR_14);
    }
    break;
  case 'b':
    if (VAR_0 && FUNC_7 (VAR_8, "bookmark_%d_%d_%d:%d", &VAR_11, &VAR_12, &VAR_13, &VAR_10) == 4) {
      VAR_15 = FUNC_0 (VAR_10, VAR_11, VAR_12, VAR_13, 0);
    }
    break;
  case 'n':
    if (VAR_2 && FUNC_7 (VAR_8, "notification_updates%d_%d_%d", &VAR_11, &VAR_12, &VAR_13) == 3 && VAR_13 > 0) {
      VAR_4 ++;
      VAR_15 = FUNC_2 (VAR_11, VAR_12, VAR_13);
    } else if (VAR_2 && FUNC_7 (VAR_8, "notification_update%d_%d_%d_%d", &VAR_11, &VAR_12, &VAR_13, &VAR_14) == 4 && VAR_13 > 0) {
      VAR_4++;
      VAR_15 = FUNC_1 (VAR_11, VAR_12, VAR_13, VAR_14);
    } else if (VAR_2 && FUNC_7 (VAR_8, "notification_user_update%d_%d_%d_%d_%d", &VAR_10, &VAR_11, &VAR_12, &VAR_13, &VAR_14) == 5 && VAR_13 > 0) {
      VAR_4++;
      VAR_15 = FUNC_4 (VAR_10, VAR_11, VAR_12, VAR_13, VAR_14);
    }

    break;
  }

  if (VAR_15 > 0) {
    FUNC_8 (&VAR_7->Out, "DELETED\r\n", 9);
  } else {
    FUNC_8 (&VAR_7->Out, "NOT_FOUND\r\n", 11);
  }

  return 0;
}

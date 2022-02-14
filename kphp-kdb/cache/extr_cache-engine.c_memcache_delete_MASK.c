
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (struct connection*) ;
 int FUNC_3 (char const*,char*,int*,int*,int*,...) ;
 int FUNC_4 (int,char*,int,int,int) ;
 int FUNC_5 (int *,char*,int) ;

int FUNC_6 (struct connection *VAR_7, const char *VAR_8, int VAR_9) {
  int VAR_10, VAR_11, VAR_12;
  VAR_4++;
  if (VAR_1) {
    return FUNC_2 (VAR_7);
  }
  if ((VAR_2 & VAR_0) && VAR_9 >= 13 && !FUNC_1 (VAR_8, "remote_server", 13) && FUNC_3 (VAR_8 + 13, "%d,%d,%d", &VAR_10, &VAR_11, &VAR_12) == 3 && VAR_3 == VAR_10) {
    VAR_6++;
    int VAR_13 = FUNC_0 (VAR_11, VAR_12, 0);
    if (VAR_13 > 0) {
      FUNC_5 (&VAR_7->Out, "DELETED\r\n", 9);
      return 0;
    }
    FUNC_4 (2, "cache_do_delete_remote_disk (node_id:%d, server_id:%d) retuned %d.\n", VAR_11, VAR_12, VAR_13);
  }
  int VAR_14;
  if ((VAR_2 & VAR_0) && VAR_9 >= 11 && !FUNC_1 (VAR_8, "remote_disk", 11) && FUNC_3 (VAR_8 + 11, "%d,%d,%d,%d", &VAR_10, &VAR_11, &VAR_12, &VAR_14) == 4 && VAR_3 == VAR_10) {
    VAR_5++;
    int VAR_15 = FUNC_0 (VAR_11, VAR_12, VAR_14);
    if (VAR_15 > 0) {
      FUNC_5 (&VAR_7->Out, "DELETED\r\n", 9);
      return 0;
    }
  }

  return FUNC_2 (VAR_7);
}

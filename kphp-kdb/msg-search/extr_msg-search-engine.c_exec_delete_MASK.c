
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (char*,char*,int*,int*) ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;

int FUNC_7 (struct connection *VAR_6, char *VAR_7, int VAR_8) {
  int VAR_9, VAR_10;

  while (*VAR_7 == ' ') { VAR_7++; }

  if (VAR_5 > 0) {
    FUNC_5 (VAR_4, "delete \"%s\"\n", VAR_7);
  }

  switch (*VAR_7) {

  case 'd':
    if (FUNC_6 (VAR_7, "delmsg%d,%d ", &VAR_9, &VAR_10) == 2 && VAR_9 > 0 && VAR_10) {
      VAR_3++;
      if (VAR_5 >= 1) {
 FUNC_5 (VAR_4, "delete_msg(%d,%d)\n", VAR_9, VAR_10);
      }
      FUNC_0 (VAR_0, VAR_9, VAR_10, 0);
      FUNC_2 (FUNC_4 (VAR_9, 1), VAR_10);
      return 1;
    }
    break;

  case 'u':
    if (FUNC_6 (VAR_7, "undelmsg%d,%d ", &VAR_9, &VAR_10) == 2 && VAR_9 > 0 && VAR_10) {
      VAR_3++;
      if (VAR_5 >= 1) {
 FUNC_5 (VAR_4, "undelete_msg(%d,%d)\n", VAR_9, VAR_10);
      }
      FUNC_0 (VAR_2, VAR_9, VAR_10, 0);
      FUNC_3 (FUNC_4 (VAR_9, 1), VAR_10);
      return 1;
    }
    break;

  case 'w':
    if (FUNC_6 (VAR_7, "wipemsg%d,%d ", &VAR_9, &VAR_10) == 2 && VAR_9 > 0 && VAR_10) {
      VAR_3++;
      if (VAR_5 >= 1) {
 FUNC_5 (VAR_4, "wipe_msg(%d,%d)\n", VAR_9, VAR_10);
      }
      FUNC_0 (VAR_1, VAR_9, VAR_10, 0);
      FUNC_1 (FUNC_4 (VAR_9, 1), VAR_10);
      return 1;
    }
  }
  return 0;
}

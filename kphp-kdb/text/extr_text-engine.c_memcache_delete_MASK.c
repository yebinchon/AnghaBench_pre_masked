
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int,int) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (struct connection*) ;
 int FUNC_4 (int,int ) ;
 int FUNC_5 (char const*,char*,int*,...) ;
 int VAR_0 ;
 int FUNC_6 (char const*,char*,int) ;
 scalar_t__ FUNC_7 (int) ;
 int VAR_1 ;
 int FUNC_8 (int *,char*,int) ;

int FUNC_9 (struct connection *VAR_2, const char *VAR_3, int VAR_4) {
  int VAR_5, VAR_6;
  if (VAR_1 > 1) {
    FUNC_2 (VAR_0, "memcache_delete: key='%s'\n", VAR_3);
  }

  FUNC_3 (VAR_2);

  if (VAR_4 >= 8 && !FUNC_6 (VAR_3, "userdata", 8)) {
    if (FUNC_5 (VAR_3, "userdata%d", &VAR_5) == 1) {
      if (FUNC_7 (VAR_5) > 0) {
  FUNC_8 (&VAR_2->Out, "DELETED\r\n", 9);
 return 0;
      } else {
  FUNC_8 (&VAR_2->Out, "NOT_FOUND\r\n", 11);
 return 0;
      }
    }
  }

  if (FUNC_5 (VAR_3, "message%d_%d", &VAR_5, &VAR_6) == 2 && VAR_5 && VAR_6 > 0) {
    if (FUNC_1 (VAR_5, VAR_6) == 1) {
      FUNC_8 (&VAR_2->Out, "DELETED\r\n", 9);
      return 0;
    } else {
      FUNC_8 (&VAR_2->Out, "NOT_FOUND\r\n", 11);
      return 0;
    }
  }

  if (FUNC_5 (VAR_3, "first_messages%d_%d", &VAR_5, &VAR_6) == 2 && VAR_5 && VAR_6 > 0) {
    if (FUNC_0 (VAR_5, VAR_6) == 1) {
      FUNC_8 (&VAR_2->Out, "DELETED\r\n", 9);
      return 0;
    } else {
      FUNC_8 (&VAR_2->Out, "NOT_FOUND\r\n", 11);
      return 0;
    }
  }

  if (FUNC_5 (VAR_3, "secret%d", &VAR_5) == 1 && VAR_5) {
    if (FUNC_4 (VAR_5, 0) == 1) {
      FUNC_8 (&VAR_2->Out, "DELETED\r\n", 9);
      return 0;
    }
  }

  FUNC_8 (&VAR_2->Out, "NOT_FOUND\r\n", 11);
  return 0;
}

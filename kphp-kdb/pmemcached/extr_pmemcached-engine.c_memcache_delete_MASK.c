
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; int flags; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,int,int) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (struct connection*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (int *,char*,int) ;

int FUNC_6 (struct connection *VAR_6, const char *VAR_7, int VAR_8) {
  if (VAR_1 == 1) {
    return 0;
  }
  if (VAR_3) {
    return 0;
  }
  VAR_6->flags &= ~VAR_0;

  if (VAR_5 >= 3) {
    FUNC_3 (VAR_4, "memcache_delete: key='%s'\n", VAR_7);
  }
  VAR_2++;

  if (FUNC_2 (VAR_7, VAR_8, 1) == -2) {
    if (!FUNC_4 (VAR_6)) {
      FUNC_5 (&VAR_6->Out, "NOT_FOUND\r\n", 11);
    }
    return 0;
  }
  int VAR_9 = FUNC_1 (VAR_7, VAR_8);
  FUNC_0 (VAR_9 != -2);

  if (VAR_9 != -1) {
    FUNC_5 (&VAR_6->Out, "DELETED\r\n", 9);
    return 0;
  }

  FUNC_5 (&VAR_6->Out, "NOT_FOUND\r\n", 11);
  return 0;
}

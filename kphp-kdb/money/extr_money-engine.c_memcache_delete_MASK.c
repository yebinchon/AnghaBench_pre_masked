
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (char const*,char*,int*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_3 (int *,char*,int) ;

int FUNC_4 (struct connection *VAR_2, const char *VAR_3, int VAR_4) {
  int VAR_5;
  if (VAR_1 > 1) {
    FUNC_1 (VAR_0, "memcache_delete: key='%s'\n", VAR_3);
  }

  if (FUNC_2 (VAR_3, "transaction%d", &VAR_5) >= 1 && VAR_5 > 0) {
    if (FUNC_0 (VAR_5) > 0) {
      FUNC_3 (&VAR_2->Out, "DELETED\r\n", 9);
      return 0;
    } else {
      FUNC_3 (&VAR_2->Out, "NOT_FOUND\r\n", 11);
      return 0;
    }
  }

  FUNC_3 (&VAR_2->Out, "NOT_FOUND\r\n", 11);
  return 0;
}

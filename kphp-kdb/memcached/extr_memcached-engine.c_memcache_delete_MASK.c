
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int Out; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ,char*,char const*) ;
 int FUNC_3 (char const*,int,long long) ;
 long long FUNC_4 (char const*,int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_5 (int *,char*,int) ;

int FUNC_6 (struct connection *VAR_3, const char *VAR_4, int VAR_5) {
  if (VAR_2 > 0) {
    FUNC_2 (VAR_1, "memcache_delete: key='%s'\n", VAR_4);
  }
  VAR_0++;

  long long VAR_6 = FUNC_4 (VAR_4, VAR_5);
  int VAR_7 = FUNC_3 (VAR_4, VAR_5, VAR_6);

  FUNC_0 (3);

  if (VAR_7 != -1) {
    FUNC_1 (VAR_7);
    FUNC_5 (&VAR_3->Out, "DELETED\r\n", 9);
    return 0;
  }

  FUNC_5 (&VAR_3->Out, "NOT_FOUND\r\n", 11);
  return 0;
}

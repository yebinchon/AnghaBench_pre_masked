
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int FUNC_0 () ;
 int FUNC_1 (int ,char*,char const*) ;
 int FUNC_2 (struct connection*,char const*,int) ;
 int FUNC_3 (struct connection*,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;

int FUNC_4 (struct connection *VAR_2, const char *VAR_3, int VAR_4) {
  if (VAR_1 > 1) {
    FUNC_1 (VAR_0, "memcache_get: key='%s'\n", VAR_3);
  }
  FUNC_0 ();



  int VAR_5 = FUNC_2 (VAR_2, VAR_3, VAR_4);

  if (VAR_5 == -2) {
    return FUNC_3 (VAR_2, VAR_3, VAR_4);
  }

  return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int FUNC_0 (int ,char*,char const*) ;
 scalar_t__ FUNC_1 (struct connection*,char const*,int,long long) ;
 int VAR_0 ;
 int FUNC_2 (char const*,char*,int) ;
 int VAR_1 ;

int FUNC_3 (struct connection *VAR_2, int VAR_3, const char *VAR_4, int VAR_5, long long VAR_6) {
  if (VAR_5 >= 4 && (!FUNC_2 (VAR_4+1, "ate", 3))) {
    if (FUNC_1 (VAR_2, VAR_4, VAR_5, (VAR_3 == 0) ? VAR_6 : -VAR_6)) {
      return 0;
    }
  }

  if (VAR_1 > 1) {
    FUNC_0 (VAR_0, "error in incr query (%s)\n", VAR_4);
  }
  return 0;

}

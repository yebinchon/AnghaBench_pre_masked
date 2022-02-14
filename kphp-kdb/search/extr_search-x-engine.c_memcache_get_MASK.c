
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 int FUNC_0 (struct connection*,char const*,int,int) ;
 int FUNC_1 (struct connection*,char const*,int,int) ;
 int FUNC_2 (struct connection*,char const*,int,int) ;
 int FUNC_3 (int ,char*,char const*) ;
 int FUNC_4 (char const*,int) ;
 int FUNC_5 (char const*,char*,int) ;
 int FUNC_6 (struct connection*,char const*,int ,int) ;
 int FUNC_7 (struct connection*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_8 (char const*,char*,int) ;
 int VAR_2 ;
 int FUNC_9 (struct connection*,char const*,int,int) ;

int FUNC_10 (struct connection *VAR_3, const char *VAR_4, int VAR_5) {
  int VAR_6 = FUNC_4 (VAR_4, VAR_5);
  VAR_4 += VAR_6;
  VAR_5 -= VAR_6;

  if (VAR_5 >= 5 && !FUNC_8 (VAR_4, "stats", 5)) {
    int VAR_7 = FUNC_7 (VAR_3);
    return FUNC_6 (VAR_3, VAR_4 - VAR_6, VAR_0, VAR_7);
  }

  if (VAR_5 >= 8 && !FUNC_8 (VAR_4, "search", 6)) {
    return FUNC_2 (VAR_3, VAR_4, VAR_5, VAR_6);
  }

  if (VAR_5 >= 4 && (!FUNC_8 (VAR_4+1, "ate", 3))) {
    FUNC_1 (VAR_3, VAR_4, VAR_5, VAR_6);
    return 0;
  }

  if (VAR_5 >= 4 && (!FUNC_8 (VAR_4, "hash", 4))) {
    FUNC_0 (VAR_3, VAR_4, VAR_5, VAR_6);
    return 0;
  }

  if (VAR_5 == 20 && !FUNC_5 (VAR_4, "worst_search_queries", 20)) {
    return FUNC_9 (VAR_3, VAR_4, VAR_5, VAR_6);
  }

  if (VAR_2 >= 1) {
    FUNC_3 (VAR_1, "unknown query \"get %s\"\n", VAR_4);
  }
  return 0;
}

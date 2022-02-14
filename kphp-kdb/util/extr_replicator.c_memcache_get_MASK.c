
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct connection {int dummy; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;
 int FUNC_1 (struct connection*,scalar_t__,scalar_t__) ;
 int FUNC_2 () ;
 int FUNC_3 (struct connection*,char const*,scalar_t__,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (char const*,char*,int) ;

int FUNC_5 (struct connection *VAR_2, const char *VAR_3, int VAR_4) {
  if (VAR_4 >= 5 && !FUNC_4 (VAR_3, "stats", 5)) {
    int VAR_5 = FUNC_2 ();
    int VAR_6 = FUNC_1 (VAR_2, VAR_1 + VAR_5, VAR_0 - VAR_5);
    FUNC_3 (VAR_2, VAR_3, VAR_1, VAR_5 + VAR_6);
    return 0;
  }
  if (VAR_4 >= 13 && !FUNC_4 (VAR_3, "slaves_broken", 13)) {
    FUNC_3 (VAR_2, VAR_3, VAR_1, FUNC_0 (VAR_1, 1));
    return 0;
  }
  if (VAR_4 >= 14 && !FUNC_4 (VAR_3, "slaves_notconn", 14)) {
    FUNC_3 (VAR_2, VAR_3, VAR_1, FUNC_0 (VAR_1, 2));
    return 0;
  }
  if (VAR_4 >= 11 && !FUNC_4 (VAR_3, "slaves_late", 11)) {
    FUNC_3 (VAR_2, VAR_3, VAR_1, FUNC_0 (VAR_1, 4));
    return 0;
  }
  if (VAR_4 >= 15 && !FUNC_4 (VAR_3, "slaves_uptodate", 15)) {
    FUNC_3 (VAR_2, VAR_3, VAR_1, FUNC_0 (VAR_1, 8));
    return 0;
  }
  if (VAR_4 >= 10 && !FUNC_4 (VAR_3, "slaves_all", 10)) {
    FUNC_3 (VAR_2, VAR_3, VAR_1, FUNC_0 (VAR_1, -1));
    return 0;
  }
  if (VAR_4 >= 10 && !FUNC_4 (VAR_3, "slaves_bad", 10)) {
    FUNC_3 (VAR_2, VAR_3, VAR_1, FUNC_0 (VAR_1, ~24));
    return 0;
  }
  return 0;
}

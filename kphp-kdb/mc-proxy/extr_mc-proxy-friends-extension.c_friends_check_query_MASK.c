
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (char const*,char*,int) ;

int FUNC_2 (int VAR_4, const char *VAR_5, int VAR_6) {
  int VAR_7 = FUNC_0 (VAR_5, VAR_6);
  VAR_5 += VAR_7;
  VAR_6 -= VAR_7;
  if (VAR_4 == VAR_1) {
    return (VAR_6 >= 19 && (!FUNC_1 (VAR_5, "common_friends_num", 18) || !FUNC_1 (VAR_5, "%common_friends_num", 19))) ||
           (VAR_6 >= 15 && (!FUNC_1 (VAR_5, "common_friends", 14) || !FUNC_1 (VAR_5, "%common_friends", 15)));
  } else if (VAR_4 == VAR_3 || VAR_4 == VAR_2 || VAR_4 == VAR_0) {
    return (VAR_6 >= 8 && !FUNC_1 (VAR_5, "userlist", 8));
  } else {
    return 0;
  }
}

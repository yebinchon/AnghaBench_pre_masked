
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char const*,int) ;
 int VAR_2 ;
 int FUNC_1 (char const*,char*,int) ;
 int FUNC_2 (char const*,char*,int) ;

int FUNC_3 (int VAR_3, const char *VAR_4, int VAR_5) {
  if (VAR_3 != VAR_2) {
    return 0;
  }

  int VAR_6 = FUNC_0 (VAR_4, VAR_5);
  VAR_4 += VAR_6;
  VAR_5 -= VAR_6;

  if (VAR_1 || VAR_0) {
    return (VAR_5 >= 6 && !FUNC_1 (VAR_4, "search", 6));
  } else {
    return (VAR_5 >= 7 && !FUNC_2 (VAR_4, "search(", 7)) || (VAR_5 >= 6 && !FUNC_2 (VAR_4, "target", 6))
           || (VAR_5 >= 6 && !FUNC_2 (VAR_4, "prices", 6)) || (VAR_5 >= 3 && !FUNC_2 (VAR_4, "ad_", 3)); }
}

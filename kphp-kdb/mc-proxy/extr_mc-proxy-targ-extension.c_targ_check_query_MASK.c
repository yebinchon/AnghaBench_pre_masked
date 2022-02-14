
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char const*,int) ;
 int FUNC_1 (int ,char*,int,char const*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (char const*,char*,int) ;
 scalar_t__ VAR_5 ;

__attribute__((used)) static int FUNC_3 (int VAR_6, const char *VAR_7, int VAR_8) {
  if (VAR_5) {
    FUNC_1 (VAR_4, "targ_check: type = %d, key = %s, key_len = %d\n", VAR_6, VAR_7, VAR_8);
  }
  int VAR_9 = FUNC_0 (VAR_7, VAR_8);
  VAR_7 += VAR_9;
  VAR_8 -= VAR_9;
  if (VAR_6 == VAR_1) {
    return (VAR_8 >= 6 && !FUNC_2 (VAR_7, "target", 6)) ||
           (VAR_8 >= 6 && !FUNC_2 (VAR_7, "search", 6)) ||
           (VAR_8 >= 6 && !FUNC_2 (VAR_7, "prices", 6)) ||
           (VAR_8 >= 11 && !FUNC_2 (VAR_7, "deletegroup", 11)) ||
           (VAR_8 >= 10 && !FUNC_2 (VAR_7, "ad_pricing", 10)) ||
           (VAR_8 >= 13 && !FUNC_2 (VAR_7, "targ_audience", 13)) ||
           (VAR_8 >= 8 && !FUNC_2 (VAR_7, "audience", 8)) ||
           ((VAR_8 >= 3 && !FUNC_2 (VAR_7, "ad_", 3)) && !(VAR_8 >= 8 && !FUNC_2 (VAR_7, "ad_query", 8)) && !(VAR_8 >= 7 && !FUNC_2 (VAR_7, "ad_info", 7))) ||
           (VAR_8 >= 18 && !FUNC_2 (VAR_7, "recent_views_stats", 18)) ||
           (VAR_8 >= 17 && !FUNC_2 (VAR_7, "recent_ad_viewers", 17));
  } else if (VAR_6 == VAR_3 || VAR_6 == VAR_2 || VAR_6 == VAR_0) {
    return (VAR_8 >= 4 && !FUNC_2 (VAR_7, "temp", 4)) || (VAR_8 >= 5 && !FUNC_2 (VAR_7, "xtemp", 5));
  } else {
    return 1;
  }
}

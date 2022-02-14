
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

int FUNC_3 (int VAR_6, const char *VAR_7, int VAR_8) {
  if (VAR_5) {
    FUNC_1 (VAR_4, "newsr_check: type = %d, key = %s, key_len = %d\n", VAR_6, VAR_7, VAR_8);
  }
  int VAR_9 = FUNC_0 (VAR_7, VAR_8);
  VAR_7 += VAR_9;
  VAR_8 -= VAR_9;
  if (VAR_6 == VAR_1) {
    return (VAR_8 >= 22 && (!FUNC_2 (VAR_7, "raw_recommend_updates", 21) || !FUNC_2 (VAR_7, "%raw_recommend_updates", 22))) ||
           (VAR_8 >= 8 && (!FUNC_2 (VAR_7, "recommend_updates", 17) || !FUNC_2 (VAR_7, "%recommend_updates", 18)));
  } else if (VAR_6 == VAR_3 || VAR_6 == VAR_2 || VAR_6 == VAR_0) {
    return (VAR_8 >= 6 && !FUNC_2 (VAR_7, "urlist", 6));
  } else {
    return 1;
  }
}

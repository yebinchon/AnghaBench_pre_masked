
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_rate_table {int dummy; } ;


 struct ieee80211_rate_table const VAR_0 ;
 struct ieee80211_rate_table const VAR_1 ;
 struct ieee80211_rate_table const VAR_2 ;
 struct ieee80211_rate_table const VAR_3 ;
 struct ieee80211_rate_table const VAR_4 ;
 struct ieee80211_rate_table const VAR_5 ;
 struct ieee80211_rate_table const VAR_6 ;
 scalar_t__ FUNC_0 (char const*,char*) ;

__attribute__((used)) static const struct ieee80211_rate_table *
FUNC_1(const char *VAR_7)
{
 if (FUNC_0(VAR_7, "half") == 0)
  return &VAR_3;
 else if (FUNC_0(VAR_7, "quarter") == 0)
  return &VAR_4;
 else if (FUNC_0(VAR_7, "hta") == 0)
  return &VAR_0;
 else if (FUNC_0(VAR_7, "htg") == 0)
  return &VAR_2;
 else if (FUNC_0(VAR_7, "108g") == 0)
  return &VAR_6;
 else if (FUNC_0(VAR_7, "sturbo") == 0)
  return &VAR_5;
 else if (FUNC_0(VAR_7, "turbo") == 0)
  return &VAR_5;
 else if (FUNC_0(VAR_7, "11a") == 0)
  return &VAR_0;
 else if (FUNC_0(VAR_7, "11g") == 0)
  return &VAR_2;
 else if (FUNC_0(VAR_7, "11b") == 0)
  return &VAR_1;
 else
  return ((void*)0);
}

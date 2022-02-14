
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int ic_flags; } ;



__attribute__((used)) static int
FUNC_0(const struct ieee80211_channel *VAR_0, int VAR_1, int VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_1; VAR_3++)
  if ((VAR_0[VAR_3].ic_flags & VAR_2) != 0)
   return 1;
 return 0;
}

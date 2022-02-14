
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {scalar_t__ ic_freq; } ;
typedef scalar_t__ int16_t ;



__attribute__((used)) static void
FUNC_0(struct ieee80211_channel *VAR_0, int16_t *VAR_1, int *VAR_2,
    const struct ieee80211_channel *VAR_3, int16_t *VAR_4, int VAR_5)
{
 int VAR_6 = 0, VAR_7, VAR_8, VAR_9;
 while (VAR_6 < *VAR_2) {
  for (VAR_7 = 0; VAR_7 < VAR_5 && VAR_0[VAR_6].ic_freq != VAR_3[VAR_7].ic_freq; VAR_7++)
   ;
  if (VAR_7 < VAR_5 && VAR_1[VAR_6] == VAR_4[VAR_7]) {
   for (VAR_8 = VAR_6+1, VAR_9 = VAR_6; VAR_8 < *VAR_2; VAR_8++, VAR_9++)
    VAR_0[VAR_9] = VAR_0[VAR_8];
   (*VAR_2)--;
  } else
   VAR_6++;
 }
}

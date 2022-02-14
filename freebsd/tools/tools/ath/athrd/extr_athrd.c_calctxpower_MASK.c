
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int dummy; } ;
struct ath_hal {int dummy; } ;
typedef int int16_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct ath_hal*,struct ieee80211_channel const*,int ,int ,int *,int *) ;

__attribute__((used)) static void
FUNC_3(struct ath_hal *VAR_0,
 int VAR_1, const struct ieee80211_channel *VAR_2,
 int16_t VAR_3, int16_t VAR_4, int16_t *VAR_5)
{
 int16_t VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  if (!FUNC_2(VAR_0, &VAR_2[VAR_7],
      VAR_3, VAR_4, &VAR_6, &VAR_5[VAR_7])) {
   FUNC_1("unable to set rate table\n");
   FUNC_0(-1);
  }
}

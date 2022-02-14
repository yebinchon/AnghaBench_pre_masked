
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_channel {int ic_freq; int ic_flags; } ;
struct ath_hal {int dummy; } ;
typedef int int16_t ;


 scalar_t__ FUNC_0 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_1 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_2 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_3 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_4 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_5 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_6 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_7 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_8 (struct ieee80211_channel const*) ;
 scalar_t__ FUNC_9 (struct ieee80211_channel const*) ;
 int FUNC_10 (struct ath_hal*,int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_11 (char*,...) ;
 char* VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_12 (int) ;

__attribute__((used)) static void
FUNC_13(struct ath_hal *VAR_6, int VAR_7,
 const struct ieee80211_channel *VAR_8, int16_t *VAR_9)
{
 int VAR_10;

 for (VAR_10 = 0; VAR_10 < VAR_7; VAR_10++) {
  const struct ieee80211_channel *VAR_11 = &VAR_8[VAR_10];
  int VAR_12;

  if (VAR_5)
   FUNC_11("%s%3d", VAR_4,
       FUNC_10(VAR_6, VAR_11->ic_freq, VAR_11->ic_flags));
  else
   FUNC_11("%s%u", VAR_4, VAR_11->ic_freq);
  if (FUNC_5(VAR_11))
   VAR_12 = 'H';
  else if (FUNC_8(VAR_11))
   VAR_12 = 'Q';
  else if (FUNC_9(VAR_11))
   VAR_12 = 'T';
  else if (FUNC_6(VAR_11))
   VAR_12 = 'N';
  else if (FUNC_2(VAR_11))
   VAR_12 = 'A';
  else if (FUNC_0(VAR_11))
   VAR_12 = 'T';
  else if (FUNC_4(VAR_11))
   VAR_12 = 'G';
  else
   VAR_12 = 'B';
  if (VAR_0 && FUNC_7(VAR_11))
   VAR_12 = FUNC_12(VAR_12);
  if (VAR_2 && VAR_1)
   FUNC_11("%c%c%c %d.%d", VAR_12,
       FUNC_3(VAR_11) ? '*' : ' ',
       FUNC_1(VAR_11) ? '4' : ' ',
       VAR_9[VAR_10]/2, (VAR_9[VAR_10]%2)*5);
  else if (VAR_2)
   FUNC_11("%c%c %d.%d", VAR_12,
       FUNC_3(VAR_11) ? '*' : ' ',
       VAR_9[VAR_10]/2, (VAR_9[VAR_10]%2)*5);
  else if (VAR_1)
   FUNC_11("%c%c %d.%d", VAR_12,
       FUNC_1(VAR_11) ? '4' : ' ',
       VAR_9[VAR_10]/2, (VAR_9[VAR_10]%2)*5);
  else
   FUNC_11("%c %d.%d", VAR_12, VAR_9[VAR_10]/2, (VAR_9[VAR_10]%2)*5);
  if ((VAR_3++ % (VAR_5 ? 7 : 6)) == 0)
   VAR_4 = "\n";
  else
   VAR_4 = " ";
 }
}

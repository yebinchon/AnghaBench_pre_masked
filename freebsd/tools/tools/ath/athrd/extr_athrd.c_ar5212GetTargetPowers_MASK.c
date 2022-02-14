
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_int16_t ;
struct ieee80211_channel {int ic_freq; } ;
struct ath_hal {int dummy; } ;
struct TYPE_4__ {int testChannel; void* twicePwr54; void* twicePwr48; void* twicePwr36; void* twicePwr6_24; } ;
typedef TYPE_1__ TRGT_POWER_INFO ;


 int VAR_0 ;
 int FUNC_0 (int ,int*,int,int*,int*) ;
 void* FUNC_1 (int ,int,int,void*,void*) ;

__attribute__((used)) static void
FUNC_2(struct ath_hal *VAR_1, const struct ieee80211_channel *VAR_2,
 TRGT_POWER_INFO *VAR_3,
 u_int16_t VAR_4, TRGT_POWER_INFO *VAR_5)
{

 u_int16_t VAR_6[VAR_0];
 u_int16_t VAR_7, VAR_8, VAR_9, VAR_10;
 int VAR_11;


 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++)
  VAR_6[VAR_11] = VAR_3[VAR_11].testChannel;

 FUNC_0(VAR_2->ic_freq, VAR_6,
  VAR_4, &VAR_7, &VAR_8);


 VAR_9 = VAR_10 = 0;
 for (VAR_11 = 0; VAR_11 < VAR_4; VAR_11++) {
  if (VAR_7 == VAR_6[VAR_11]) {
   VAR_9 = VAR_11;
  }
  if (VAR_8 == VAR_6[VAR_11]) {
   VAR_10 = VAR_11;
   break;
  }
 }





 VAR_5->twicePwr6_24 = FUNC_1(VAR_2->ic_freq, VAR_7, VAR_8,
  VAR_3[VAR_9].twicePwr6_24, VAR_3[VAR_10].twicePwr6_24);
 VAR_5->twicePwr36 = FUNC_1(VAR_2->ic_freq, VAR_7, VAR_8,
  VAR_3[VAR_9].twicePwr36, VAR_3[VAR_10].twicePwr36);
 VAR_5->twicePwr48 = FUNC_1(VAR_2->ic_freq, VAR_7, VAR_8,
  VAR_3[VAR_9].twicePwr48, VAR_3[VAR_10].twicePwr48);
 VAR_5->twicePwr54 = FUNC_1(VAR_2->ic_freq, VAR_7, VAR_8,
  VAR_3[VAR_9].twicePwr54, VAR_3[VAR_10].twicePwr54);
}

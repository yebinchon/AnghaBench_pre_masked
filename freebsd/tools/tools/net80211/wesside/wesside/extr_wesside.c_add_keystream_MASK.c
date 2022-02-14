
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_frame {int dummy; } ;


 int FUNC_0 (int ,unsigned char*,unsigned char*) ;
 int FUNC_1 (unsigned char*,struct ieee80211_frame*,int) ;
 int VAR_0 ;

void FUNC_2(struct ieee80211_frame* VAR_1, int VAR_2)
{
 unsigned char VAR_3[1024];
 int VAR_4 = VAR_2 - sizeof(struct ieee80211_frame) - 4 - 4;
 int VAR_5;
 unsigned char *VAR_6 = (unsigned char*) (VAR_1+1);
 int VAR_7;

 VAR_5 = FUNC_1(VAR_3, VAR_1, VAR_4);
 if (VAR_5 < 16)
  return;

 for (VAR_7 = 0; VAR_7 < 16; VAR_7++)
  VAR_3[VAR_7] ^= VAR_6[4+VAR_7];

 FUNC_0(VAR_0, VAR_6, VAR_3);
}

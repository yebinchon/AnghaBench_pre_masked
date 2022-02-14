
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int dummy; } ;
struct ieee80211_frame {int* i_dur; int i_addr1; int * i_fc; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (char*,int ,int) ;
 int FUNC_2 (struct params*,struct ieee80211_frame*,int) ;

void FUNC_3(struct params *VAR_2, char *VAR_3)
{
 char VAR_4[64];
 struct ieee80211_frame *VAR_5;

 FUNC_1(VAR_4, 0, sizeof(VAR_4));
 VAR_5 = (struct ieee80211_frame*) VAR_4;
 VAR_5->i_fc[0] |= VAR_1;
 VAR_5->i_fc[0] |= VAR_0;
 VAR_5->i_dur[0] = 0x69;
 VAR_5->i_dur[1] = 0x00;
 FUNC_0(VAR_5->i_addr1, VAR_3, 6);

 FUNC_2(VAR_2, VAR_5, 10);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {char* mac; } ;
struct ieee80211_frame {int * i_fc; int i_addr3; int i_addr1; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_frame*,struct params*) ;
 int FUNC_1 (struct params*,struct ieee80211_frame*) ;
 int FUNC_2 (int ,char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (struct params*,struct ieee80211_frame*,int) ;

void FUNC_6(struct params *VAR_2, char *VAR_3)
{
 char VAR_4[4096];
 struct ieee80211_frame *VAR_5;
 int VAR_6;

 VAR_5 = (struct ieee80211_frame*) VAR_4;

 FUNC_3(VAR_4, 0, sizeof(VAR_4));
 FUNC_0(VAR_5, VAR_2);
 FUNC_2(VAR_5->i_addr1, VAR_3, 6);
 FUNC_2(VAR_5->i_addr3, VAR_2->mac, 6);

 VAR_5->i_fc[0] |= VAR_1;
 VAR_5->i_fc[0] |= VAR_0;

 VAR_6 = FUNC_1(VAR_2, VAR_5);

 FUNC_4("sending probe response\n");
 FUNC_5(VAR_2, VAR_5, VAR_6);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_frame {int* i_fc; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_frame*) ;
 int FUNC_1 (unsigned char*,int ,int) ;
 int FUNC_2 (int,unsigned char*,int) ;

void FUNC_3(int VAR_2) {
 unsigned char VAR_3[128];
 struct ieee80211_frame* VAR_4 = (struct ieee80211_frame*) VAR_3;
 unsigned short* VAR_5;

 FUNC_1(VAR_3, 0, sizeof(VAR_3));
 FUNC_0(VAR_4);
 VAR_4->i_fc[0] |= VAR_1 | VAR_0;

 VAR_5 = (unsigned short*) ((unsigned char*) VAR_4 + sizeof(*VAR_4));
 VAR_5++;
 *VAR_5 = 1;

 FUNC_2(VAR_2, VAR_3, sizeof(*VAR_4) + 2 + 2 + 2);
}

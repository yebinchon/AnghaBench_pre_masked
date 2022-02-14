
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int ssid; } ;
struct ieee80211_frame {int* i_fc; char* i_addr1; char* i_addr3; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_frame*,struct params*) ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (struct params*,char*,int) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (int ) ;

void FUNC_5(struct params *VAR_2)
{
 char VAR_3[2048];
 struct ieee80211_frame *VAR_4;
 char *VAR_5;
 int VAR_6;

 FUNC_1(VAR_3, 0, sizeof(VAR_3));

 VAR_4 = (struct ieee80211_frame*) VAR_3;
 FUNC_0(VAR_4, VAR_2);
 VAR_4->i_fc[0] |= VAR_1 | VAR_0;

 FUNC_1(VAR_4->i_addr1, 0xFF, 6);
 FUNC_1(VAR_4->i_addr3, 0xFF, 6);

 VAR_5 = (char*) (VAR_4 + 1);
 *VAR_5++ = 0;
 *VAR_5++ = FUNC_4(VAR_2->ssid);
 FUNC_3(VAR_5, VAR_2->ssid);
 VAR_5 += FUNC_4(VAR_2->ssid);

 *VAR_5++ = 1;
 *VAR_5++ = 4;
 *VAR_5++ = 2 | 0x80;
 *VAR_5++ = 4 | 0x80;
 *VAR_5++ = 11;
 *VAR_5++ = 22;

 VAR_6 = VAR_5 - (char*)VAR_4;

 FUNC_2(VAR_2, VAR_3, VAR_6);
}

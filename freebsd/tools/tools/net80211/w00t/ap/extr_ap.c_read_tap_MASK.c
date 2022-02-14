
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {char wep_iv; int wep_len; int wep_key; int tap; } ;
struct ieee80211_frame {char* i_addr3; char* i_addr1; int * i_fc; } ;
typedef int src ;
typedef int dst ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ieee80211_frame*,struct params*) ;
 int FUNC_2 (char*,char*,int) ;
 int FUNC_3 (char*,int ,int) ;
 int FUNC_4 (int ,char*,int) ;
 int FUNC_5 (struct params*,struct ieee80211_frame*,int) ;
 int FUNC_6 (struct ieee80211_frame*,int,int ,int ) ;

void FUNC_7(struct params *VAR_3)
{
 char VAR_4[4096];
 char *VAR_5;
 int VAR_6 = sizeof(VAR_4);
 int VAR_7;
 char VAR_8[6], VAR_9[6];
 struct ieee80211_frame *VAR_10;
 int VAR_11;

 VAR_5 = VAR_4;
 VAR_7 = sizeof(struct ieee80211_frame) + 8 - 14;
 if (VAR_3->wep_len)
  VAR_7 += 4;

 VAR_5 += VAR_7;
 VAR_6 -= VAR_7;


 FUNC_3(VAR_4, 0, sizeof(VAR_4));
 VAR_11 = FUNC_4(VAR_3->tap, VAR_5, VAR_6);
 if (VAR_11 == -1)
  FUNC_0(1, "read()");


 VAR_10 = (struct ieee80211_frame*) VAR_4;
 FUNC_2(VAR_9, VAR_5, sizeof(VAR_9));
 FUNC_2(VAR_8, VAR_5+6, sizeof(VAR_8));
 FUNC_1(VAR_10, VAR_3);
 FUNC_2(VAR_10->i_addr3, VAR_8, sizeof(VAR_10->i_addr3));
 FUNC_2(VAR_10->i_addr1, VAR_9, sizeof(VAR_10->i_addr1));
 VAR_10->i_fc[0] |= VAR_0;
 VAR_10->i_fc[1] |= VAR_1;
 if (VAR_3->wep_len)
  VAR_10->i_fc[1] |= VAR_2;


 VAR_5 = (char*) (VAR_10+1);
 if (VAR_3->wep_len)
  VAR_5 += 4;
 *VAR_5++ = 0xAA;
 *VAR_5++ = 0xAA;
 *VAR_5++ = 0x03;
 *VAR_5++ = 0x00;
 *VAR_5++ = 0x00;
 *VAR_5++ = 0x00;


 VAR_11 += VAR_7;


 if (VAR_3->wep_len) {
  VAR_5 = (char*) (VAR_10+1);
  FUNC_2(VAR_5, &VAR_3->wep_iv, 3);
  VAR_5[3] = 0;
  VAR_3->wep_iv++;

  FUNC_6(VAR_10, VAR_11, VAR_3->wep_key, VAR_3->wep_len);
  VAR_11 += 4;
 }

 FUNC_5(VAR_3, VAR_10, VAR_11);
}

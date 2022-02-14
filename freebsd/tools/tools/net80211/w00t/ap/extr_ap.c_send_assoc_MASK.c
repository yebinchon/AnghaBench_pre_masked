
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {char* mac; } ;
struct ieee80211_frame {int * i_fc; int i_addr3; int i_addr1; } ;
typedef int buf ;


 char VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ieee80211_frame*,struct params*) ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (char*,int ,int) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct params*,struct ieee80211_frame*,int) ;

void FUNC_5(struct params *VAR_3, char *VAR_4)
{
 char VAR_5[4096];
 struct ieee80211_frame *VAR_6;
 char *VAR_7;
 int VAR_8;

 VAR_6 = (struct ieee80211_frame*) VAR_5;

 FUNC_2(VAR_5, 0, sizeof(VAR_5));
 FUNC_0(VAR_6, VAR_3);
 FUNC_1(VAR_6->i_addr1, VAR_4, 6);
 FUNC_1(VAR_6->i_addr3, VAR_3->mac, 6);

 VAR_6->i_fc[0] |= VAR_2;
 VAR_6->i_fc[0] |= VAR_1;

 VAR_7 = (char*) (VAR_6+1);
 *VAR_7 |= VAR_0;
 VAR_7 += 2;
 VAR_7 += 2;
 VAR_7 += 2;


        *VAR_7++ = 1;
        *VAR_7++ = 4;
        *VAR_7++ = 2 | 0x80;
        *VAR_7++ = 4 | 0x80;
        *VAR_7++ = 11;
        *VAR_7++ = 22;

 VAR_8 = VAR_7 - ((char*) VAR_6);
 FUNC_3("sending assoc response\n");
 FUNC_4(VAR_3, VAR_6, VAR_8);
}

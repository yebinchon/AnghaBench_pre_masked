
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {char* mac; int seq; } ;
struct ieee80211_frame {char* i_fc; char* i_seq; char* i_addr1; char* i_addr3; char* i_addr2; } ;
typedef int seq ;
typedef int fc ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct params*,struct ieee80211_frame*,int) ;
 int FUNC_1 (char*,char*,int) ;
 int FUNC_2 (struct params*,struct ieee80211_frame*,int) ;
 unsigned short FUNC_3 (int ,int ) ;

void FUNC_4(struct params *VAR_3, struct ieee80211_frame *VAR_4, int VAR_5)
{
 char VAR_6[2];
 char VAR_7[2];
 unsigned short *VAR_8;


 FUNC_1(VAR_7, VAR_4->i_fc, 2);
 FUNC_1(VAR_6, VAR_4->i_seq, 2);


 VAR_4->i_fc[1] &= ~(VAR_1 | VAR_2);
 VAR_4->i_fc[1] |= VAR_0;
 FUNC_1(VAR_4->i_addr1, VAR_4->i_addr3, sizeof(VAR_4->i_addr1));
 FUNC_1(VAR_4->i_addr3, VAR_4->i_addr2, sizeof(VAR_4->i_addr3));
 FUNC_1(VAR_4->i_addr2, VAR_3->mac, sizeof(VAR_4->i_addr2));
        VAR_8 = (unsigned short*)VAR_4->i_seq;
        *VAR_8 = FUNC_3(VAR_3->seq, 0);

 FUNC_2(VAR_3, VAR_4, VAR_5);
 FUNC_0(VAR_3, VAR_4, VAR_5);


 FUNC_1(VAR_4->i_fc, VAR_7, sizeof(VAR_7));
 FUNC_1(VAR_4->i_addr2, VAR_4->i_addr3, sizeof(VAR_4->i_addr2));
 FUNC_1(VAR_4->i_addr3, VAR_4->i_addr1, sizeof(VAR_4->i_addr2));
 FUNC_1(VAR_4->i_addr1, VAR_3->mac, sizeof(VAR_4->i_addr1));
 FUNC_1(VAR_4->i_seq, VAR_6, sizeof(VAR_6));
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_frame {int* i_fc; unsigned char* i_addr3; } ;
typedef int arp_pkt ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char*,unsigned short,unsigned char*,unsigned char*,unsigned char*,unsigned char*) ;
 int FUNC_2 (unsigned char*,int ) ;
 int FUNC_3 (struct ieee80211_frame*) ;
 int FUNC_4 (unsigned char*,int,int) ;
 int FUNC_5 (int,unsigned char*,int) ;
 int FUNC_6 (unsigned char*,int) ;

void FUNC_7(int VAR_4, unsigned short VAR_5, unsigned char* VAR_6,
       unsigned char* VAR_7, unsigned char* VAR_8,
       unsigned char* VAR_9) {

 static unsigned char VAR_10[128];
 unsigned char* VAR_11;
 unsigned char* VAR_12;
 struct ieee80211_frame* VAR_13;
 int VAR_14;

 FUNC_4(VAR_10, 0, sizeof(VAR_10));


 VAR_13 = (struct ieee80211_frame*) VAR_10;
 FUNC_3(VAR_13);

 VAR_13->i_fc[0] |= VAR_1;
 VAR_13->i_fc[1] |= VAR_3 | VAR_2;
 FUNC_4(VAR_13->i_addr3, 0xff, 6);

 VAR_11 = (unsigned char*) VAR_13 + sizeof(*VAR_13);
 VAR_12 = VAR_11;
 VAR_12 += 4;

 FUNC_2(VAR_12, VAR_0);
 VAR_12 += 8;
 FUNC_1(VAR_12, VAR_5, VAR_7, VAR_6, VAR_9, VAR_8);

 FUNC_6(VAR_11, 8+8+20);
 VAR_14 = sizeof(*VAR_13) + 4 + 8 + 8 + 20 + 4;
 FUNC_0(VAR_14 < sizeof(VAR_10));

 FUNC_5(VAR_4, VAR_10, VAR_14);
}

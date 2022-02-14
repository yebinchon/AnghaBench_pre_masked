
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int blast; int mac; } ;
struct ieee80211_frame {char* i_addr1; int * i_fc; int i_addr3; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ieee80211_frame*,struct params*) ;
 int FUNC_2 (struct params*,struct ieee80211_frame*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (char*,int,int) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (struct params*,struct ieee80211_frame*,int) ;

void FUNC_8(struct params *VAR_2)
{
 char VAR_3[4096];
 struct ieee80211_frame *VAR_4;
 int VAR_5;
 char *VAR_6;

 VAR_4 = (struct ieee80211_frame*) VAR_3;

 FUNC_5(VAR_3, 0, sizeof(VAR_3));
 FUNC_1(VAR_4, VAR_2);
 FUNC_5(VAR_4->i_addr1, 0xff, 6);
 FUNC_4(VAR_4->i_addr3, VAR_2->mac, 6);

 VAR_4->i_fc[0] |= VAR_1;
 VAR_4->i_fc[0] |= VAR_0;

 VAR_5 = FUNC_2(VAR_2, VAR_4);


 VAR_6 = (char*)VAR_4 + VAR_5;
 *VAR_6++ = 5;
 *VAR_6++ = 4;
 VAR_5 += 2+4;



 FUNC_7(VAR_2, VAR_4, VAR_5);

 if (FUNC_3(&VAR_2->blast, ((void*)0)) == -1)
  FUNC_0(1, "gettimeofday()");
}

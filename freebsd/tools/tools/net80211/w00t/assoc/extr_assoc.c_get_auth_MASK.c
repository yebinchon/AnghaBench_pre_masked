
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int ap; int mac; int rx; } ;
struct ieee80211_frame {int dummy; } ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (struct ieee80211_frame*,int ) ;
 int FUNC_2 (struct ieee80211_frame*,int ,int ) ;
 int FUNC_3 (struct ieee80211_frame*,int ) ;
 int FUNC_4 (struct ieee80211_frame*,struct params*,int) ;
 struct ieee80211_frame* FUNC_5 (char*,int*) ;
 int FUNC_6 (short) ;
 int FUNC_7 (char*,...) ;
 int FUNC_8 (int ,char*,int) ;

int FUNC_9(struct params *VAR_2)
{
 char VAR_3[4096];
 int VAR_4;
 struct ieee80211_frame *VAR_5;
 short *VAR_6;

 VAR_4 = FUNC_8(VAR_2->rx, VAR_3, sizeof(VAR_3));
 if (VAR_4 == -1)
  FUNC_0(1, "sniff()");

 VAR_5 = FUNC_5(VAR_3, &VAR_4);
 if (!VAR_5)
  return 0;

 FUNC_4(VAR_5, VAR_2, VAR_4);

 if (!FUNC_1(VAR_5, VAR_2->mac))
  return 0;

 if (!FUNC_3(VAR_5, VAR_2->ap))
  return 0;

 if (!FUNC_2(VAR_5, VAR_1,
   VAR_0))
  return 0;

 VAR_6 = (short*) (VAR_5+1);


 if (FUNC_6(*VAR_6) != 0) {
  FUNC_7("Not open-system %d!\n", FUNC_6(*VAR_6));
  return 0;
 }
 VAR_6++;


 if (FUNC_6(*VAR_6) != 2) {
  FUNC_7("Got transaction %d!\n", FUNC_6(*VAR_6));
  return 0;
 }
 VAR_6++;


 VAR_4 = FUNC_6(*VAR_6);
 if (VAR_4 == 0) {
  FUNC_7("Authenticated\n");
  return 1;
 }

 FUNC_7("Authentication failed code=%d\n", VAR_4);
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {scalar_t__ state; int mac; int mcast; int ap; int rx; } ;
struct ieee80211_frame {int* i_fc; int i_addr3; int i_addr1; int i_addr2; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct params*,char**,struct ieee80211_frame*,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (struct ieee80211_frame*,int ,int ) ;
 struct ieee80211_frame* FUNC_3 (char*,int*) ;
 int FUNC_4 (struct params*,struct ieee80211_frame*,int) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct params*) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (struct params*,struct ieee80211_frame*,int) ;

void FUNC_10(struct params *VAR_4)
{
 static char *VAR_5 = 0;
 static int VAR_6 = 4096;
 struct ieee80211_frame *VAR_7;
 int VAR_8;

 if (!VAR_5) {
  VAR_5 = (char*) FUNC_5(VAR_6);
  if (!VAR_5)
   FUNC_1(1, "malloc()");
 }

 VAR_8 = FUNC_8(VAR_4->rx, VAR_5, VAR_6);
 if (VAR_8 == -1)
  FUNC_1(1, "sniff()");

 VAR_7 = FUNC_3(VAR_5, &VAR_8);
 if (!VAR_7)
  return;


 if (FUNC_2(VAR_7, VAR_1,
         VAR_0) &&
     (VAR_7->i_fc[1] & VAR_2) &&
     (FUNC_6(VAR_7->i_addr2, VAR_4->ap, 6) == 0) &&
     (FUNC_6(VAR_7->i_addr1, VAR_4->mcast, 5) == 0) &&
     (FUNC_6(VAR_4->mac, VAR_7->i_addr3, 6) == 0)) {
  FUNC_4(VAR_4, VAR_7, VAR_8);
  return;
 }


 if (FUNC_2(VAR_7, VAR_1,
         VAR_0)) {
  if (!FUNC_9(VAR_4, VAR_7, VAR_8))
   return;

  FUNC_0(VAR_4, &VAR_5, VAR_7, VAR_8);
  if (VAR_4->state == VAR_3)
   FUNC_7(VAR_4);
  return;
 }
}

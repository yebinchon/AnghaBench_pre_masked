
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {scalar_t__ state; int mac; int rx; } ;
struct ieee80211_frame {int i_addr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (struct params*,char**,struct ieee80211_frame*,int) ;
 int FUNC_1 (int,char*) ;
 scalar_t__ FUNC_2 (struct ieee80211_frame*,int ,int ) ;
 struct ieee80211_frame* FUNC_3 (char*,int*) ;
 int FUNC_4 (struct params*) ;
 scalar_t__ FUNC_5 (int) ;
 scalar_t__ FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct params*) ;
 int FUNC_8 (int ,char*,int) ;
 int FUNC_9 (struct params*,struct ieee80211_frame*,int) ;

void FUNC_10(struct params *VAR_5)
{
 static char *VAR_6 = 0;
 static int VAR_7 = 4096;
 struct ieee80211_frame *VAR_8;
 int VAR_9;

 if (!VAR_6) {
  VAR_6 = (char*) FUNC_5(VAR_7);
  if (!VAR_6)
   FUNC_1(1, "malloc()");
 }

 VAR_9 = FUNC_8(VAR_5->rx, VAR_6, VAR_7);
 if (VAR_9 == -1)
  FUNC_1(1, "sniff()");

 VAR_8 = FUNC_3(VAR_6, &VAR_9);
 if (!VAR_8)
  return;


 if (FUNC_2(VAR_8, VAR_2, VAR_0) &&
     (FUNC_6(VAR_5->mac, VAR_8->i_addr1, 6) == 0)) {
  FUNC_4(VAR_5);
  return;
 }


 if (FUNC_2(VAR_8, VAR_3,
         VAR_1)) {
  if (!FUNC_9(VAR_5, VAR_8, VAR_9))
   return;

  FUNC_0(VAR_5, &VAR_6, VAR_8, VAR_9);
  if (VAR_5->state == VAR_4)
   FUNC_7(VAR_5);
  return;
 }
}

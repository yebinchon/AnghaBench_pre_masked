
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int dummy; } ;
struct ieee80211_frame {int* i_fc; int i_addr2; } ;
struct client {int seq; int mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct client* FUNC_0 (struct params*,int ) ;
 int FUNC_1 (struct params*,struct client*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (struct ieee80211_frame*,int ,int ) ;
 int FUNC_4 (char*,int ) ;
 struct client* FUNC_5 (int) ;
 int FUNC_6 (int ,int ,int) ;
 int FUNC_7 (struct client*,int ,int) ;
 int FUNC_8 (char*,...) ;
 int FUNC_9 (struct ieee80211_frame*) ;

int FUNC_10(struct params *VAR_3, struct ieee80211_frame *VAR_4, int VAR_5)
{
 struct client *VAR_6;
 int VAR_7;

 if (!FUNC_3(VAR_4, VAR_1,
   VAR_0))
  return 0;

 VAR_7 = FUNC_9(VAR_4);

 VAR_6 = FUNC_0(VAR_3, VAR_4->i_addr2);
 if (!VAR_6) {
  VAR_6 = FUNC_5(sizeof(*VAR_6));
  if (!VAR_6)
   FUNC_2(1, "malloc()");

  FUNC_7(VAR_6, 0, sizeof(*VAR_6));
  FUNC_6(VAR_6->mac, VAR_4->i_addr2, 6);

  VAR_6->seq = VAR_7-1;
  FUNC_1(VAR_3, VAR_6);
 }

 if (VAR_4->i_fc[1] & VAR_2) {
  if ( (VAR_7 <= VAR_6->seq) && ((VAR_6->seq - VAR_7 ) < 5)) {




   return 1;
  }
 }
 VAR_6->seq = VAR_7;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int packet_len; int packet_try; int plast; scalar_t__ packet; } ;
struct ieee80211_frame {int * i_fc; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct ieee80211_frame*) ;
 int FUNC_2 (int,char*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (scalar_t__,struct ieee80211_frame*,int) ;

void FUNC_5(struct params *VAR_1, struct ieee80211_frame *VAR_2, int VAR_3)
{
 if (FUNC_1(VAR_2))
  return;

 FUNC_0(sizeof(VAR_1->packet) >= VAR_3);

 FUNC_4(VAR_1->packet, VAR_2, VAR_3);
 VAR_1->packet_len = VAR_3;
 VAR_1->packet_try = 1;

 VAR_2 = (struct ieee80211_frame*) VAR_1->packet;
 VAR_2->i_fc[1] |= VAR_0;

 if (FUNC_3(&VAR_1->plast, ((void*)0)) == -1)
  FUNC_2(1, "gettimeofday()");
}

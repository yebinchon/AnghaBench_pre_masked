
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {scalar_t__ packet_try; int mac; } ;
struct ieee80211_frame {int i_addr1; } ;


 scalar_t__ FUNC_0 (int ,int ,int) ;

void FUNC_1(struct params *VAR_0, struct ieee80211_frame *VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_1->i_addr1, VAR_0->mac, 6) == 0)
  VAR_0->packet_try = 0;
}

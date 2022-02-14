
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int mac; } ;
struct ieee80211_frame {int i_addr2; int i_addr1; } ;


 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (struct params*,int ) ;

void FUNC_2(struct params *VAR_0, struct ieee80211_frame *VAR_1, int VAR_2)
{
 if (FUNC_0(VAR_1->i_addr1, VAR_0->mac, 6) != 0)
  return;

 FUNC_1(VAR_0, VAR_1->i_addr2);
}

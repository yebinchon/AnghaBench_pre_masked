
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int tx; int mac; } ;
struct ieee80211_frame {int* i_fc; int i_addr2; int i_addr1; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ) ;

void FUNC_2(struct params *VAR_2, struct ieee80211_frame *VAR_3)
{
        if (FUNC_0(VAR_3->i_addr1, VAR_2->mac, 6) != 0)
                return;

        if ((VAR_3->i_fc[0] & VAR_1) == VAR_0)
                return;

        FUNC_1(VAR_2->tx, VAR_3->i_addr2);
}

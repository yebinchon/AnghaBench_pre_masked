
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct params {int seq; int mac; } ;
struct ieee80211_frame {int* i_dur; scalar_t__ i_seq; int i_addr2; } ;


 int FUNC_0 (int ,int ,int) ;
 short FUNC_1 (int ,int ) ;

void FUNC_2(struct ieee80211_frame *VAR_0, struct params *VAR_1)
{
        short *VAR_2;

        VAR_0->i_dur[0] = 0x69;
        VAR_0->i_dur[1] = 0x00;

        FUNC_0(VAR_0->i_addr2, VAR_1->mac, 6);

        VAR_2 = (short*)VAR_0->i_seq;
        *VAR_2 = FUNC_1(VAR_1->seq, 0);
}

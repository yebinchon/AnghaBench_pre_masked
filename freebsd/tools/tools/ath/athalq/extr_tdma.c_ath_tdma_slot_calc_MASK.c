
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t ;
struct if_ath_alq_tdma_slot_calc {int next_slot; int nexttbtt; int avg_minus; int avg_plus; int tsfdelta; } ;
struct TYPE_2__ {int threadid; int tstamp_usec; int tstamp_sec; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct if_ath_alq_tdma_slot_calc*,int *,int) ;
 int FUNC_3 (char*,unsigned int,unsigned int,unsigned long long,unsigned long long,unsigned long long,int,int,int) ;

void
FUNC_4(struct if_ath_alq_payload *VAR_0)
{
 struct if_ath_alq_tdma_slot_calc VAR_1;

 FUNC_2(&VAR_1, &VAR_0->payload, sizeof(VAR_1));
 FUNC_3("[%u.%06u] [%llu] SLOTCALC: NEXTTBTT=%llu nextslot=%llu "
     "tsfdelta=%d avg (%d/%d)\n",
     (unsigned int) FUNC_0(VAR_0->hdr.tstamp_sec),
     (unsigned int) FUNC_0(VAR_0->hdr.tstamp_usec),
     (unsigned long long) FUNC_1(VAR_0->hdr.threadid),
     (unsigned long long) FUNC_1(VAR_1.nexttbtt),
     (unsigned long long) FUNC_1(VAR_1.next_slot),
     (int) FUNC_0(VAR_1.tsfdelta),
     (int) FUNC_0(VAR_1.avg_plus),
     (int) FUNC_0(VAR_1.avg_minus));
}

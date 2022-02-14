
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int t ;
struct if_ath_alq_tdma_beacon_state {int beacon_tsf; int rx_tsf; } ;
struct TYPE_2__ {int tstamp; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct if_ath_alq_tdma_beacon_state*,int *,int) ;
 int FUNC_3 (char*,unsigned int,unsigned long long,unsigned long long,unsigned long long,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct if_ath_alq_payload *VAR_0)
{
 struct if_ath_alq_tdma_beacon_state VAR_1;
 static uint64_t VAR_2 = 0;

 FUNC_2(&VAR_1, &VAR_0->payload, sizeof(VAR_1));

 FUNC_3("[%u] [%llu] BEACON: RX TSF=%llu Beacon TSF=%llu (%d)\n",
     (unsigned int) FUNC_0(VAR_0->hdr.tstamp),
     (unsigned long long) FUNC_1(VAR_0->hdr.threadid),
     (unsigned long long) FUNC_1(VAR_1.rx_tsf),
     (unsigned long long) FUNC_1(VAR_1.beacon_tsf),
     FUNC_1(VAR_1.beacon_tsf) - VAR_2);

 VAR_2 = FUNC_1(VAR_1.beacon_tsf);
}

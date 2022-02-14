
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t ;
struct if_ath_alq_tdma_tsf_adjust {int tsf64_new; int tsfdelta; int tsf64_old; } ;
struct TYPE_2__ {int tstamp; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct if_ath_alq_tdma_tsf_adjust*,int *,int) ;
 int FUNC_3 (char*,unsigned int,unsigned long long,unsigned long long,int,unsigned long long) ;

__attribute__((used)) static void
FUNC_4(struct if_ath_alq_payload *VAR_0)
{
 struct if_ath_alq_tdma_tsf_adjust VAR_1;

 FUNC_2(&VAR_1, &VAR_0->payload, sizeof(VAR_1));
 FUNC_3("[%u] [%llu] TSFADJUST: TSF64 was %llu, adj=%d, now %llu\n",
     (unsigned int) FUNC_0(VAR_0->hdr.tstamp),
     (unsigned long long) FUNC_1(VAR_0->hdr.threadid),
     (unsigned long long) FUNC_1(VAR_1.tsf64_old),
     (int) FUNC_0(VAR_1.tsfdelta),
     (unsigned long long) FUNC_1(VAR_1.tsf64_new));
}

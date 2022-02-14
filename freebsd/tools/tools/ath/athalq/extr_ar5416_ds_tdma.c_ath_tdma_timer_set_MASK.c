
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int t ;
struct if_ath_alq_tdma_timer_set {int sc_tdmaswbaprep; int sc_tdmadbaprep; int bt_flags; int bt_nextatim; int bt_nextswba; int bt_nextdba; int bt_nexttbtt; int bt_intval; } ;
struct TYPE_2__ {int tstamp; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct if_ath_alq_tdma_timer_set*,int *,int) ;
 int FUNC_3 (char*,unsigned int,unsigned long long,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct if_ath_alq_payload *VAR_0)
{
 struct if_ath_alq_tdma_timer_set VAR_1;

 FUNC_2(&VAR_1, &VAR_0->payload, sizeof(VAR_1));
 FUNC_3("[%u] [%llu] TIMERSET: bt_intval=%d nexttbtt=%d nextdba=%d nextswba=%d nextatim=%d flags=0x%x tdmadbaprep=%d tdmaswbaprep=%d\n",
     (unsigned int) FUNC_0(VAR_0->hdr.tstamp),
     (unsigned long long) FUNC_1(VAR_0->hdr.threadid),
     FUNC_0(VAR_1.bt_intval),
     FUNC_0(VAR_1.bt_nexttbtt),
     FUNC_0(VAR_1.bt_nextdba),
     FUNC_0(VAR_1.bt_nextswba),
     FUNC_0(VAR_1.bt_nextatim),
     FUNC_0(VAR_1.bt_flags),
     FUNC_0(VAR_1.sc_tdmadbaprep),
     FUNC_0(VAR_1.sc_tdmaswbaprep));
}

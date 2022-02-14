
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tstamp_usec; int tstamp_sec; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;
struct if_ath_alq_interrupt {int intr_status; } ;
typedef int is ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct if_ath_alq_interrupt*,int *,int) ;
 int FUNC_3 (char*,unsigned int,unsigned int,unsigned long long,scalar_t__) ;

__attribute__((used)) static void
FUNC_4(struct if_ath_alq_payload *VAR_0)
{
 struct if_ath_alq_interrupt VAR_1;


 FUNC_2(&VAR_1, &VAR_0->payload, sizeof(VAR_1));

 FUNC_3("[%u.%06u] [%llu] INTR: status=0x%08x\n",
     (unsigned int) FUNC_0(VAR_0->hdr.tstamp_sec),
     (unsigned int) FUNC_0(VAR_0->hdr.tstamp_usec),
     (unsigned long long) FUNC_1(VAR_0->hdr.threadid),
     FUNC_0(VAR_1.intr_status));
}

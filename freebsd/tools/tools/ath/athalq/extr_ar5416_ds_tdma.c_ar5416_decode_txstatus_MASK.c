
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_4__ {int tstamp; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;
struct TYPE_6__ {int* status; } ;
struct TYPE_5__ {TYPE_3__ tx; } ;
struct ar5416_desc {TYPE_2__ u; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ar5416_desc*,int *,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(struct if_ath_alq_payload *VAR_25)
{
 struct ar5416_desc VAR_26;
 static uint64_t VAR_27 = 0;


 FUNC_4(&VAR_26, &VAR_25->payload, sizeof(struct ar5416_desc));

 if (FUNC_0(VAR_26.u.tx.status[9], VAR_13) == 0)
  return;

 FUNC_5("[%u] [%llu] TXSTATUS: TxDone=%d, TS=0x%08x (delta %d)\n",
     (unsigned int) FUNC_2(VAR_25->hdr.tstamp),
     (unsigned long long) FUNC_3(VAR_25->hdr.threadid),
     FUNC_0(VAR_26.u.tx.status[9], VAR_13),
     VAR_26.u.tx.status[2],
     VAR_26.u.tx.status[2] - VAR_27);

 VAR_27 = VAR_26.u.tx.status[2];
}

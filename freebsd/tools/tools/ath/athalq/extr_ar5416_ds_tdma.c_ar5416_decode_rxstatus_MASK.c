
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_2__ {int tstamp; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;
struct ar5416_desc {int ds_rxstatus8; int ds_rxstatus2; int ds_link; int ds_data; int ds_ctl0; int ds_ctl1; int ds_rxstatus0; int ds_rxstatus1; int ds_rxstatus3; int ds_rxstatus4; int ds_rxstatus5; int ds_rxstatus6; int ds_rxstatus7; } ;


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
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ar5416_desc*,int *,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(struct if_ath_alq_payload *VAR_30)
{
 struct ar5416_desc VAR_31;
 static uint64_t VAR_32 = 0;


 FUNC_4(&VAR_31, &VAR_30->payload, sizeof(struct ar5416_desc));

 if (FUNC_0(VAR_31.ds_rxstatus8, VAR_17) == 0)
  return;

 FUNC_5("[%u] [%llu] RXSTATUS: RxDone=%d, TS=0x%08x (delta %d)\n",
     (unsigned int) FUNC_2(VAR_30->hdr.tstamp),
     (unsigned long long) FUNC_3(VAR_30->hdr.threadid),
     FUNC_0(VAR_31.ds_rxstatus8, VAR_17),
     VAR_31.ds_rxstatus2,
     VAR_31.ds_rxstatus2 - VAR_32);

 VAR_32 = VAR_31.ds_rxstatus2;
}

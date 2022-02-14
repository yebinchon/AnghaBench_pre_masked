
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tstamp_usec; int tstamp_sec; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;
struct ar5212_desc {int ds_rxstatus1; int ds_link; int ds_data; int ds_ctl0; int ds_ctl1; int ds_rxstatus0; } ;


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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ar5212_desc*,int *,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(struct if_ath_alq_payload *VAR_17)
{
 struct ar5212_desc VAR_18;


 FUNC_4(&VAR_18, &VAR_17->payload, sizeof(struct ar5212_desc));

 FUNC_5("[%u.%06u] [%llu] RXSTATUS: RxOK=%d TS=0x%08x\n",
     (unsigned int) FUNC_2(VAR_17->hdr.tstamp_sec),
     (unsigned int) FUNC_2(VAR_17->hdr.tstamp_usec),
     (unsigned long long) FUNC_3(VAR_17->hdr.threadid),
     FUNC_0(VAR_18.ds_rxstatus1, VAR_4),
     FUNC_1(VAR_18.ds_rxstatus1, VAR_16));

 FUNC_5("  link=0x%08x, data=0x%08x, ctl0=0x%08x, ctl2=0x%08x\n",
     VAR_18.ds_link,
     VAR_18.ds_data,
     VAR_18.ds_ctl0,
     VAR_18.ds_ctl1);


 FUNC_5("  DataLen=%d, ArMore=%d, DecompCrcError=%d, RcvRate=0x%02x\n",
     VAR_18.ds_rxstatus0 & VAR_1,
     FUNC_0(VAR_18.ds_rxstatus0, VAR_10),
     FUNC_0(VAR_18.ds_rxstatus0, VAR_2),
     FUNC_1(VAR_18.ds_rxstatus0, VAR_14));
 FUNC_5("  RSSI=%d, RcvAntenna=0x%x\n",
     FUNC_1(VAR_18.ds_rxstatus0, VAR_15),
     FUNC_1(VAR_18.ds_rxstatus0, VAR_13));


 FUNC_5("  RxDone=%d, RxFrameOk=%d, CrcErr=%d, DecryptCrcErr=%d\n",
     FUNC_0(VAR_18.ds_rxstatus1, VAR_4),
     FUNC_0(VAR_18.ds_rxstatus1, VAR_5),
     FUNC_0(VAR_18.ds_rxstatus1, VAR_0),
     FUNC_0(VAR_18.ds_rxstatus1, VAR_3));
 FUNC_5("  PhyErr=%d, MichaelErr=%d, KeyIdxValid=%d\n",
     FUNC_0(VAR_18.ds_rxstatus1, VAR_11),
     FUNC_0(VAR_18.ds_rxstatus1, VAR_9),
     FUNC_0(VAR_18.ds_rxstatus1, VAR_8));


 if (FUNC_0(VAR_18.ds_rxstatus1, VAR_11))
  FUNC_5("  PhyErrCode=0x%02x\n",
      FUNC_1(VAR_18.ds_rxstatus1, VAR_12));
 else
  FUNC_5("  KeyIdx=0x%02x\n",
      FUNC_1(VAR_18.ds_rxstatus1, VAR_7));

 FUNC_5("  KeyMiss=%d\n",
     FUNC_0(VAR_18.ds_rxstatus1, VAR_6));

 FUNC_5("  Timetamp: 0x%05x\n",
     FUNC_1(VAR_18.ds_rxstatus1, VAR_16));

 FUNC_5("\n ------\n");
}

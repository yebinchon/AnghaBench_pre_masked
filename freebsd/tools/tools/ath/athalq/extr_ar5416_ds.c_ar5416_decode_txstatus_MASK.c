
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tstamp_usec; int tstamp_sec; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;
struct TYPE_5__ {int* status; } ;
struct TYPE_6__ {TYPE_2__ tx; } ;
struct ar5416_desc {TYPE_3__ u; } ;


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


 FUNC_4(&VAR_26, &VAR_25->payload, sizeof(struct ar5416_desc));

 FUNC_5("[%u.%06u] [%llu] TXSTATUS: TxDone=%d, FrmOk=%d, filt=%d, TS=0x%08x\n",
     (unsigned int) FUNC_2(VAR_25->hdr.tstamp_sec),
     (unsigned int) FUNC_2(VAR_25->hdr.tstamp_usec),
     (unsigned long long) FUNC_3(VAR_25->hdr.threadid),
     FUNC_0(VAR_26.u.tx.status[9], VAR_13),
     FUNC_0(VAR_26.u.tx.status[1], VAR_6),
     FUNC_0(VAR_26.u.tx.status[1], VAR_4),
     VAR_26.u.tx.status[2]);


 FUNC_5("    RX RSSI 0 [%d %d %d]",
     FUNC_1(VAR_26.u.tx.status[0], VAR_15),
     FUNC_1(VAR_26.u.tx.status[0], VAR_16),
     FUNC_1(VAR_26.u.tx.status[0], VAR_17));


 FUNC_5(" RX RSSI 1 [%d %d %d] Comb=%d\n",
     FUNC_1(VAR_26.u.tx.status[5], VAR_18),
     FUNC_1(VAR_26.u.tx.status[5], VAR_19),
     FUNC_1(VAR_26.u.tx.status[5], VAR_20),
     FUNC_1(VAR_26.u.tx.status[5], VAR_21));


 FUNC_5("    BA Valid=%d",
     FUNC_0(VAR_26.u.tx.status[0], VAR_10));


 FUNC_5(", Frmok=%d, xretries=%d, fifounderrun=%d, filt=%d\n",
     FUNC_0(VAR_26.u.tx.status[1], VAR_6),
     FUNC_0(VAR_26.u.tx.status[1], VAR_2),
     FUNC_0(VAR_26.u.tx.status[1], VAR_3),
     FUNC_0(VAR_26.u.tx.status[1], VAR_4));
 FUNC_5("    DelimUnderrun=%d, DataUnderun=%d, DescCfgErr=%d,"
     " TxTimerExceeded=%d\n",
     FUNC_0(VAR_26.u.tx.status[1], VAR_12),
     FUNC_0(VAR_26.u.tx.status[1], VAR_11),
     FUNC_0(VAR_26.u.tx.status[1], VAR_1),
     FUNC_0(VAR_26.u.tx.status[1], VAR_23));

 FUNC_5("    RTScnt=%d, FailCnt=%d, VRetryCnt=%d\n",
     FUNC_1(VAR_26.u.tx.status[1], VAR_8),
     FUNC_1(VAR_26.u.tx.status[1], VAR_0),
     FUNC_1(VAR_26.u.tx.status[1], VAR_24));


 FUNC_5("    TxTimestamp=0x%08x", VAR_26.u.tx.status[2]);



 FUNC_5(", BALow=0x%08x", VAR_26.u.tx.status[3]);
 FUNC_5(", BAHigh=0x%08x\n", VAR_26.u.tx.status[4]);





 FUNC_5("    TxEVM[0]=0x%08x, TxEVM[1]=0x%08x, TxEVM[2]=0x%08x\n",
     VAR_26.u.tx.status[6],
     VAR_26.u.tx.status[7],
     VAR_26.u.tx.status[8]);


 FUNC_5("    TxDone=%d, SeqNum=0x%04x, TxOpExceeded=%d, FinalTsIdx=%d\n",
     FUNC_0(VAR_26.u.tx.status[9], VAR_13),
     FUNC_1(VAR_26.u.tx.status[9], VAR_9),
     FUNC_0(VAR_26.u.tx.status[9], VAR_14),
     FUNC_1(VAR_26.u.tx.status[9], VAR_5));
 FUNC_5("    PowerMgmt=%d, TxTid=%d\n",
     FUNC_0(VAR_26.u.tx.status[9], VAR_7),
     FUNC_1(VAR_26.u.tx.status[9], VAR_22));

 FUNC_5("\n ------\n");
}

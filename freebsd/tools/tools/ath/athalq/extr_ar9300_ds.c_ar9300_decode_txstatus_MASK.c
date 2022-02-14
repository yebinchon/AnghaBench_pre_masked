
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tstamp_usec; int tstamp_sec; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;
struct ar9300_txs {int status4; int status1; int ds_info; int status8; int status3; int status2; int status7; int status5; int status6; } ;


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
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_35 ;
 int FUNC_4 (struct ar9300_txs*,int *,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(struct if_ath_alq_payload *VAR_36)
{
 struct ar9300_txs VAR_37;


 FUNC_4(&VAR_37, &VAR_36->payload, sizeof(struct ar9300_txs));

 FUNC_5("[%u.%06u] [%llu] TXSTATUS TxTimestamp=%u (%u), DescId=0x%04x, QCU=%d\n",
     (unsigned int) FUNC_2(VAR_36->hdr.tstamp_sec),
     (unsigned int) FUNC_2(VAR_36->hdr.tstamp_usec),
     (unsigned long long) FUNC_3(VAR_36->hdr.threadid),
     VAR_37.status4,
     VAR_37.status4 - VAR_35,
     (unsigned int) FUNC_1(VAR_37.status1, VAR_20),
     (unsigned int) FUNC_1(VAR_37.ds_info, VAR_24));
 FUNC_5("    DescId=0x%08x\n", VAR_37.status1);

 VAR_35 = VAR_37.status4;

 FUNC_5("    DescLen=%d, TxQcuNum=%d, CtrlStat=%d, DescId=0x%04x\n",
     VAR_37.ds_info & 0xff,
     FUNC_1(VAR_37.ds_info, VAR_24),
     FUNC_1(VAR_37.ds_info, VAR_1),
     FUNC_1(VAR_37.ds_info, VAR_4));

 FUNC_5("    TxTimestamp: %u\n", VAR_37.status4);

 FUNC_5("    TxDone=%d, SeqNo=%d, TxOpExceed=%d, TXBFStatus=%d\n",
     FUNC_0(VAR_37.status8, VAR_21),
     FUNC_1(VAR_37.status8, VAR_12),
     FUNC_0(VAR_37.status8, VAR_23),
     FUNC_1(VAR_37.status8, VAR_0));

 FUNC_5("    TXBfMismatch=%d, BFStreamMiss=%d, FinalTxIdx=%d\n",
     FUNC_0(VAR_37.status8, VAR_14),
     FUNC_0(VAR_37.status8, VAR_17),
     FUNC_1(VAR_37.status8, VAR_8));

 FUNC_5("    TxBfDestMiss=%d, TxBfExpired=%d, PwrMgmt=%d, Tid=%d,"
     " FastTsBit=%d\n",
     FUNC_0(VAR_37.status8, VAR_15),
     FUNC_0(VAR_37.status8, VAR_16),
     FUNC_0(VAR_37.status8, VAR_10),
     FUNC_1(VAR_37.status8, VAR_32),
     FUNC_0(VAR_37.status8, VAR_22));

 FUNC_5("    Frmok=%d, xretries=%d, fifounderrun=%d, filt=%d\n",
     FUNC_0(VAR_37.status3, VAR_9),
     FUNC_0(VAR_37.status3, VAR_5),
     FUNC_0(VAR_37.status3, VAR_6),
     FUNC_0(VAR_37.status3, VAR_7));
 FUNC_5("    DelimUnderrun=%d, DataUnderun=%d, DescCfgErr=%d,"
     " TxTimerExceeded=%d\n",
     FUNC_0(VAR_37.status3, VAR_19),
     FUNC_0(VAR_37.status3, VAR_18),
     FUNC_0(VAR_37.status3, VAR_3),
     FUNC_0(VAR_37.status3, VAR_33));

 FUNC_5("    RTScnt=%d, FailCnt=%d, VRetryCnt=%d\n",
     FUNC_1(VAR_37.status3, VAR_11),
     FUNC_1(VAR_37.status3, VAR_2),
     FUNC_1(VAR_37.status3, VAR_34));



 FUNC_5("    RX RSSI 0 [%d %d %d]\n",
     FUNC_1(VAR_37.status2, VAR_25),
     FUNC_1(VAR_37.status2, VAR_26),
     FUNC_1(VAR_37.status2, VAR_27));

 FUNC_5("    RX RSSI 1 [%d %d %d] Comb=%d\n",
     FUNC_1(VAR_37.status7, VAR_28),
     FUNC_1(VAR_37.status7, VAR_29),
     FUNC_1(VAR_37.status7, VAR_30),
     FUNC_1(VAR_37.status7, VAR_31));

 FUNC_5("    BA Valid=%d\n",
     FUNC_0(VAR_37.status2, VAR_13));

 FUNC_5("    BALow=0x%08x\n", VAR_37.status5);
 FUNC_5("    BAHigh=0x%08x\n", VAR_37.status6);

 FUNC_5("\n ------ \n");
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int tstamp_usec; int tstamp_sec; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;
struct TYPE_5__ {int status1; int status0; } ;
struct TYPE_6__ {TYPE_2__ tx; } ;
struct ar5212_desc {TYPE_3__ u; } ;


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
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ar5212_desc*,int *,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(struct if_ath_alq_payload *VAR_14)
{
 struct ar5212_desc VAR_15;


 FUNC_4(&VAR_15, &VAR_14->payload, sizeof(struct ar5212_desc));

 FUNC_5("[%u.%06u] [%llu] TXSTATUS: TxDone=%d, TS=0x%08x\n\n",
     (unsigned int) FUNC_2(VAR_14->hdr.tstamp_sec),
     (unsigned int) FUNC_2(VAR_14->hdr.tstamp_usec),
     (unsigned long long) FUNC_3(VAR_14->hdr.threadid),
     FUNC_0(VAR_15.u.tx.status1, VAR_3),
     FUNC_1(VAR_15.u.tx.status0, VAR_10));


 FUNC_5("    Frmok=%d, xretries=%d, fifounderrun=%d, filt=%d\n",
     FUNC_0(VAR_15.u.tx.status0, VAR_8),
     FUNC_0(VAR_15.u.tx.status0, VAR_4),
     FUNC_0(VAR_15.u.tx.status0, VAR_5),
     FUNC_0(VAR_15.u.tx.status0, VAR_6));
 FUNC_5("    RTScnt=%d, FailCnt=%d, VCollCnt=%d\n",
     FUNC_1(VAR_15.u.tx.status0, VAR_9),
     FUNC_1(VAR_15.u.tx.status0, VAR_2),
     FUNC_1(VAR_15.u.tx.status0, VAR_12));
 FUNC_5("    SndTimestamp=0x%04x\n",
     FUNC_1(VAR_15.u.tx.status0, VAR_10));


 FUNC_5("    Done=%d, SeqNum=0x%04x, AckRSSI=%d, FinalTSI=%d\n",
     FUNC_0(VAR_15.u.tx.status1, VAR_3),
     FUNC_1(VAR_15.u.tx.status1, VAR_11),
     FUNC_1(VAR_15.u.tx.status1, VAR_0),
     FUNC_1(VAR_15.u.tx.status1, VAR_7));
 FUNC_5("    CompSuccess=%d, XmitAntenna=%d\n",
     FUNC_0(VAR_15.u.tx.status1, VAR_1),
     FUNC_0(VAR_15.u.tx.status1, VAR_13));

 FUNC_5("\n ------\n");
}

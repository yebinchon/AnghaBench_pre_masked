
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tstamp_usec; int tstamp_sec; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;
struct ar9300_rxs {int status3; int status6; int status7; int status8; int status9; int status11; int status4; int status2; int status1; int status5; } ;


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
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int VAR_40 ;
 int FUNC_4 (struct ar9300_rxs*,int *,int) ;
 int FUNC_5 (char*,int,...) ;

__attribute__((used)) static void
FUNC_6(struct if_ath_alq_payload *VAR_41)
{
 struct ar9300_rxs VAR_42;


 FUNC_4(&VAR_42, &VAR_41->payload, sizeof(struct ar9300_rxs));

 FUNC_5("[%u.%06u] [%llu] RXSTATUS RxTimestamp: %u (%d)\n",
     (unsigned int) FUNC_2(VAR_41->hdr.tstamp_sec),
     (unsigned int) FUNC_2(VAR_41->hdr.tstamp_usec),
     (unsigned long long) FUNC_3(VAR_41->hdr.threadid),
     VAR_42.status3,
     VAR_42.status3 - VAR_40);



 FUNC_5("    RSSI %d/%d/%d / %d/%d/%d; combined: %d; rate=0x%02x\n",
     FUNC_1(VAR_42.status1, VAR_32),
     FUNC_1(VAR_42.status1, VAR_33),
     FUNC_1(VAR_42.status1, VAR_34),
     FUNC_1(VAR_42.status5, VAR_35),
     FUNC_1(VAR_42.status5, VAR_36),
     FUNC_1(VAR_42.status5, VAR_37),
     FUNC_1(VAR_42.status5, VAR_38),
     FUNC_1(VAR_42.status1, VAR_31));


 FUNC_5("    Len: %d; more=%d, delim=%d, upload=%d\n",
     FUNC_1(VAR_42.status2, VAR_3),
     FUNC_0(VAR_42.status2, VAR_27),
     FUNC_1(VAR_42.status2, VAR_14),
     FUNC_1(VAR_42.status2, VAR_8));


 FUNC_5("    RX timestamp: %u\n", VAR_42.status3);
 VAR_40 = VAR_42.status3;


 FUNC_5("    GI: %d, 2040: %d, parallel40: %d, stbc=%d\n",
     FUNC_0(VAR_42.status4, VAR_6),
     FUNC_0(VAR_42.status4, VAR_0),
     FUNC_0(VAR_42.status4, VAR_15),
     FUNC_0(VAR_42.status4, VAR_39));
 FUNC_5("    Not sounding: %d, ness: %d, upload_valid: %d\n",
     FUNC_0(VAR_42.status4, VAR_30),
     FUNC_1(VAR_42.status4, VAR_29),
     FUNC_1(VAR_42.status4, VAR_10));
 FUNC_5("    RX antenna: 0x%08x\n",
     FUNC_1(VAR_42.status4, VAR_22));



 FUNC_5("    EVM: 0x%08x; 0x%08x; 0x%08x; 0x%08x\n",
     VAR_42.status6,
     VAR_42.status7,
     VAR_42.status8,
     VAR_42.status9);




 FUNC_5("    RX done: %d, RX frame ok: %d, CRC error: %d\n",
     FUNC_0(VAR_42.status11, VAR_23),
     FUNC_0(VAR_42.status11, VAR_25),
     FUNC_0(VAR_42.status11, VAR_2));
 FUNC_5("    Decrypt CRC err: %d, PHY err: %d, MIC err: %d\n",
     FUNC_0(VAR_42.status11, VAR_5),
     FUNC_0(VAR_42.status11, VAR_17),
     FUNC_0(VAR_42.status11, VAR_13));
 FUNC_5("    Pre delim CRC err: %d, uAPSD Trig: %d\n",
     FUNC_0(VAR_42.status11, VAR_20),
     FUNC_0(VAR_42.status11, VAR_1));
 FUNC_5("    RXKeyIdxValid: %d, KeyIdx: %d, PHY error: %d\n",
     FUNC_0(VAR_42.status11, VAR_26),
     FUNC_1(VAR_42.status11, VAR_11),
     FUNC_1(VAR_42.status11, VAR_16));
 FUNC_5("    RX more Aggr: %d, RX aggr %d, post delim CRC err: %d\n",
     FUNC_0(VAR_42.status11, VAR_28),
     FUNC_0(VAR_42.status11, VAR_21),
     FUNC_0(VAR_42.status11, VAR_19));
 FUNC_5("    hw upload data type: %d; position bit: %d\n",
     FUNC_1(VAR_42.status11, VAR_9),
     FUNC_0(VAR_42.status11, VAR_18));
 FUNC_5("    Hi RX chain: %d, RxFirstAggr: %d, DecryptBusy: %d, KeyMiss: %d\n",
     FUNC_0(VAR_42.status11, VAR_7),
     FUNC_0(VAR_42.status11, VAR_24),
     FUNC_0(VAR_42.status11, VAR_4),
     FUNC_0(VAR_42.status11, VAR_12));
}

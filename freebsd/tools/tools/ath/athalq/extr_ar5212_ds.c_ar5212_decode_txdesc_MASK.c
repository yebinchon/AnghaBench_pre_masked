
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tstamp_usec; int tstamp_sec; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;
struct ar5212_desc {int ds_link; int ds_data; int ds_ctl0; int ds_ctl1; int ds_ctl2; int ds_ctl3; } ;


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
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ar5212_desc*,int *,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(struct if_ath_alq_payload *VAR_28)
{
 struct ar5212_desc VAR_29;


 FUNC_4(&VAR_29, &VAR_28->payload, sizeof(struct ar5212_desc));

 FUNC_5("[%u.%06u] [%llu] TXD\n",
     (unsigned int) FUNC_2(VAR_28->hdr.tstamp_sec),
     (unsigned int) FUNC_2(VAR_28->hdr.tstamp_usec),
     (unsigned long long) FUNC_3(VAR_28->hdr.threadid));

 FUNC_5("  link=0x%08x, data=0x%08x\n",
     VAR_29.ds_link,
     VAR_29.ds_data);


 FUNC_5("    Frame Len=%d\n", VAR_29.ds_ctl0 & VAR_10);
 FUNC_5("    TX power0=%d, RtsEna=%d, Veol=%d, ClrDstMask=%d AntModeXmit=0x%02x\n",
     FUNC_1(VAR_29.ds_ctl0, VAR_23),
     FUNC_0(VAR_29.ds_ctl0, VAR_15),
     FUNC_0(VAR_29.ds_ctl0, VAR_18),
     FUNC_0(VAR_29.ds_ctl0, VAR_3),
     FUNC_0(VAR_29.ds_ctl0, VAR_0));
 FUNC_5("    TxIntrReq=%d, DestIdxValid=%d, CtsEnable=%d\n",
     FUNC_0(VAR_29.ds_ctl0, VAR_17),
     FUNC_0(VAR_29.ds_ctl0, VAR_8),
     FUNC_0(VAR_29.ds_ctl0, VAR_2));


 FUNC_5("    BufLen=%d, TxMore=%d, DestIdx=%d,"
     " FrType=0x%x\n",
     VAR_29.ds_ctl1 & VAR_1,
     FUNC_0(VAR_29.ds_ctl1, VAR_12),
     FUNC_1(VAR_29.ds_ctl1, VAR_7),
     FUNC_1(VAR_29.ds_ctl1, VAR_11));
 FUNC_5("    NoAck=%d, CompProc=%d, CompIVLen=%d, CompICVLen=%d\n",
     FUNC_0(VAR_29.ds_ctl1, VAR_13),
     FUNC_1(VAR_29.ds_ctl1, VAR_6),
     FUNC_1(VAR_29.ds_ctl1, VAR_5),
     FUNC_1(VAR_29.ds_ctl1, VAR_4));


 FUNC_5("    DurUpEna=%d, Burstdur=0x%04x\n",
     FUNC_0(VAR_29.ds_ctl2, VAR_9),
     FUNC_1(VAR_29.ds_ctl2, VAR_14));
 FUNC_5("    Try0=%d, Try1=%d, Try2=%d, Try3=%d\n",
     FUNC_1(VAR_29.ds_ctl2, VAR_19),
     FUNC_1(VAR_29.ds_ctl2, VAR_20),
     FUNC_1(VAR_29.ds_ctl2, VAR_21),
     FUNC_1(VAR_29.ds_ctl2, VAR_22));


 FUNC_5("    rate0=0x%02x, rate1=0x%02x, rate2=0x%02x, rate3=0x%02x\n",
     FUNC_1(VAR_29.ds_ctl3, VAR_24),
     FUNC_1(VAR_29.ds_ctl3, VAR_25),
     FUNC_1(VAR_29.ds_ctl3, VAR_26),
     FUNC_1(VAR_29.ds_ctl3, VAR_27));
 FUNC_5("    RtsCtsRate=0x%02x\n",
     FUNC_1(VAR_29.ds_ctl3, VAR_16));

 FUNC_5("\n ------ \n");
}

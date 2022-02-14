
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tstamp_usec; int tstamp_sec; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;
struct ar5416_desc {int ds_link; int ds_data; int ds_ctl0; int ds_ctl1; int ds_ctl2; int ds_ctl3; int ds_ctl4; int ds_ctl5; int ds_ctl6; int ds_ctl7; int ds_ctl8; int ds_ctl9; int ds_ctl10; int ds_ctl11; } ;


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
 int VAR_40 ;
 int VAR_41 ;
 int VAR_42 ;
 int VAR_43 ;
 int VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 int VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 int VAR_55 ;
 int VAR_56 ;
 int VAR_57 ;
 int VAR_58 ;
 int VAR_59 ;
 int VAR_60 ;
 int VAR_61 ;
 int VAR_62 ;
 int VAR_63 ;
 int VAR_64 ;
 int VAR_65 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ar5416_desc*,int *,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(struct if_ath_alq_payload *VAR_66)
{
 struct ar5416_desc VAR_67;


 FUNC_4(&VAR_67, &VAR_66->payload, sizeof(struct ar5416_desc));

 FUNC_5("[%u.%06u] [%llu] TXD\n",
     (unsigned int) FUNC_2(VAR_66->hdr.tstamp_sec),
     (unsigned int) FUNC_2(VAR_66->hdr.tstamp_usec),
     (unsigned long long) FUNC_3(VAR_66->hdr.threadid));

 FUNC_5("  link=0x%08x, data=0x%08x\n",
     VAR_67.ds_link,
     VAR_67.ds_data);


 FUNC_5("    Frame Len=%d, VMF=%d\n",
      VAR_67.ds_ctl0 & VAR_24,
     FUNC_0(VAR_67.ds_ctl0, VAR_53));
 FUNC_5("    TX power0=%d, RtsEna=%d, Veol=%d, ClrDstMask=%d\n",
     FUNC_1(VAR_67.ds_ctl0, VAR_58),
     FUNC_0(VAR_67.ds_ctl0, VAR_45),
     FUNC_0(VAR_67.ds_ctl0, VAR_52),
     FUNC_0(VAR_67.ds_ctl0, VAR_16));
 FUNC_5("    TxIntrReq=%d, DestIdxValid=%d, CtsEnable=%d\n",
     FUNC_0(VAR_67.ds_ctl0, VAR_50),
     FUNC_0(VAR_67.ds_ctl0, VAR_19),
     FUNC_0(VAR_67.ds_ctl0, VAR_11));


 FUNC_5("    BufLen=%d, TxMore=%d, DestIdx=%d,"
     " FrType=0x%x\n",
     VAR_67.ds_ctl1 & VAR_9,
     FUNC_0(VAR_67.ds_ctl1, VAR_51),
     FUNC_1(VAR_67.ds_ctl1, VAR_18),
     FUNC_1(VAR_67.ds_ctl1, VAR_25));
 FUNC_5("    NoAck=%d, InsertTs=%d, CorruptFcs=%d, ExtOnly=%d,"
     " ExtAndCtl=%d\n",
     FUNC_0(VAR_67.ds_ctl1, VAR_34),
     FUNC_0(VAR_67.ds_ctl1, VAR_30),
     FUNC_0(VAR_67.ds_ctl1, VAR_17),
     FUNC_0(VAR_67.ds_ctl1, VAR_23),
     FUNC_0(VAR_67.ds_ctl1, VAR_22));
 FUNC_5("    MoreAggr=%d, IsAggr=%d, MoreRifs=%d\n",
     FUNC_0(VAR_67.ds_ctl1, VAR_32),
     FUNC_0(VAR_67.ds_ctl1, VAR_31),
     FUNC_0(VAR_67.ds_ctl1, VAR_33));


 FUNC_5("    DurUpEna=%d, Burstdur=0x%04x\n",
     FUNC_0(VAR_67.ds_ctl2, VAR_20),
     FUNC_1(VAR_67.ds_ctl2, VAR_10));
 FUNC_5("    Try0=%d, Try1=%d, Try2=%d, Try3=%d\n",
     FUNC_1(VAR_67.ds_ctl2, VAR_54),
     FUNC_1(VAR_67.ds_ctl2, VAR_55),
     FUNC_1(VAR_67.ds_ctl2, VAR_56),
     FUNC_1(VAR_67.ds_ctl2, VAR_57));


 FUNC_5("    try 0: Rate=0x%02x, PktDur=%d, RTS/CTS ena=%d\n",
     FUNC_1(VAR_67.ds_ctl3, VAR_62),
     FUNC_1(VAR_67.ds_ctl4, VAR_35),
     FUNC_0(VAR_67.ds_ctl4, VAR_40));
 FUNC_5("    try 1: Rate=0x%02x, PktDur=%d, RTS/CTS ena=%d\n",
     FUNC_1(VAR_67.ds_ctl3, VAR_63),
     FUNC_1(VAR_67.ds_ctl4, VAR_36),
     FUNC_0(VAR_67.ds_ctl4, VAR_41));


 FUNC_5("    try 2: Rate=0x%02x, PktDur=%d, RTS/CTS ena=%d\n",
     FUNC_1(VAR_67.ds_ctl3, VAR_64),
     FUNC_1(VAR_67.ds_ctl5, VAR_37),
     FUNC_0(VAR_67.ds_ctl5, VAR_42));
 FUNC_5("    try 3: Rate=0x%02x, PktDur=%d, RTS/CTS ena=%d\n",
     FUNC_1(VAR_67.ds_ctl3, VAR_65),
     FUNC_1(VAR_67.ds_ctl5, VAR_38),
     FUNC_0(VAR_67.ds_ctl5, VAR_43));


 FUNC_5("    AggrLen=%d, PadDelim=%d, EncrType=%d\n",
     FUNC_1(VAR_67.ds_ctl6, VAR_4),
     FUNC_1(VAR_67.ds_ctl6, VAR_39),
     FUNC_1(VAR_67.ds_ctl6, VAR_21));


 FUNC_5("    try 0: chainMask=0x%x, GI=%d, 2040=%d, STBC=%d\n",
     FUNC_1(VAR_67.ds_ctl7, VAR_12),
     FUNC_0(VAR_67.ds_ctl7, VAR_26),
     FUNC_0(VAR_67.ds_ctl7, VAR_0),
     FUNC_0(VAR_67.ds_ctl7, VAR_46));
 FUNC_5("    try 1: chainMask=0x%x, GI=%d, 2040=%d, STBC=%d\n",
     FUNC_1(VAR_67.ds_ctl7, VAR_13),
     FUNC_0(VAR_67.ds_ctl7, VAR_27),
     FUNC_0(VAR_67.ds_ctl7, VAR_1),
     FUNC_0(VAR_67.ds_ctl7, VAR_47));
 FUNC_5("    try 2: chainMask=0x%x, GI=%d, 2040=%d, STBC=%d\n",
     FUNC_1(VAR_67.ds_ctl7, VAR_14),
     FUNC_0(VAR_67.ds_ctl7, VAR_28),
     FUNC_0(VAR_67.ds_ctl7, VAR_2),
     FUNC_0(VAR_67.ds_ctl7, VAR_48));
 FUNC_5("    try 3: chainMask=0x%x, GI=%d, 2040=%d, STBC=%d\n",
     FUNC_1(VAR_67.ds_ctl7, VAR_15),
     FUNC_0(VAR_67.ds_ctl7, VAR_29),
     FUNC_0(VAR_67.ds_ctl7, VAR_3),
     FUNC_0(VAR_67.ds_ctl7, VAR_49));

 FUNC_5("    RTSCtsRate=0x%02x\n", FUNC_1(VAR_67.ds_ctl7, VAR_44));


 FUNC_5("    try 0: ant=0x%08x\n", VAR_67.ds_ctl8 & VAR_5);


 FUNC_5("    try 1: TxPower=%d, ant=0x%08x\n",
     FUNC_1(VAR_67.ds_ctl9, VAR_59),
     VAR_67.ds_ctl9 & VAR_6);


 FUNC_5("    try 2: TxPower=%d, ant=0x%08x\n",
     FUNC_1(VAR_67.ds_ctl10, VAR_60),
     VAR_67.ds_ctl10 & VAR_7);


 FUNC_5("    try 3: TxPower=%d, ant=0x%08x\n",
     FUNC_1(VAR_67.ds_ctl11, VAR_61),
     VAR_67.ds_ctl11 & VAR_8);

 FUNC_5("\n ------ \n");
}

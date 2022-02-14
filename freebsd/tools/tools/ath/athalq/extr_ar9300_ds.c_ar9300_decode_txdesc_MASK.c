
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tstamp_usec; int tstamp_sec; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;
struct ar9300_txc {int ds_ctl10; int ds_info; int ds_link; int ds_data0; int ds_ctl3; int ds_data1; int ds_ctl5; int ds_data2; int ds_ctl7; int ds_data3; int ds_ctl9; int ds_ctl11; int ds_ctl12; int ds_ctl13; int ds_ctl14; int ds_ctl15; int ds_ctl16; int ds_ctl17; int ds_ctl18; int ds_ctl19; int ds_ctl20; int ds_ctl21; int ds_ctl22; } ;


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
 int VAR_66 ;
 int VAR_67 ;
 int VAR_68 ;
 int VAR_69 ;
 int VAR_70 ;
 int VAR_71 ;
 int VAR_72 ;
 int VAR_73 ;
 int VAR_74 ;
 int VAR_75 ;
 int VAR_76 ;
 int VAR_77 ;
 int VAR_78 ;
 int VAR_79 ;
 int VAR_80 ;
 int VAR_81 ;
 int VAR_82 ;
 int VAR_83 ;
 int VAR_84 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (struct ar9300_txc*,int *,int) ;
 int FUNC_5 (char*,...) ;

__attribute__((used)) static void
FUNC_6(struct if_ath_alq_payload *VAR_85)
{
 struct ar9300_txc VAR_86;


 FUNC_4(&VAR_86, &VAR_85->payload, 96);

 FUNC_5("[%u.%06u] [%llu] TXD DescId=0x%04x\n",
     (unsigned int) FUNC_2(VAR_85->hdr.tstamp_sec),
     (unsigned int) FUNC_2(VAR_85->hdr.tstamp_usec),
     (unsigned long long) FUNC_3(VAR_85->hdr.threadid),
     (unsigned int) FUNC_1(VAR_86.ds_ctl10, VAR_66));

 FUNC_5("  DescLen=%d, TxQcuNum=%d, CtrlStat=%d, DescId=0x%04x\n",
     VAR_86.ds_info & 0xff,
     FUNC_1(VAR_86.ds_info, VAR_70),
     FUNC_1(VAR_86.ds_info, VAR_14),
     FUNC_1(VAR_86.ds_info, VAR_16));


 FUNC_5("    Link 0x%08x\n", VAR_86.ds_link);


 FUNC_5("    Data0 0x%08x Len %d\n",
     VAR_86.ds_data0,
     FUNC_1(VAR_86.ds_ctl3, VAR_5));


 FUNC_5("    Data1 0x%08x Len %d\n",
     VAR_86.ds_data1,
     FUNC_1(VAR_86.ds_ctl5, VAR_5));


 FUNC_5("    Data2 0x%08x Len %d\n",
     VAR_86.ds_data2,
     FUNC_1(VAR_86.ds_ctl7, VAR_5));


 FUNC_5("    Data3 0x%08x Len %d\n",
     VAR_86.ds_data3,
     FUNC_1(VAR_86.ds_ctl9, VAR_5));



 FUNC_5("    Desc ID=0x%04x, Chksum=0x%04x (ctl10=0x%08x)\n",
     FUNC_1(VAR_86.ds_ctl10, VAR_66),
     VAR_86.ds_ctl10 & VAR_69,
     VAR_86.ds_ctl10);


 FUNC_5("    Frame Len=%d, VMF=%d, LowRxChain=%d, TxClrRetry=%d\n",
      VAR_86.ds_ctl11 & VAR_23,
     FUNC_0(VAR_86.ds_ctl11, VAR_72),
     FUNC_0(VAR_86.ds_ctl11, VAR_33),
     FUNC_0(VAR_86.ds_ctl11, VAR_64));
 FUNC_5("    TX power 0 = %d, RtsEna=%d, Veol=%d, ClrDstMask=%d\n",
     FUNC_1(VAR_86.ds_ctl11, VAR_77),
     FUNC_0(VAR_86.ds_ctl11, VAR_51),
     FUNC_0(VAR_86.ds_ctl11, VAR_71),
     FUNC_0(VAR_86.ds_ctl11, VAR_12));
 FUNC_5("    TxIntrReq=%d, DestIdxValid=%d, CtsEnable=%d\n",
     FUNC_0(VAR_86.ds_ctl11, VAR_67),
     FUNC_0(VAR_86.ds_ctl11, VAR_18),
     FUNC_0(VAR_86.ds_ctl11, VAR_15));


 FUNC_5("    Paprd Chain Mask=0x%x, TxMore=%d, DestIdx=%d,"
     " FrType=0x%x\n",
     FUNC_1(VAR_86.ds_ctl12, VAR_46),
     FUNC_0(VAR_86.ds_ctl12, VAR_68),
     FUNC_1(VAR_86.ds_ctl12, VAR_17),
     FUNC_1(VAR_86.ds_ctl12, VAR_24));
 FUNC_5("    NoAck=%d, InsertTs=%d, CorruptFcs=%d, ExtOnly=%d,"
     " ExtAndCtl=%d\n",
     FUNC_0(VAR_86.ds_ctl12, VAR_39),
     FUNC_0(VAR_86.ds_ctl12, VAR_29),
     FUNC_0(VAR_86.ds_ctl12, VAR_13),
     FUNC_0(VAR_86.ds_ctl12, VAR_22),
     FUNC_0(VAR_86.ds_ctl12, VAR_21));
 FUNC_5("    IsAggr=%d, MoreRifs=%d, LocMode=%d\n",
     FUNC_0(VAR_86.ds_ctl12, VAR_30),
     FUNC_0(VAR_86.ds_ctl12, VAR_34),
     FUNC_0(VAR_86.ds_ctl12, VAR_32));



 FUNC_5("    DurUpEna=%d, Burstdur=0x%04x\n",
     FUNC_0(VAR_86.ds_ctl13, VAR_19),
     FUNC_1(VAR_86.ds_ctl13, VAR_6));
 FUNC_5("    Try0=%d, Try1=%d, Try2=%d, Try3=%d\n",
     FUNC_1(VAR_86.ds_ctl13, VAR_73),
     FUNC_1(VAR_86.ds_ctl13, VAR_74),
     FUNC_1(VAR_86.ds_ctl13, VAR_75),
     FUNC_1(VAR_86.ds_ctl13, VAR_76));


 FUNC_5("    rate0=0x%02x, rate1=0x%02x, rate2=0x%02x, rate3=0x%02x\n",
     FUNC_1(VAR_86.ds_ctl14, VAR_81),
     FUNC_1(VAR_86.ds_ctl14, VAR_82),
     FUNC_1(VAR_86.ds_ctl14, VAR_83),
     FUNC_1(VAR_86.ds_ctl14, VAR_84));


 FUNC_5("    try 0: PktDur=%d, RTS/CTS ena=%d\n",
     FUNC_1(VAR_86.ds_ctl15, VAR_41),
     FUNC_0(VAR_86.ds_ctl15, VAR_47));
 FUNC_5("    try 1: PktDur=%d, RTS/CTS ena=%d\n",
     FUNC_1(VAR_86.ds_ctl15, VAR_42),
     FUNC_0(VAR_86.ds_ctl15, VAR_48));


 FUNC_5("    try 2: PktDur=%d, RTS/CTS ena=%d\n",
     FUNC_1(VAR_86.ds_ctl16, VAR_43),
     FUNC_0(VAR_86.ds_ctl16, VAR_49));
 FUNC_5("    try 3: PktDur=%d, RTS/CTS ena=%d\n",
     FUNC_1(VAR_86.ds_ctl16, VAR_44),
     FUNC_0(VAR_86.ds_ctl16, VAR_50));


 FUNC_5("    AggrLen=%d, PadDelim=%d, EncrType=%d, TxDcApStaSel=%d\n",
     FUNC_1(VAR_86.ds_ctl17, VAR_4),
     FUNC_1(VAR_86.ds_ctl17, VAR_45),
     FUNC_1(VAR_86.ds_ctl17, VAR_20),
     FUNC_0(VAR_86.ds_ctl17, VAR_65));
 FUNC_5("    Calib=%d LDPC=%d\n",
     FUNC_0(VAR_86.ds_ctl17, VAR_7),
     FUNC_0(VAR_86.ds_ctl17, VAR_31));


 FUNC_5("    try 0: chainMask=0x%x, GI=%d, 2040=%d, STBC=%d\n",
     FUNC_1(VAR_86.ds_ctl18, VAR_8),
     FUNC_0(VAR_86.ds_ctl18, VAR_25),
     FUNC_0(VAR_86.ds_ctl18, VAR_0),
     FUNC_0(VAR_86.ds_ctl18, VAR_52));
 FUNC_5("    try 1: chainMask=0x%x, GI=%d, 2040=%d, STBC=%d\n",
     FUNC_1(VAR_86.ds_ctl18, VAR_9),
     FUNC_0(VAR_86.ds_ctl18, VAR_26),
     FUNC_0(VAR_86.ds_ctl18, VAR_1),
     FUNC_0(VAR_86.ds_ctl18, VAR_53));
 FUNC_5("    try 2: chainMask=0x%x, GI=%d, 2040=%d, STBC=%d\n",
     FUNC_1(VAR_86.ds_ctl18, VAR_10),
     FUNC_0(VAR_86.ds_ctl18, VAR_27),
     FUNC_0(VAR_86.ds_ctl18, VAR_2),
     FUNC_0(VAR_86.ds_ctl18, VAR_54));
 FUNC_5("    try 3: chainMask=0x%x, GI=%d, 2040=%d, STBC=%d\n",
     FUNC_1(VAR_86.ds_ctl18, VAR_11),
     FUNC_0(VAR_86.ds_ctl18, VAR_28),
     FUNC_0(VAR_86.ds_ctl18, VAR_3),
     FUNC_0(VAR_86.ds_ctl18, VAR_55));


 FUNC_5("    NotSounding=%d\n",
     FUNC_0(VAR_86.ds_ctl19, VAR_40));

 FUNC_5("    try 0: ant=0x%08x, antsel=%d, ness=%d\n",
     VAR_86.ds_ctl19 & VAR_56,
     FUNC_0(VAR_86.ds_ctl19, VAR_60),
     FUNC_1(VAR_86.ds_ctl19, VAR_35));


 FUNC_5("    try 1: TxPower=%d, ant=0x%08x, antsel=%d, ness=%d\n",
     FUNC_1(VAR_86.ds_ctl20, VAR_78),
     VAR_86.ds_ctl20 & VAR_57,
     FUNC_0(VAR_86.ds_ctl20, VAR_61),
     FUNC_1(VAR_86.ds_ctl20, VAR_36));


 FUNC_5("    try 2: TxPower=%d, ant=0x%08x, antsel=%d, ness=%d\n",
     FUNC_1(VAR_86.ds_ctl21, VAR_79),
     VAR_86.ds_ctl21 & VAR_58,
     FUNC_0(VAR_86.ds_ctl21, VAR_62),
     FUNC_1(VAR_86.ds_ctl21, VAR_37));


 FUNC_5("    try 3: TxPower=%d, ant=0x%08x, antsel=%d, ness=%d\n",
     FUNC_1(VAR_86.ds_ctl22, VAR_80),
     VAR_86.ds_ctl22 & VAR_59,
     FUNC_0(VAR_86.ds_ctl22, VAR_63),
     FUNC_1(VAR_86.ds_ctl22, VAR_38));

 FUNC_5("\n ------ \n");
}

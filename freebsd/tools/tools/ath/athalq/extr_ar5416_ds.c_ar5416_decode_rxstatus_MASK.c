
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int tstamp_usec; int tstamp_sec; int threadid; } ;
struct if_ath_alq_payload {TYPE_1__ hdr; int payload; } ;
struct ar5416_desc {int ds_rxstatus8; int ds_rxstatus0; int ds_rxstatus2; int ds_link; int ds_data; int ds_ctl0; int ds_ctl1; int ds_rxstatus4; int ds_rxstatus1; int ds_rxstatus3; int ds_rxstatus5; int ds_rxstatus6; int ds_rxstatus7; } ;


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


 FUNC_4(&VAR_31, &VAR_30->payload, sizeof(struct ar5416_desc));

 FUNC_5("[%u.%06u] [%llu] RXSTATUS: RxDone=%d, RxRate=0x%02x, TS=0x%08x\n",
     (unsigned int) FUNC_2(VAR_30->hdr.tstamp_sec),
     (unsigned int) FUNC_2(VAR_30->hdr.tstamp_usec),
     (unsigned long long) FUNC_3(VAR_30->hdr.threadid),
     FUNC_0(VAR_31.ds_rxstatus8, VAR_17),
     FUNC_1(VAR_31.ds_rxstatus0, VAR_29),
     VAR_31.ds_rxstatus2);

 FUNC_5("  link=0x%08x, data=0x%08x, ctl0=0x%08x, ctl2=0x%08x\n",
     VAR_31.ds_link,
     VAR_31.ds_data,
     VAR_31.ds_ctl0,
     VAR_31.ds_ctl1);






 FUNC_5("  RSSICtl[0]=%d, RSSICtl[1]=%d, RSSICtl[2]=%d\n",
     FUNC_1(VAR_31.ds_rxstatus0, VAR_22),
     FUNC_1(VAR_31.ds_rxstatus0, VAR_23),
     FUNC_1(VAR_31.ds_rxstatus0, VAR_24));


 FUNC_5("  RSSIExt[0]=%d, RSSIExt[1]=%d, RSSIExt[2]=%d, RSSIComb=%d\n",
     FUNC_1(VAR_31.ds_rxstatus4, VAR_25),
     FUNC_1(VAR_31.ds_rxstatus4, VAR_26),
     FUNC_1(VAR_31.ds_rxstatus4, VAR_27),
     FUNC_1(VAR_31.ds_rxstatus4, VAR_28));


 FUNC_5("  RxTimestamp=0x%08x,", VAR_31.ds_rxstatus2);


 FUNC_5(" DataLen=%d, RxMore=%d, NumDelim=%d\n",
     VAR_31.ds_rxstatus1 & VAR_2,
     FUNC_0(VAR_31.ds_rxstatus1, VAR_20),
     FUNC_1(VAR_31.ds_rxstatus1, VAR_10));


 FUNC_5("  GI=%d, 2040=%d, RxRate=0x%02x, DupFrame=%d, RxAnt=0x%08x\n",
     FUNC_0(VAR_31.ds_rxstatus3, VAR_5),
     FUNC_0(VAR_31.ds_rxstatus3, VAR_0),
     FUNC_1(VAR_31.ds_rxstatus0, VAR_29),
     FUNC_0(VAR_31.ds_rxstatus3, VAR_4),
     FUNC_1(VAR_31.ds_rxstatus3, VAR_16));




 FUNC_5("  RxEvm0=0x%08x, RxEvm1=0x%08x, RxEvm2=0x%08x\n",
     VAR_31.ds_rxstatus5,
     VAR_31.ds_rxstatus6,
     VAR_31.ds_rxstatus7);


 FUNC_5("  RxDone=%d, RxFrameOk=%d, CrcErr=%d, DecryptCrcErr=%d\n",
     FUNC_0(VAR_31.ds_rxstatus8, VAR_17),
     FUNC_0(VAR_31.ds_rxstatus8, VAR_18),
     FUNC_0(VAR_31.ds_rxstatus8, VAR_1),
     FUNC_0(VAR_31.ds_rxstatus8, VAR_3));
 FUNC_5("  PhyErr=%d, MichaelErr=%d, PreDelimCRCErr=%d, KeyIdxValid=%d\n",
     FUNC_0(VAR_31.ds_rxstatus8, VAR_11),
     FUNC_0(VAR_31.ds_rxstatus8, VAR_9),
     FUNC_0(VAR_31.ds_rxstatus8, VAR_14),
     FUNC_0(VAR_31.ds_rxstatus8, VAR_19));

 FUNC_5("  RxMoreAggr=%d, RxAggr=%d, PostDelimCRCErr=%d, HiRxChain=%d\n",
     FUNC_0(VAR_31.ds_rxstatus8, VAR_21),
     FUNC_0(VAR_31.ds_rxstatus8, VAR_15),
     FUNC_0(VAR_31.ds_rxstatus8, VAR_13),
     FUNC_0(VAR_31.ds_rxstatus8, VAR_6));


 if (FUNC_0(VAR_31.ds_rxstatus8, VAR_11))
  FUNC_5("  PhyErrCode=0x%02x",
      FUNC_1(VAR_31.ds_rxstatus8, VAR_12));
 else
  FUNC_5("  KeyIdx=0x%02x",
      FUNC_1(VAR_31.ds_rxstatus8, VAR_7));
 FUNC_5(", KeyMiss=%d\n",
     FUNC_0(VAR_31.ds_rxstatus8, VAR_8));

 FUNC_5("\n ------\n");
}

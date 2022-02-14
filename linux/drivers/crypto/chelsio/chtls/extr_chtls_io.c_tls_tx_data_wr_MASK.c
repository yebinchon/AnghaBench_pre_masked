
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u32 ;
struct tls_scmd {int seqno_numivs; int ivgen_hdrlen; } ;
struct sock {int dummy; } ;
struct sk_buff {int dummy; } ;
struct net_device {int dummy; } ;
struct fw_tlstx_data_wr {scalar_t__ r10; int pdusinplenmax_pkd; void* expinplenmax_pkd; void* adjustedplen_pkd; void* mfs; void* plen; void* ctxloc_to_exp; void* lsodisable_to_flags; void* flowid_len16; void* op_to_immdlen; } ;
struct cpl_tx_tls_sfo {int scmd1; void* ivgen_hdrlen; void* seqno_numivs; scalar_t__ r1_lo; void* type_protover; void* pld_len; void* op_to_seg_len; } ;
struct chtls_hws {int mfs; int keylen; struct tls_scmd scmd; int pdus; int expansion; int adjustlen; } ;
struct chtls_sock {int txq; int tid; struct chtls_hws tlshws; struct net_device* egress_dev; } ;
struct TYPE_6__ {int tls_pdu_tx; } ;
struct adapter {TYPE_1__ chcr_stats; } ;
struct TYPE_7__ {int type; } ;
struct TYPE_8__ {TYPE_2__ tls; } ;
struct TYPE_10__ {TYPE_3__ ulp; } ;
struct TYPE_9__ {int nonagle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;
 unsigned char VAR_2 ;
 int FUNC_5 (int ) ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int) ;
 int FUNC_13 (int) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int) ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 unsigned int FUNC_20 (int) ;
 unsigned int FUNC_21 (int ) ;
 unsigned int FUNC_22 (int ) ;
 int VAR_10 ;
 TYPE_5__* FUNC_23 (struct sk_buff*) ;
 scalar_t__ FUNC_24 (struct sk_buff*,int) ;
 int FUNC_25 (int *) ;
 void* FUNC_26 (int) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (struct sock*,int ) ;
 void* FUNC_29 (int) ;
 void* FUNC_30 (int) ;
 scalar_t__ FUNC_31 (struct sk_buff*) ;
 struct adapter* FUNC_32 (struct net_device*) ;
 struct chtls_sock* FUNC_33 (struct sock*) ;
 scalar_t__ FUNC_34 (int *) ;
 int FUNC_35 (struct sk_buff*) ;
 int FUNC_36 (struct sk_buff*) ;
 TYPE_4__* FUNC_37 (struct sock*) ;
 unsigned char FUNC_38 (int ) ;
 int FUNC_39 (struct chtls_hws*) ;

__attribute__((used)) static void FUNC_40(struct sock *VAR_11, struct sk_buff *VAR_12,
      int VAR_13, int VAR_14, u32 VAR_15,
      int VAR_16, int VAR_17)
{
 struct fw_tlstx_data_wr *VAR_18;
 struct cpl_tx_tls_sfo *VAR_19;
 unsigned int VAR_20;
 struct tls_scmd *VAR_21;
 unsigned char VAR_22;
 struct chtls_sock *VAR_23;
 struct net_device *VAR_24;
 struct chtls_hws *VAR_25;
 struct tls_scmd *VAR_26;
 struct adapter *VAR_27;
 unsigned char *VAR_28;
 int VAR_29;
 int VAR_30;
 int VAR_31;

 VAR_23 = FUNC_33(VAR_11);
 VAR_30 = FUNC_35(VAR_12);
 VAR_24 = VAR_23->egress_dev;
 VAR_27 = FUNC_32(VAR_24);
 VAR_25 = &VAR_23->tlshws;
 VAR_26 = &VAR_25->scmd;
 VAR_31 = VAR_13 + VAR_16;

 VAR_13 = (VAR_13 < VAR_25->mfs) ? VAR_13 : VAR_25->mfs;
 FUNC_25(&VAR_27->chcr_stats.tls_pdu_tx);

 VAR_21 = VAR_26;
 VAR_21->seqno_numivs &= 0xffffff80;
 VAR_21->seqno_numivs |= FUNC_19(VAR_17);
 VAR_25->scmd = *VAR_21;

 VAR_28 = (unsigned char *)FUNC_24(VAR_12, sizeof(struct cpl_tx_tls_sfo));
 VAR_19 = (struct cpl_tx_tls_sfo *)VAR_28;
 VAR_28 = (unsigned char *)FUNC_24(VAR_12, (sizeof(struct
    fw_tlstx_data_wr)));

 VAR_18 = (struct fw_tlstx_data_wr *)VAR_28;
 VAR_29 = (VAR_14 ? VAR_13 : 0);
 VAR_18->op_to_immdlen =
  FUNC_29(FUNC_18(VAR_6) |
  FUNC_7(1) |
  FUNC_12(VAR_29));
 VAR_18->flowid_len16 = FUNC_29(FUNC_11(VAR_23->tid) |
         FUNC_15(VAR_15));
 VAR_20 = FUNC_21(VAR_10);

 if (FUNC_31(VAR_12))
  VAR_20 |= VAR_4 |
   ((FUNC_37(VAR_11)->nonagle & VAR_8) ? 0 :
   VAR_5);

 VAR_18->lsodisable_to_flags =
   FUNC_29(FUNC_21(VAR_10) |
         FUNC_22(FUNC_36(VAR_12)) |
         VAR_7 | VAR_20 |
         FUNC_20((!FUNC_28(VAR_11, VAR_3)) &&
      FUNC_34(&VAR_23->txq)));

 VAR_18->ctxloc_to_exp =
   FUNC_29(FUNC_16(VAR_17) |
         FUNC_10(VAR_16) |
         FUNC_8(VAR_0) |
         FUNC_13(!VAR_30) |
         FUNC_14(VAR_25->keylen >> 4));


 VAR_18->plen = FUNC_29(VAR_31);
 VAR_18->mfs = FUNC_30(VAR_25->mfs);
 VAR_18->adjustedplen_pkd =
  FUNC_30(FUNC_6(VAR_25->adjustlen));
 VAR_18->expinplenmax_pkd =
  FUNC_30(FUNC_9(VAR_25->expansion));
 VAR_18->pdusinplenmax_pkd =
  FUNC_17(VAR_25->pdus);
 VAR_18->r10 = 0;

 VAR_22 = FUNC_38(FUNC_23(VAR_12)->ulp.tls.type);
 VAR_19->op_to_seg_len = FUNC_29(FUNC_2(VAR_1) |
           FUNC_1(VAR_22) |
           FUNC_0(2) |
           FUNC_4(VAR_13));
 VAR_19->pld_len = FUNC_29(VAR_31 - VAR_16);

 VAR_19->type_protover = FUNC_29(FUNC_5
  ((VAR_22 == VAR_2) ?
  VAR_9 : 0) |
  FUNC_3(0));


 VAR_19->r1_lo = 0;
 VAR_19->seqno_numivs = FUNC_26(VAR_25->scmd.seqno_numivs);
 VAR_19->ivgen_hdrlen = FUNC_26(VAR_25->scmd.ivgen_hdrlen);
 VAR_19->scmd1 = FUNC_27(FUNC_39(VAR_25));
}

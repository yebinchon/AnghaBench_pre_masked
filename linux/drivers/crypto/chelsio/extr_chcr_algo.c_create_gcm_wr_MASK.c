
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_7__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int u8 ;
struct ulptx_sgl {int dummy; } ;
struct sk_buff {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cpl_rx_phys_dsgl {int dummy; } ;
struct TYPE_11__ {int * key; int ctx_hdr; } ;
struct TYPE_10__ {int ivgen_hdrlen; int seqno_numivs; int cipherstop_lo_authinsert; int aadstart_cipherstop_hi; void* pldlen; int op_ivinsrtofst; } ;
struct chcr_wr {TYPE_3__ key_ctx; TYPE_2__ sec_cpl; } ;
struct chcr_aead_reqctx {scalar_t__ op; int imm; struct sk_buff* skb; int verify; scalar_t__ b0_len; } ;
struct chcr_aead_ctx {unsigned int enckey_len; int salt; int key; int key_ctx_hdr; int hmac_ctrl; } ;
struct TYPE_13__ {int flags; } ;
struct aead_request {unsigned int assoclen; scalar_t__ cryptlen; TYPE_5__ base; int iv; int src; int dst; } ;
struct TYPE_9__ {int aead_rqst; int fallback; } ;
struct adapter {TYPE_1__ chcr_stats; } ;
typedef int gfp_t ;
struct TYPE_14__ {int ghash_h; } ;
struct TYPE_12__ {int tx_chan_id; int dev; } ;


 struct chcr_aead_ctx* FUNC_0 (TYPE_4__*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int ,int,unsigned int,unsigned int) ;
 int FUNC_4 (int,int,int,int ) ;
 int FUNC_5 (int ,int ,int,int ,int ,unsigned int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (scalar_t__,int,int ,int ,int ,int) ;
 int VAR_10 ;
 TYPE_7__* FUNC_8 (struct chcr_aead_ctx*) ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 struct chcr_wr* FUNC_9 (struct sk_buff*,unsigned int) ;
 TYPE_4__* FUNC_10 (struct crypto_aead*) ;
 struct chcr_aead_reqctx* FUNC_11 (struct aead_request*) ;
 struct sk_buff* FUNC_12 (unsigned int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct aead_request*,struct cpl_rx_phys_dsgl*,unsigned short) ;
 int FUNC_15 (struct aead_request*,struct ulptx_sgl*) ;
 int FUNC_16 (struct aead_request*) ;
 int FUNC_17 (struct aead_request*) ;
 int FUNC_18 (struct aead_request*,scalar_t__) ;
 scalar_t__ FUNC_19 (struct aead_request*,unsigned int,int ,unsigned int,scalar_t__) ;
 int FUNC_20 (TYPE_4__*,struct chcr_wr*,TYPE_5__*,int,int,unsigned int,unsigned int,int ) ;
 unsigned int FUNC_21 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_22 (struct aead_request*) ;
 scalar_t__ FUNC_23 (struct crypto_aead*) ;
 unsigned int FUNC_24 (unsigned int) ;
 void* FUNC_25 (int) ;
 int FUNC_26 (int *,int ,int) ;
 struct adapter* FUNC_27 (int ) ;
 int FUNC_28 (unsigned int,int) ;
 unsigned int FUNC_29 (int ,scalar_t__,int ,int ) ;
 int FUNC_30 (unsigned int) ;

__attribute__((used)) static struct sk_buff *FUNC_31(struct aead_request *VAR_18,
         unsigned short VAR_19,
         int VAR_20)
{
 struct crypto_aead *VAR_21 = FUNC_22(VAR_18);
 struct chcr_aead_ctx *VAR_22 = FUNC_0(FUNC_10(VAR_21));
 struct chcr_aead_reqctx *VAR_23 = FUNC_11(VAR_18);
 struct sk_buff *VAR_24 = ((void*)0);
 struct chcr_wr *VAR_25;
 struct cpl_rx_phys_dsgl *VAR_26;
 struct ulptx_sgl *VAR_27;
 unsigned int VAR_28, VAR_29 = 0, VAR_30;
 unsigned int VAR_31 = 0, VAR_32 = 0, VAR_33, VAR_34 = VAR_18->assoclen;
 unsigned int VAR_35 = FUNC_21(VAR_21);
 int VAR_36 = -VAR_8;
 u8 *VAR_37;
 gfp_t VAR_38 = VAR_18->base.flags & VAR_7 ? VAR_13 :
  VAR_12;
 struct adapter *VAR_39 = FUNC_27(FUNC_10(VAR_21)->dev);

 if (FUNC_23(VAR_21) == VAR_6)
  VAR_34 = VAR_18->assoclen - 8;

 VAR_23->b0_len = 0;
 VAR_36 = FUNC_17(VAR_18);
 if (VAR_36)
  return FUNC_2(VAR_36);
 VAR_29 = FUNC_29(VAR_18->dst, VAR_18->assoclen + VAR_18->cryptlen +
    (VAR_23->op ? -VAR_35 : VAR_35),
    VAR_1, 0);
 VAR_30 = FUNC_29(VAR_18->src, VAR_18->assoclen + VAR_18->cryptlen,
          VAR_5, 0);
 VAR_29 += VAR_15;
 VAR_31 = FUNC_24(VAR_29);
 VAR_33 = FUNC_28(VAR_22->enckey_len, 16) + VAR_0;
 VAR_28 = FUNC_1(VAR_33, VAR_31);
 VAR_23->imm = (VAR_28 + VAR_18->assoclen + VAR_18->cryptlen) <=
   VAR_16;
 VAR_32 = VAR_23->imm ? FUNC_28(VAR_18->assoclen + VAR_18->cryptlen, 16) :
  (FUNC_30(VAR_30) * 8);
 VAR_28 += VAR_32;
 VAR_28 = FUNC_28(VAR_28, 16);
 if (FUNC_19(VAR_18, VAR_29, VAR_17,
       VAR_28, VAR_23->op)) {

  FUNC_13(&VAR_39->chcr_stats.fallback);
  FUNC_16(VAR_18);
  return FUNC_2(FUNC_18(VAR_18, VAR_23->op));
 }
 VAR_24 = FUNC_12(VAR_28, VAR_38);
 if (!VAR_24) {
  VAR_36 = -VAR_9;
  goto err;
 }

 VAR_25 = FUNC_9(VAR_24, VAR_28);


 VAR_32 = (VAR_23->op == VAR_2) ? 0 : VAR_35;
 VAR_25->sec_cpl.op_ivinsrtofst = FUNC_6(
     FUNC_10(VAR_21)->tx_chan_id, 2, 1);
 VAR_25->sec_cpl.pldlen =
  FUNC_25(VAR_18->assoclen + VAR_14 + VAR_18->cryptlen);
 VAR_25->sec_cpl.aadstart_cipherstop_hi = FUNC_4(
     VAR_34 ? 1 + VAR_14 : 0,
     VAR_34 ? VAR_14 + VAR_34 : 0,
     VAR_18->assoclen + VAR_14 + 1, 0);
 VAR_25->sec_cpl.cipherstop_lo_authinsert =
   FUNC_3(0, VAR_18->assoclen + VAR_14 + 1,
      VAR_32, VAR_32);
 VAR_25->sec_cpl.seqno_numivs =
   FUNC_7(VAR_23->op, (VAR_23->op ==
     VAR_2) ? 1 : 0,
     VAR_4,
     VAR_3,
     VAR_22->hmac_ctrl, VAR_14 >> 1);
 VAR_25->sec_cpl.ivgen_hdrlen = FUNC_5(0, 0, 1,
     0, 0, VAR_31);
 VAR_25->key_ctx.ctx_hdr = VAR_22->key_ctx_hdr;
 FUNC_26(VAR_25->key_ctx.key, VAR_22->key, VAR_22->enckey_len);
 FUNC_26(VAR_25->key_ctx.key + FUNC_28(VAR_22->enckey_len, 16),
        FUNC_8(VAR_22)->ghash_h, VAR_0);

 VAR_26 = (struct cpl_rx_phys_dsgl *)((u8 *)(VAR_25 + 1) + VAR_33);
 VAR_37 = (u8 *)(VAR_26 + 1) + VAR_31;


 if (FUNC_23(VAR_21) ==
     VAR_6) {
  FUNC_26(VAR_37, VAR_22->salt, 4);
  FUNC_26(VAR_37 + 4, VAR_18->iv, VAR_11);
 } else {
  FUNC_26(VAR_37, VAR_18->iv, VAR_10);
 }
 *((unsigned int *)(VAR_37 + 12)) = FUNC_25(0x01);

 VAR_27 = (struct ulptx_sgl *)(VAR_37 + 16);

 FUNC_14(VAR_18, VAR_26, VAR_19);
 FUNC_15(VAR_18, VAR_27);
 FUNC_13(&VAR_39->chcr_stats.aead_rqst);
 VAR_32 = sizeof(struct cpl_rx_phys_dsgl) + VAR_31 + VAR_14 +
  VAR_33 + (VAR_23->imm ? (VAR_18->assoclen + VAR_18->cryptlen) : 0);
 FUNC_20(FUNC_10(VAR_21), VAR_25, &VAR_18->base, VAR_23->imm, VAR_20,
      VAR_28, VAR_32, VAR_23->verify);
 VAR_23->skb = VAR_24;
 return VAR_24;

err:
 FUNC_16(VAR_18);
 return FUNC_2(VAR_36);
}

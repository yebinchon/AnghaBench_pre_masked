
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int u8 ;
struct ulptx_sgl {int dummy; } ;
struct sk_buff {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cpl_rx_phys_dsgl {int dummy; } ;
struct TYPE_8__ {int * key; int ctx_hdr; } ;
struct TYPE_10__ {int ivgen_hdrlen; int seqno_numivs; int cipherstop_lo_authinsert; int aadstart_cipherstop_hi; int pldlen; int op_ivinsrtofst; } ;
struct chcr_wr {TYPE_1__ key_ctx; TYPE_3__ sec_cpl; } ;
struct chcr_authenc_ctx {int h_iopad; int dec_rrkey; int auth_mode; } ;
struct chcr_aead_reqctx {scalar_t__ op; int imm; struct sk_buff* skb; scalar_t__ b0_len; } ;
struct chcr_aead_ctx {int enckey_len; int nonce; int key; int key_ctx_hdr; int hmac_ctrl; } ;
struct TYPE_12__ {int flags; } ;
struct aead_request {scalar_t__ cryptlen; scalar_t__ assoclen; TYPE_5__ base; int iv; int src; int dst; } ;
struct TYPE_9__ {int cipher_rqst; int fallback; } ;
struct adapter {TYPE_2__ chcr_stats; } ;
typedef int gfp_t ;
typedef int __be32 ;
struct TYPE_11__ {int tx_chan_id; int dev; } ;


 struct chcr_aead_ctx* FUNC_0 (TYPE_4__*) ;
 struct chcr_authenc_ctx* FUNC_1 (struct chcr_aead_ctx*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 unsigned int FUNC_2 (unsigned int,unsigned int) ;
 unsigned int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct sk_buff* FUNC_3 (int) ;
 int FUNC_4 (unsigned int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_5 (int,unsigned int,unsigned int,unsigned int) ;
 int FUNC_6 (int ,int ,int,int ,int ,unsigned int) ;
 int FUNC_7 (int ,int,int) ;
 int FUNC_8 (scalar_t__,int,unsigned int,int ,int ,int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_9 (int ) ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 int VAR_18 ;
 struct chcr_wr* FUNC_10 (struct sk_buff*,unsigned int) ;
 TYPE_4__* FUNC_11 (struct crypto_aead*) ;
 struct chcr_aead_reqctx* FUNC_12 (struct aead_request*) ;
 struct sk_buff* FUNC_13 (unsigned int,int ) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct aead_request*,struct cpl_rx_phys_dsgl*,unsigned short) ;
 int FUNC_16 (struct aead_request*,struct ulptx_sgl*) ;
 int FUNC_17 (struct aead_request*) ;
 int FUNC_18 (struct aead_request*) ;
 int FUNC_19 (struct aead_request*,scalar_t__) ;
 scalar_t__ FUNC_20 (struct aead_request*,unsigned int,int ,unsigned int,scalar_t__) ;
 int FUNC_21 (int) ;
 int FUNC_22 (TYPE_4__*,struct chcr_wr*,TYPE_5__*,int,int,unsigned int,unsigned int,int ) ;
 unsigned int FUNC_23 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_24 (struct aead_request*) ;
 unsigned int FUNC_25 (struct crypto_aead*) ;
 unsigned int FUNC_26 (unsigned int) ;
 int FUNC_27 (unsigned int) ;
 int FUNC_28 (int *,int ,int) ;
 int FUNC_29 (int ) ;
 struct adapter* FUNC_30 (int ) ;
 unsigned int FUNC_31 (unsigned int,int) ;
 unsigned int FUNC_32 (int ,scalar_t__,int ,int ) ;
 int FUNC_33 (unsigned int) ;

__attribute__((used)) static struct sk_buff *FUNC_34(struct aead_request *VAR_19,
      unsigned short VAR_20,
      int VAR_21)
{
 struct crypto_aead *VAR_22 = FUNC_24(VAR_19);
 struct chcr_aead_ctx *VAR_23 = FUNC_0(FUNC_11(VAR_22));
 struct chcr_authenc_ctx *VAR_24 = FUNC_1(VAR_23);
 struct chcr_aead_reqctx *VAR_25 = FUNC_12(VAR_19);
 struct sk_buff *VAR_26 = ((void*)0);
 struct chcr_wr *VAR_27;
 struct cpl_rx_phys_dsgl *VAR_28;
 struct ulptx_sgl *VAR_29;
 unsigned int VAR_30;
 unsigned int VAR_31 = 0, VAR_32, VAR_33 = FUNC_25(VAR_22);
 unsigned int VAR_34 = 0, VAR_35, VAR_36;
 unsigned int VAR_37 = FUNC_23(VAR_22);
 int VAR_38 = -VAR_11;
 u8 *VAR_39;
 int VAR_40 = 0;
 gfp_t VAR_41 = VAR_19->base.flags & VAR_8 ? VAR_14 :
  VAR_13;
 struct adapter *VAR_42 = FUNC_30(FUNC_11(VAR_22)->dev);

 if (VAR_19->cryptlen == 0)
  return ((void*)0);

 VAR_25->b0_len = 0;
 VAR_38 = FUNC_18(VAR_19);
 if (VAR_38)
  return FUNC_3(VAR_38);

 if (VAR_33 == VAR_5 ||
  VAR_33 == VAR_6) {
  VAR_40 = 1;
 }
 VAR_35 = FUNC_32(VAR_19->dst, VAR_19->assoclen + VAR_19->cryptlen +
  (VAR_25->op ? -VAR_37 : VAR_37), VAR_0, 0);
 VAR_35 += VAR_16;
 VAR_36 = FUNC_32(VAR_19->src, VAR_19->assoclen + VAR_19->cryptlen,
          VAR_4, 0);
 VAR_31 = FUNC_26(VAR_35);
 VAR_34 = (FUNC_29(FUNC_9(VAR_23->key_ctx_hdr)) << 4)
  - sizeof(VAR_27->key_ctx);
 VAR_30 = FUNC_2(VAR_34, VAR_31);
 VAR_25->imm = (VAR_30 + VAR_19->assoclen + VAR_19->cryptlen) <
   VAR_17;
 VAR_32 = VAR_25->imm ? FUNC_31(VAR_19->assoclen + VAR_19->cryptlen, 16)
   : (FUNC_33(VAR_36) * 8);
 VAR_30 += VAR_32;
 VAR_30 = FUNC_31(VAR_30, 16);

 if (FUNC_20(VAR_19, VAR_35, VAR_18,
        VAR_30, VAR_25->op)) {
  FUNC_14(&VAR_42->chcr_stats.fallback);
  FUNC_17(VAR_19);
  return FUNC_3(FUNC_19(VAR_19, VAR_25->op));
 }
 VAR_26 = FUNC_13(VAR_30, VAR_41);
 if (!VAR_26) {
  VAR_38 = -VAR_12;
  goto err;
 }

 VAR_27 = FUNC_10(VAR_26, VAR_30);

 VAR_32 = (VAR_25->op == VAR_1) ? 0 : VAR_37;






 VAR_27->sec_cpl.op_ivinsrtofst =
  FUNC_7(FUNC_11(VAR_22)->tx_chan_id, 2, 1);
 VAR_27->sec_cpl.pldlen = FUNC_27(VAR_19->assoclen + VAR_15 + VAR_19->cryptlen);
 VAR_27->sec_cpl.aadstart_cipherstop_hi = FUNC_5(
     VAR_40 ? 0 : 1 + VAR_15,
     VAR_40 ? 0 : VAR_15 + VAR_19->assoclen,
     VAR_19->assoclen + VAR_15 + 1,
     (VAR_32 & 0x1F0) >> 4);
 VAR_27->sec_cpl.cipherstop_lo_authinsert = FUNC_4(
     VAR_32 & 0xF,
     VAR_40 ? 0 : VAR_19->assoclen + VAR_15 + 1,
     VAR_32, VAR_32);
 if (VAR_33 == VAR_6 ||
     VAR_33 == VAR_7)
  VAR_32 = VAR_3;
 else
  VAR_32 = VAR_2;
 VAR_27->sec_cpl.seqno_numivs = FUNC_8(VAR_25->op,
     (VAR_25->op == VAR_1) ? 1 : 0,
     VAR_32,
     VAR_24->auth_mode, VAR_23->hmac_ctrl,
     VAR_15 >> 1);
 VAR_27->sec_cpl.ivgen_hdrlen = FUNC_6(0, 0, 1,
      0, 0, VAR_31);

 VAR_27->key_ctx.ctx_hdr = VAR_23->key_ctx_hdr;
 if (VAR_25->op == VAR_1 ||
  VAR_33 == VAR_7 ||
  VAR_33 == VAR_6)
  FUNC_28(VAR_27->key_ctx.key, VAR_23->key,
         VAR_23->enckey_len);
 else
  FUNC_28(VAR_27->key_ctx.key, VAR_24->dec_rrkey,
         VAR_23->enckey_len);

 FUNC_28(VAR_27->key_ctx.key + FUNC_31(VAR_23->enckey_len, 16),
        VAR_24->h_iopad, VAR_34 - FUNC_31(VAR_23->enckey_len, 16));
 VAR_28 = (struct cpl_rx_phys_dsgl *)((u8 *)(VAR_27 + 1) + VAR_34);
 VAR_39 = (u8 *)(VAR_28 + 1) + VAR_31;
 VAR_29 = (struct ulptx_sgl *)(VAR_39 + VAR_15);
 if (VAR_33 == VAR_7 ||
     VAR_33 == VAR_6) {
  FUNC_28(VAR_39, VAR_23->nonce, VAR_10);
  FUNC_28(VAR_39 + VAR_10, VAR_19->iv,
    VAR_9);
  *(__be32 *)(VAR_39 + VAR_10 +
   VAR_9) = FUNC_21(1);
 } else {
  FUNC_28(VAR_39, VAR_19->iv, VAR_15);
 }
 FUNC_15(VAR_19, VAR_28, VAR_20);
 FUNC_16(VAR_19, VAR_29);
 FUNC_14(&VAR_42->chcr_stats.cipher_rqst);
 VAR_32 = sizeof(struct cpl_rx_phys_dsgl) + VAR_31 + VAR_15 +
  VAR_34 + (VAR_25->imm ? (VAR_19->assoclen + VAR_19->cryptlen) : 0);
 FUNC_22(FUNC_11(VAR_22), VAR_27, &VAR_19->base, VAR_25->imm, VAR_21,
     VAR_30, VAR_32, 0);
 VAR_25->skb = VAR_26;

 return VAR_26;
err:
 FUNC_17(VAR_19);

 return FUNC_3(VAR_38);
}

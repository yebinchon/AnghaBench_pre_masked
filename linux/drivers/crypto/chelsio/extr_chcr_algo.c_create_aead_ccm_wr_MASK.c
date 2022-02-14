
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
struct ulptx_sgl {int dummy; } ;
struct sk_buff {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct cpl_rx_phys_dsgl {int dummy; } ;
struct TYPE_7__ {scalar_t__ key; int ctx_hdr; } ;
struct chcr_wr {TYPE_1__ key_ctx; int sec_cpl; } ;
struct chcr_aead_reqctx {unsigned int b0_len; int imm; struct sk_buff* skb; scalar_t__ op; } ;
struct chcr_aead_ctx {unsigned int enckey_len; int key; int key_ctx_hdr; } ;
struct TYPE_10__ {int flags; } ;
struct aead_request {unsigned int assoclen; unsigned int cryptlen; TYPE_4__ base; int src; int dst; } ;
struct TYPE_8__ {int aead_rqst; int fallback; } ;
struct adapter {TYPE_2__ chcr_stats; } ;
typedef int gfp_t ;
struct TYPE_9__ {int dev; } ;


 struct chcr_aead_ctx* FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 unsigned int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct sk_buff* FUNC_2 (int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 unsigned int VAR_12 ;
 scalar_t__ VAR_13 ;
 struct chcr_wr* FUNC_3 (struct sk_buff*,unsigned int) ;
 TYPE_3__* FUNC_4 (struct crypto_aead*) ;
 int FUNC_5 (scalar_t__,struct aead_request*,struct chcr_aead_ctx*,unsigned int) ;
 struct chcr_aead_reqctx* FUNC_6 (struct aead_request*) ;
 struct sk_buff* FUNC_7 (unsigned int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (struct aead_request*,int *,unsigned int,scalar_t__,unsigned int) ;
 int FUNC_10 (struct aead_request*,struct cpl_rx_phys_dsgl*,unsigned short) ;
 int FUNC_11 (struct aead_request*,struct ulptx_sgl*) ;
 int FUNC_12 (struct aead_request*) ;
 int FUNC_13 (struct aead_request*) ;
 int FUNC_14 (struct aead_request*,scalar_t__) ;
 scalar_t__ FUNC_15 (struct aead_request*,unsigned int,scalar_t__,unsigned int,scalar_t__) ;
 int FUNC_16 (TYPE_3__*,struct chcr_wr*,TYPE_4__*,int,int ,unsigned int,unsigned int,int ) ;
 unsigned int FUNC_17 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_18 (struct aead_request*) ;
 int FUNC_19 (int *,unsigned int,struct aead_request*,scalar_t__) ;
 unsigned int FUNC_20 (struct crypto_aead*) ;
 unsigned int FUNC_21 (unsigned int) ;
 int FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (scalar_t__,int ,unsigned int) ;
 struct adapter* FUNC_24 (int ) ;
 int FUNC_25 (unsigned int,int) ;
 unsigned int FUNC_26 (int ,unsigned int,int ,int ) ;
 int FUNC_27 (unsigned int) ;

__attribute__((used)) static struct sk_buff *FUNC_28(struct aead_request *VAR_14,
       unsigned short VAR_15,
       int VAR_16)
{
 struct crypto_aead *VAR_17 = FUNC_18(VAR_14);
 struct chcr_aead_ctx *VAR_18 = FUNC_0(FUNC_4(VAR_17));
 struct chcr_aead_reqctx *VAR_19 = FUNC_6(VAR_14);
 struct sk_buff *VAR_20 = ((void*)0);
 struct chcr_wr *VAR_21;
 struct cpl_rx_phys_dsgl *VAR_22;
 struct ulptx_sgl *VAR_23;
 unsigned int VAR_24;
 unsigned int VAR_25 = 0, VAR_26, VAR_27, VAR_28, VAR_29;
 unsigned int VAR_30, VAR_31 = VAR_14->assoclen;
 unsigned int VAR_32 = FUNC_17(VAR_17);
 int VAR_33 = -VAR_6;
 u8 *VAR_34;
 gfp_t VAR_35 = VAR_14->base.flags & VAR_5 ? VAR_9 :
  VAR_8;
 struct adapter *VAR_36 = FUNC_24(FUNC_4(VAR_17)->dev);

 VAR_30 = FUNC_20(VAR_17);
 if (VAR_30 == VAR_4)
  VAR_31 -= 8;
 VAR_19->b0_len = VAR_1 + (VAR_31 ? VAR_0 : 0);
 VAR_33 = FUNC_13(VAR_14);
 if (VAR_33)
  return FUNC_2(VAR_33);

 VAR_33 = FUNC_5(VAR_19->op, VAR_14, VAR_18, VAR_30);
 if (VAR_33)
  goto err;
 VAR_27 = FUNC_26(VAR_14->dst, VAR_14->assoclen + VAR_14->cryptlen
   + (VAR_19->op ? -VAR_32 : VAR_32),
   VAR_2, 0);
 VAR_27 += VAR_11;
 VAR_25 = FUNC_21(VAR_27);
 VAR_29 = FUNC_26(VAR_14->src, VAR_14->assoclen + VAR_14->cryptlen,
          VAR_3, 0);
 VAR_29 += VAR_11;
 VAR_26 = FUNC_25(VAR_18->enckey_len, 16) * 2;
 VAR_24 = FUNC_1(VAR_26, VAR_25);
 VAR_19->imm = (VAR_24 + VAR_14->assoclen + VAR_14->cryptlen +
         VAR_19->b0_len) <= VAR_12;
 VAR_28 = VAR_19->imm ? FUNC_25(VAR_14->assoclen + VAR_14->cryptlen +
         VAR_19->b0_len, 16) :
  (FUNC_27(VAR_29) * 8);
 VAR_24 += VAR_28;
 VAR_24 = FUNC_25(VAR_24, 16);

 if (FUNC_15(VAR_14, VAR_27, VAR_13 -
    VAR_19->b0_len, VAR_24, VAR_19->op)) {
  FUNC_8(&VAR_36->chcr_stats.fallback);
  FUNC_12(VAR_14);
  return FUNC_2(FUNC_14(VAR_14, VAR_19->op));
 }
 VAR_20 = FUNC_7(VAR_24, VAR_35);

 if (!VAR_20) {
  VAR_33 = -VAR_7;
  goto err;
 }

 VAR_21 = FUNC_3(VAR_20, VAR_24);

 FUNC_19(&VAR_21->sec_cpl, VAR_25, VAR_14, VAR_19->op);

 VAR_21->key_ctx.ctx_hdr = VAR_18->key_ctx_hdr;
 FUNC_23(VAR_21->key_ctx.key, VAR_18->key, VAR_18->enckey_len);
 FUNC_23(VAR_21->key_ctx.key + FUNC_25(VAR_18->enckey_len, 16),
   VAR_18->key, VAR_18->enckey_len);

 VAR_22 = (struct cpl_rx_phys_dsgl *)((u8 *)(VAR_21 + 1) + VAR_26);
 VAR_34 = (u8 *)(VAR_22 + 1) + VAR_25;
 VAR_23 = (struct ulptx_sgl *)(VAR_34 + VAR_10);
 VAR_33 = FUNC_9(VAR_14, VAR_34, VAR_30, VAR_19->op, VAR_31);
 if (VAR_33)
  goto dstmap_fail;
 FUNC_10(VAR_14, VAR_22, VAR_15);
 FUNC_11(VAR_14, VAR_23);

 FUNC_8(&VAR_36->chcr_stats.aead_rqst);
 VAR_28 = sizeof(struct cpl_rx_phys_dsgl) + VAR_25 + VAR_10 +
  VAR_26 + (VAR_19->imm ? (VAR_14->assoclen + VAR_14->cryptlen +
  VAR_19->b0_len) : 0);
 FUNC_16(FUNC_4(VAR_17), VAR_21, &VAR_14->base, VAR_19->imm, 0,
      VAR_24, VAR_28, 0);
 VAR_19->skb = VAR_20;

 return VAR_20;
dstmap_fail:
 FUNC_22(VAR_20);
err:
 FUNC_12(VAR_14);
 return FUNC_2(VAR_33);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_6__ ;
typedef struct TYPE_16__ TYPE_5__ ;
typedef struct TYPE_15__ TYPE_4__ ;
typedef struct TYPE_14__ TYPE_3__ ;
typedef struct TYPE_13__ TYPE_2__ ;
typedef struct TYPE_12__ TYPE_1__ ;


typedef int u8 ;
struct ulptx_sgl {int dummy; } ;
struct sk_buff {int dummy; } ;
struct crypto_ablkcipher {int dummy; } ;
struct cpl_rx_phys_dsgl {int dummy; } ;
struct cipher_wr_param {unsigned int bytes; TYPE_4__* req; int qid; } ;
struct TYPE_14__ {scalar_t__ key; int ctx_hdr; } ;
struct TYPE_12__ {int ivgen_hdrlen; int seqno_numivs; int cipherstop_lo_authinsert; int aadstart_cipherstop_hi; int pldlen; int op_ivinsrtofst; } ;
struct chcr_wr {TYPE_3__ key_ctx; TYPE_1__ sec_cpl; } ;
struct chcr_blkcipher_req_ctx {scalar_t__ op; int processed; struct sk_buff* skb; scalar_t__ imm; int src_ofst; int srcsg; int dst_ofst; int dstsg; } ;
struct TYPE_13__ {int cipher_rqst; } ;
struct adapter {TYPE_2__ chcr_stats; } ;
struct ablk_ctx {unsigned int enckey_len; scalar_t__ ciph_mode; scalar_t__ key; int key_ctx_hdr; } ;
typedef int gfp_t ;
struct TYPE_17__ {int flags; } ;
struct TYPE_16__ {int tx_chan_id; int dev; } ;
struct TYPE_15__ {int info; int src; TYPE_6__ base; } ;


 struct ablk_ctx* FUNC_0 (TYPE_5__*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 unsigned int FUNC_1 (unsigned int,unsigned int) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 struct sk_buff* FUNC_2 (int) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int,int ) ;
 int FUNC_5 (int ,int ,int ,int ,int,unsigned int) ;
 int FUNC_6 (int ,int,int) ;
 int FUNC_7 (scalar_t__,int ,scalar_t__,int ,int ,int) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 struct chcr_wr* FUNC_8 (struct sk_buff*,unsigned int) ;
 struct chcr_blkcipher_req_ctx* FUNC_9 (TYPE_4__*) ;
 struct sk_buff* FUNC_10 (int ,int ) ;
 int FUNC_11 (int *) ;
 TYPE_5__* FUNC_12 (struct crypto_ablkcipher*) ;
 int FUNC_13 (TYPE_4__*,struct cpl_rx_phys_dsgl*,struct cipher_wr_param*,int ) ;
 int FUNC_14 (TYPE_4__*,struct ulptx_sgl*,struct cipher_wr_param*) ;
 int FUNC_15 (TYPE_5__*,struct chcr_wr*,TYPE_6__*,scalar_t__,int ,unsigned int,unsigned int,int) ;
 struct crypto_ablkcipher* FUNC_16 (TYPE_4__*) ;
 int FUNC_17 (struct crypto_ablkcipher*) ;
 int FUNC_18 (struct ablk_ctx*,TYPE_3__*) ;
 scalar_t__ FUNC_19 (int ) ;
 unsigned int FUNC_20 (int) ;
 int FUNC_21 (unsigned int) ;
 int FUNC_22 (scalar_t__,scalar_t__,int) ;
 struct adapter* FUNC_23 (int ) ;
 int FUNC_24 (unsigned int,int) ;
 int FUNC_25 (int ) ;
 int FUNC_26 (int ,unsigned int,int ,int ) ;
 int FUNC_27 (int ,int ,int ,int,int) ;
 int FUNC_28 (int) ;

__attribute__((used)) static struct sk_buff *FUNC_29(struct cipher_wr_param *VAR_14)
{
 struct crypto_ablkcipher *VAR_15 = FUNC_16(VAR_14->req);
 struct ablk_ctx *VAR_16 = FUNC_0(FUNC_12(VAR_15));
 struct sk_buff *VAR_17 = ((void*)0);
 struct chcr_wr *VAR_18;
 struct cpl_rx_phys_dsgl *VAR_19;
 struct ulptx_sgl *VAR_20;
 struct chcr_blkcipher_req_ctx *VAR_21 =
  FUNC_9(VAR_14->req);
 unsigned int VAR_22 = 0, VAR_23, VAR_24;
 int VAR_25;
 int VAR_26;
 unsigned int VAR_27;
 gfp_t VAR_28 = VAR_14->req->base.flags & VAR_8 ?
   VAR_11 : VAR_10;
 struct adapter *VAR_29 = FUNC_23(FUNC_12(VAR_15)->dev);

 VAR_26 = FUNC_26(VAR_21->dstsg, VAR_14->bytes, VAR_2,
         VAR_21->dst_ofst);
 VAR_24 = FUNC_20(VAR_26);
 VAR_27 = FUNC_24(VAR_16->enckey_len, 16);
 VAR_23 = FUNC_1(VAR_27, VAR_24);
 VAR_26 = FUNC_26(VAR_21->srcsg, VAR_14->bytes,
      VAR_5, VAR_21->src_ofst);
 VAR_22 = VAR_21->imm ? FUNC_24(VAR_14->bytes, 16) :
         (FUNC_28(VAR_26) * 8);
 VAR_23 += VAR_22;
 VAR_23 = FUNC_24(VAR_23, 16);
 VAR_17 = FUNC_10(VAR_13, VAR_28);
 if (!VAR_17) {
  VAR_25 = -VAR_9;
  goto err;
 }
 VAR_18 = FUNC_8(VAR_17, VAR_23);
 VAR_18->sec_cpl.op_ivinsrtofst =
  FUNC_6(FUNC_12(VAR_15)->tx_chan_id, 2, 1);

 VAR_18->sec_cpl.pldlen = FUNC_21(VAR_12 + VAR_14->bytes);
 VAR_18->sec_cpl.aadstart_cipherstop_hi =
   FUNC_4(0, 0, VAR_12 + 1, 0);

 VAR_18->sec_cpl.cipherstop_lo_authinsert =
   FUNC_3(0, 0, 0, 0);
 VAR_18->sec_cpl.seqno_numivs = FUNC_7(VAR_21->op, 0,
        VAR_16->ciph_mode,
        0, 0, VAR_12 >> 1);
 VAR_18->sec_cpl.ivgen_hdrlen = FUNC_5(0, 0, 0,
         0, 1, VAR_24);

 VAR_18->key_ctx.ctx_hdr = VAR_16->key_ctx_hdr;
 if ((VAR_21->op == VAR_1) &&
     (!(FUNC_19(FUNC_17(VAR_15)) ==
        VAR_6)) &&
     (!(FUNC_19(FUNC_17(VAR_15)) ==
        VAR_7))) {
  FUNC_18(VAR_16, &VAR_18->key_ctx);
 } else {
  if ((VAR_16->ciph_mode == VAR_3) ||
      (VAR_16->ciph_mode == VAR_4)) {
   FUNC_22(VAR_18->key_ctx.key, VAR_16->key,
          VAR_16->enckey_len);
  } else {
   FUNC_22(VAR_18->key_ctx.key, VAR_16->key +
          (VAR_16->enckey_len >> 1),
          VAR_16->enckey_len >> 1);
   FUNC_22(VAR_18->key_ctx.key +
          (VAR_16->enckey_len >> 1),
          VAR_16->key,
          VAR_16->enckey_len >> 1);
  }
 }
 VAR_19 = (struct cpl_rx_phys_dsgl *)((u8 *)(VAR_18 + 1) + VAR_27);
 VAR_20 = (struct ulptx_sgl *)((u8 *)(VAR_19 + 1) + VAR_24);
 FUNC_14(VAR_14->req, VAR_20, VAR_14);
 FUNC_13(VAR_14->req, VAR_19, VAR_14, VAR_14->qid);

 FUNC_11(&VAR_29->chcr_stats.cipher_rqst);
 VAR_22 = sizeof(struct cpl_rx_phys_dsgl) + VAR_24 + VAR_27 + VAR_12
  + (VAR_21->imm ? (VAR_14->bytes) : 0);
 FUNC_15(FUNC_12(VAR_15), VAR_18, &(VAR_14->req->base), VAR_21->imm, 0,
      VAR_23, VAR_22,
   VAR_16->ciph_mode == VAR_3);
 VAR_21->skb = VAR_17;

 if (VAR_21->op && (VAR_16->ciph_mode ==
      VAR_3))
  FUNC_27(VAR_14->req->src,
   FUNC_25(VAR_14->req->src), VAR_14->req->info, 16,
   VAR_21->processed + VAR_14->bytes - VAR_0);

 return VAR_17;
err:
 return FUNC_2(VAR_25);
}

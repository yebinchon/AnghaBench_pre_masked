
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_10__ ;


typedef int u8 ;
typedef int u64 ;
struct ulptx_sgl {int dummy; } ;
struct TYPE_19__ {TYPE_5__* pdev; } ;
struct uld_ctx {TYPE_6__ lldi; } ;
struct sk_buff {int dummy; } ;
struct hmac_ctx {int opad; } ;
struct TYPE_16__ {int result_size; int mk_size; int auth_mode; } ;
struct hash_wr_param {int kctx_len; unsigned int bfr_len; unsigned int sg_len; int hash_size; scalar_t__ scmd1; scalar_t__ opad_needed; TYPE_3__ alg_prm; int more; int last; } ;
struct crypto_ahash {int dummy; } ;
struct TYPE_17__ {int scmd1; int ivgen_hdrlen; int seqno_numivs; int cipherstop_lo_authinsert; int aadstart_cipherstop_hi; int pldlen; int op_ivinsrtofst; } ;
struct TYPE_15__ {int key; int ctx_hdr; } ;
struct chcr_wr {TYPE_4__ sec_cpl; TYPE_2__ key_ctx; } ;
struct TYPE_20__ {int imm; unsigned int dma_len; struct sk_buff* skb; scalar_t__ dma_addr; int src_ofst; int srcsg; } ;
struct chcr_ahash_req_ctx {TYPE_7__ hctx_wr; int reqbfr; int partial_hash; } ;
struct TYPE_13__ {int flags; } ;
struct ahash_request {TYPE_10__ base; } ;
struct TYPE_14__ {int digest_rqst; } ;
struct adapter {TYPE_1__ chcr_stats; } ;
typedef int gfp_t ;
struct TYPE_21__ {int tx_chan_id; int dev; } ;
struct TYPE_18__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct sk_buff* FUNC_0 (int) ;
 int FUNC_1 (int ,int ,int ,scalar_t__,int) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (int ,int ,int ,int,int ,int ) ;
 int FUNC_5 (int ,int,int ) ;
 int FUNC_6 (int ,int ,int ,int ,scalar_t__,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int FUNC_7 (int) ;
 struct hmac_ctx* FUNC_8 (TYPE_8__*) ;
 unsigned int VAR_9 ;
 struct uld_ctx* FUNC_9 (TYPE_8__*) ;
 struct chcr_wr* FUNC_10 (struct sk_buff*,unsigned int) ;
 struct chcr_ahash_req_ctx* FUNC_11 (struct ahash_request*) ;
 struct sk_buff* FUNC_12 (unsigned int,int ) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (struct ahash_request*,struct ulptx_sgl*,struct hash_wr_param*) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (TYPE_8__*,struct chcr_wr*,TYPE_10__*,int,int ,unsigned int,unsigned int,int ) ;
 struct crypto_ahash* FUNC_17 (struct ahash_request*) ;
 scalar_t__ FUNC_18 (int *,int ,unsigned int,int ) ;
 scalar_t__ FUNC_19 (int *,scalar_t__) ;
 TYPE_8__* FUNC_20 (struct crypto_ahash*) ;
 int FUNC_21 (unsigned int) ;
 int FUNC_22 (struct sk_buff*) ;
 int FUNC_23 (int,int ,int) ;
 struct adapter* FUNC_24 (int ) ;
 int FUNC_25 (unsigned int,int) ;
 unsigned int FUNC_26 (int ,unsigned int,int ,int ) ;
 int FUNC_27 (unsigned int) ;

__attribute__((used)) static struct sk_buff *FUNC_28(struct ahash_request *VAR_10,
          struct hash_wr_param *VAR_11)
{
 struct chcr_ahash_req_ctx *VAR_12 = FUNC_11(VAR_10);
 struct crypto_ahash *VAR_13 = FUNC_17(VAR_10);
 struct hmac_ctx *VAR_14 = FUNC_8(FUNC_20(VAR_13));
 struct sk_buff *VAR_15 = ((void*)0);
 struct uld_ctx *VAR_16 = FUNC_9(FUNC_20(VAR_13));
 struct chcr_wr *VAR_17;
 struct ulptx_sgl *VAR_18;
 unsigned int VAR_19 = 0, VAR_20;
 unsigned int VAR_21 = 0;
 gfp_t VAR_22 = VAR_10->base.flags & VAR_3 ? VAR_8 :
  VAR_7;
 struct adapter *VAR_23 = FUNC_24(FUNC_20(VAR_13)->dev);
 int VAR_24 = 0;

 VAR_20 = FUNC_7(VAR_11->kctx_len);
 VAR_12->hctx_wr.imm = (VAR_20 + VAR_11->bfr_len +
    VAR_11->sg_len) <= VAR_9;
 VAR_19 = FUNC_26(VAR_12->hctx_wr.srcsg, VAR_11->sg_len,
        VAR_2, VAR_12->hctx_wr.src_ofst);
 VAR_19 += VAR_11->bfr_len ? 1 : 0;
 VAR_20 += VAR_12->hctx_wr.imm ? FUNC_25(VAR_11->bfr_len +
    VAR_11->sg_len, 16) : (FUNC_27(VAR_19) * 8);
 VAR_20 = FUNC_25(VAR_20, 16);

 VAR_15 = FUNC_12(VAR_20, VAR_22);
 if (!VAR_15)
  return FUNC_0(-VAR_6);
 VAR_17 = FUNC_10(VAR_15, VAR_20);

 VAR_17->sec_cpl.op_ivinsrtofst =
  FUNC_5(FUNC_20(VAR_13)->tx_chan_id, 2, 0);
 VAR_17->sec_cpl.pldlen = FUNC_21(VAR_11->bfr_len + VAR_11->sg_len);

 VAR_17->sec_cpl.aadstart_cipherstop_hi =
  FUNC_3(0, 0, 0, 0);
 VAR_17->sec_cpl.cipherstop_lo_authinsert =
  FUNC_2(0, 1, 0, 0);
 VAR_17->sec_cpl.seqno_numivs =
  FUNC_6(0, 0, 0, VAR_11->alg_prm.auth_mode,
      VAR_11->opad_needed, 0);

 VAR_17->sec_cpl.ivgen_hdrlen =
  FUNC_4(VAR_11->last, VAR_11->more, 0, 1, 0, 0);

 FUNC_23(VAR_17->key_ctx.key, VAR_12->partial_hash,
        VAR_11->alg_prm.result_size);

 if (VAR_11->opad_needed)
  FUNC_23(VAR_17->key_ctx.key +
         ((VAR_11->alg_prm.result_size <= 32) ? 32 :
   VAR_0),
         VAR_14->opad, VAR_11->alg_prm.result_size);

 VAR_17->key_ctx.ctx_hdr = FUNC_1(VAR_1,
         VAR_11->alg_prm.mk_size, 0,
         VAR_11->opad_needed,
         ((VAR_11->kctx_len +
          sizeof(VAR_17->key_ctx)) >> 4));
 VAR_17->sec_cpl.scmd1 = FUNC_15((u64)VAR_11->scmd1);
 VAR_18 = (struct ulptx_sgl *)((u8 *)(VAR_17 + 1) + VAR_11->kctx_len +
         VAR_5);
 if (VAR_11->bfr_len != 0) {
  VAR_12->hctx_wr.dma_addr =
   FUNC_18(&VAR_16->lldi.pdev->dev, VAR_12->reqbfr,
           VAR_11->bfr_len, VAR_4);
  if (FUNC_19(&VAR_16->lldi.pdev->dev,
           VAR_12->hctx_wr. dma_addr)) {
   VAR_24 = -VAR_6;
   goto err;
  }
  VAR_12->hctx_wr.dma_len = VAR_11->bfr_len;
 } else {
  VAR_12->hctx_wr.dma_addr = 0;
 }
 FUNC_14(VAR_10, VAR_18, VAR_11);

 VAR_21 = VAR_11->kctx_len + VAR_5 + (VAR_12->hctx_wr.imm ?
    (VAR_11->sg_len + VAR_11->bfr_len) : 0);
 FUNC_13(&VAR_23->chcr_stats.digest_rqst);
 FUNC_16(FUNC_20(VAR_13), VAR_17, &VAR_10->base, VAR_12->hctx_wr.imm,
      VAR_11->hash_size, VAR_20,
      VAR_21, 0);
 VAR_12->hctx_wr.skb = VAR_15;
 return VAR_15;
err:
 FUNC_22(VAR_15);
 return FUNC_0(VAR_24);
}

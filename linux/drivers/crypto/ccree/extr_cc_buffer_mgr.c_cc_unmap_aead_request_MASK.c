
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct device {int dummy; } ;
struct cc_drvdata {scalar_t__ coherent; } ;
struct aead_request {scalar_t__ src; scalar_t__ dst; int cryptlen; } ;
struct TYPE_8__ {scalar_t__ op_type; int iv; scalar_t__ iv_dma_addr; } ;
struct TYPE_7__ {int nents; } ;
struct TYPE_6__ {int nents; } ;
struct TYPE_5__ {int mlli_dma_addr; scalar_t__ mlli_virt_addr; int curr_pool; } ;
struct aead_req_ctx {unsigned int hw_iv_size; scalar_t__ cipher_mode; scalar_t__ ccm_hdr_size; scalar_t__ assoc_buff_type; scalar_t__ data_buff_type; TYPE_4__ gen_ctx; int assoclen; TYPE_3__ assoc; TYPE_2__ src; TYPE_1__ mlli_params; int ccm_adata_sg; scalar_t__ ccm_iv0_dma_addr; scalar_t__ gcm_iv_inc2_dma_addr; scalar_t__ gcm_iv_inc1_dma_addr; scalar_t__ gcm_block_len_dma_addr; scalar_t__ hkey_dma_addr; scalar_t__ mac_buf_dma_addr; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 unsigned int VAR_7 ;
 struct aead_req_ctx* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct device*,struct aead_request*,int ) ;
 scalar_t__ VAR_8 ;
 int FUNC_2 (struct device*,char*,int ,...) ;
 struct cc_drvdata* FUNC_3 (struct device*) ;
 int FUNC_4 (int ,scalar_t__,int ) ;
 int FUNC_5 (struct device*,int *,int,int ) ;
 int FUNC_6 (struct device*,scalar_t__,unsigned int,int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (scalar_t__) ;

void FUNC_10(struct device *VAR_9, struct aead_request *VAR_10)
{
 struct aead_req_ctx *VAR_11 = FUNC_0(VAR_10);
 unsigned int VAR_12 = VAR_11->hw_iv_size;
 struct cc_drvdata *VAR_13 = FUNC_3(VAR_9);

 if (VAR_11->mac_buf_dma_addr) {
  FUNC_6(VAR_9, VAR_11->mac_buf_dma_addr,
     VAR_7, VAR_3);
 }

 if (VAR_11->cipher_mode == VAR_5) {
  if (VAR_11->hkey_dma_addr) {
   FUNC_6(VAR_9, VAR_11->hkey_dma_addr,
      VAR_0, VAR_3);
  }

  if (VAR_11->gcm_block_len_dma_addr) {
   FUNC_6(VAR_9, VAR_11->gcm_block_len_dma_addr,
      VAR_0, VAR_4);
  }

  if (VAR_11->gcm_iv_inc1_dma_addr) {
   FUNC_6(VAR_9, VAR_11->gcm_iv_inc1_dma_addr,
      VAR_0, VAR_4);
  }

  if (VAR_11->gcm_iv_inc2_dma_addr) {
   FUNC_6(VAR_9, VAR_11->gcm_iv_inc2_dma_addr,
      VAR_0, VAR_4);
  }
 }

 if (VAR_11->ccm_hdr_size != VAR_8) {
  if (VAR_11->ccm_iv0_dma_addr) {
   FUNC_6(VAR_9, VAR_11->ccm_iv0_dma_addr,
      VAR_0, VAR_4);
  }

  FUNC_5(VAR_9, &VAR_11->ccm_adata_sg, 1, VAR_4);
 }
 if (VAR_11->gen_ctx.iv_dma_addr) {
  FUNC_6(VAR_9, VAR_11->gen_ctx.iv_dma_addr,
     VAR_12, VAR_3);
  FUNC_7(VAR_11->gen_ctx.iv);
 }


 if ((VAR_11->assoc_buff_type == VAR_1 ||
      VAR_11->data_buff_type == VAR_1) &&
     (VAR_11->mlli_params.mlli_virt_addr)) {
  FUNC_2(VAR_9, "free MLLI buffer: dma=%pad virt=%pK\n",
   VAR_11->mlli_params.mlli_dma_addr,
   VAR_11->mlli_params.mlli_virt_addr);
  FUNC_4(VAR_11->mlli_params.curr_pool,
         VAR_11->mlli_params.mlli_virt_addr,
         VAR_11->mlli_params.mlli_dma_addr);
 }

 FUNC_2(VAR_9, "Unmapping src sgl: req->src=%pK areq_ctx->src.nents=%u areq_ctx->assoc.nents=%u assoclen:%u cryptlen=%u\n",
  FUNC_9(VAR_10->src), VAR_11->src.nents, VAR_11->assoc.nents,
  VAR_11->assoclen, VAR_10->cryptlen);

 FUNC_5(VAR_9, VAR_10->src, FUNC_8(VAR_10->src), VAR_3);
 if (VAR_10->src != VAR_10->dst) {
  FUNC_2(VAR_9, "Unmapping dst sgl: req->dst=%pK\n",
   FUNC_9(VAR_10->dst));
  FUNC_5(VAR_9, VAR_10->dst, FUNC_8(VAR_10->dst),
        VAR_3);
 }
 if (VAR_13->coherent &&
     VAR_11->gen_ctx.op_type == VAR_6 &&
     VAR_10->src == VAR_10->dst) {




  FUNC_1(VAR_9, VAR_10, VAR_2);
 }
}

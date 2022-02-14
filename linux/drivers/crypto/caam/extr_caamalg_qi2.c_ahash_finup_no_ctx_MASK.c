
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpaa2_sg_entry {int dummy; } ;
struct dpaa2_fl_entry {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct caam_request {struct ahash_edesc* edesc; TYPE_1__* ctx; int cbk; int flc_dma; int * flc; struct dpaa2_fl_entry* fd_flt; } ;
struct caam_hash_state {int ctx_dma_len; void* ctx_dma; struct dpaa2_sg_entry* caam_ctx; struct caam_request caam_req; } ;
struct caam_hash_ctx {int dev; int * flc_dma; int * flc; } ;
struct TYPE_2__ {int flags; } ;
struct ahash_request {int nbytes; TYPE_1__ base; int src; } ;
struct ahash_edesc {int src_nents; int qm_sg_bytes; void* qm_sg_dma; struct dpaa2_sg_entry* sgt; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 struct caam_hash_state* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int ,struct ahash_edesc*,struct ahash_request*,int ) ;
 int FUNC_2 (int ,struct dpaa2_sg_entry*,struct caam_hash_state*) ;
 struct caam_hash_ctx* FUNC_3 (struct crypto_ahash*) ;
 int FUNC_4 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_5 (struct ahash_request*) ;
 int* FUNC_6 (struct caam_hash_state*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ,int,int ) ;
 void* FUNC_9 (int ,struct dpaa2_sg_entry*,int,int ) ;
 scalar_t__ FUNC_10 (int ,void*) ;
 int FUNC_11 (int ,int ,int,int ) ;
 int FUNC_12 (int ,struct caam_request*) ;
 int FUNC_13 (struct dpaa2_fl_entry*,void*) ;
 int FUNC_14 (struct dpaa2_fl_entry*,int) ;
 int FUNC_15 (struct dpaa2_fl_entry*,int ) ;
 int FUNC_16 (struct dpaa2_fl_entry*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_17 (struct dpaa2_fl_entry**,int ,int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (struct ahash_edesc*) ;
 struct ahash_edesc* FUNC_20 (int) ;
 int FUNC_21 (int ,int) ;
 int FUNC_22 (int ,int,struct dpaa2_sg_entry*,int ) ;

__attribute__((used)) static int FUNC_23(struct ahash_request *VAR_14)
{
 struct crypto_ahash *VAR_15 = FUNC_5(VAR_14);
 struct caam_hash_ctx *VAR_16 = FUNC_3(VAR_15);
 struct caam_hash_state *VAR_17 = FUNC_0(VAR_14);
 struct caam_request *VAR_18 = &VAR_17->caam_req;
 struct dpaa2_fl_entry *VAR_19 = &VAR_18->fd_flt[1];
 struct dpaa2_fl_entry *VAR_20 = &VAR_18->fd_flt[0];
 gfp_t VAR_21 = (VAR_14->base.flags & VAR_1) ?
        VAR_10 : VAR_8;
 int VAR_22 = *FUNC_6(VAR_17);
 int VAR_23, VAR_24, VAR_25;
 int VAR_26 = FUNC_4(VAR_15);
 struct ahash_edesc *VAR_27;
 struct dpaa2_sg_entry *VAR_28;
 int VAR_29;

 VAR_24 = FUNC_21(VAR_14->src, VAR_14->nbytes);
 if (VAR_24 < 0) {
  FUNC_7(VAR_16->dev, "Invalid number of src SG.\n");
  return VAR_24;
 }

 if (VAR_24) {
  VAR_25 = FUNC_8(VAR_16->dev, VAR_14->src, VAR_24,
       VAR_4);
  if (!VAR_25) {
   FUNC_7(VAR_16->dev, "unable to DMA map source\n");
   return -VAR_7;
  }
 } else {
  VAR_25 = 0;
 }


 VAR_27 = FUNC_20(VAR_9 | VAR_21);
 if (!VAR_27) {
  FUNC_11(VAR_16->dev, VAR_14->src, VAR_24, VAR_4);
  return -VAR_7;
 }

 VAR_27->src_nents = VAR_24;
 VAR_23 = FUNC_18(2 + VAR_25) * sizeof(*VAR_28);
 VAR_28 = &VAR_27->sgt[0];

 VAR_29 = FUNC_2(VAR_16->dev, VAR_28, VAR_17);
 if (VAR_29)
  goto unmap;

 FUNC_22(VAR_14->src, VAR_14->nbytes, VAR_28 + 1, 0);

 VAR_27->qm_sg_dma = FUNC_9(VAR_16->dev, VAR_28, VAR_23,
       VAR_4);
 if (FUNC_10(VAR_16->dev, VAR_27->qm_sg_dma)) {
  FUNC_7(VAR_16->dev, "unable to map S/G table\n");
  VAR_29 = -VAR_7;
  goto unmap;
 }
 VAR_27->qm_sg_bytes = VAR_23;

 VAR_17->ctx_dma_len = VAR_26;
 VAR_17->ctx_dma = FUNC_9(VAR_16->dev, VAR_17->caam_ctx, VAR_26,
     VAR_3);
 if (FUNC_10(VAR_16->dev, VAR_17->ctx_dma)) {
  FUNC_7(VAR_16->dev, "unable to map ctx\n");
  VAR_17->ctx_dma = 0;
  VAR_29 = -VAR_7;
  goto unmap;
 }

 FUNC_17(&VAR_18->fd_flt, 0, sizeof(VAR_18->fd_flt));
 FUNC_14(VAR_19, 1);
 FUNC_15(VAR_19, VAR_12);
 FUNC_13(VAR_19, VAR_27->qm_sg_dma);
 FUNC_16(VAR_19, VAR_22 + VAR_14->nbytes);
 FUNC_15(VAR_20, VAR_13);
 FUNC_13(VAR_20, VAR_17->ctx_dma);
 FUNC_16(VAR_20, VAR_26);

 VAR_18->flc = &VAR_16->flc[VAR_2];
 VAR_18->flc_dma = VAR_16->flc_dma[VAR_2];
 VAR_18->cbk = VAR_11;
 VAR_18->ctx = &VAR_14->base;
 VAR_18->edesc = VAR_27;
 VAR_29 = FUNC_12(VAR_16->dev, VAR_18);
 if (VAR_29 != -VAR_6 &&
     !(VAR_29 == -VAR_5 && VAR_14->base.flags & VAR_0))
  goto unmap;

 return VAR_29;
unmap:
 FUNC_1(VAR_16->dev, VAR_27, VAR_14, VAR_3);
 FUNC_19(VAR_27);
 return -VAR_7;
}

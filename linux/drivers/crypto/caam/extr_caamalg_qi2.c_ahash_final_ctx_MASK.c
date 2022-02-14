
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dpaa2_sg_entry {int dummy; } ;
struct dpaa2_fl_entry {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct caam_request {struct ahash_edesc* edesc; TYPE_1__* ctx; int cbk; int flc_dma; int * flc; struct dpaa2_fl_entry* fd_flt; } ;
struct caam_hash_state {int ctx_dma; struct caam_request caam_req; } ;
struct caam_hash_ctx {int ctx_len; int dev; int * flc_dma; int * flc; } ;
struct TYPE_2__ {int flags; } ;
struct ahash_request {TYPE_1__ base; } ;
struct ahash_edesc {int qm_sg_bytes; int qm_sg_dma; struct dpaa2_sg_entry* sgt; } ;
typedef int gfp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 size_t VAR_7 ;
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
 int FUNC_6 (int ,struct caam_hash_state*,int,struct dpaa2_sg_entry*,int ) ;
 int* FUNC_7 (struct caam_hash_state*) ;
 int FUNC_8 (int ,char*) ;
 int FUNC_9 (int ,struct dpaa2_sg_entry*,int,int ) ;
 scalar_t__ FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,struct caam_request*) ;
 int FUNC_12 (struct dpaa2_fl_entry*,int ) ;
 int FUNC_13 (struct dpaa2_fl_entry*,int) ;
 int FUNC_14 (struct dpaa2_fl_entry*,int ) ;
 int FUNC_15 (struct dpaa2_fl_entry*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_16 (struct dpaa2_sg_entry*,int) ;
 int FUNC_17 (struct dpaa2_fl_entry**,int ,int) ;
 int FUNC_18 (int) ;
 int FUNC_19 (struct ahash_edesc*) ;
 struct ahash_edesc* FUNC_20 (int) ;

__attribute__((used)) static int FUNC_21(struct ahash_request *VAR_14)
{
 struct crypto_ahash *VAR_15 = FUNC_5(VAR_14);
 struct caam_hash_ctx *VAR_16 = FUNC_3(VAR_15);
 struct caam_hash_state *VAR_17 = FUNC_0(VAR_14);
 struct caam_request *VAR_18 = &VAR_17->caam_req;
 struct dpaa2_fl_entry *VAR_19 = &VAR_18->fd_flt[1];
 struct dpaa2_fl_entry *VAR_20 = &VAR_18->fd_flt[0];
 gfp_t VAR_21 = (VAR_14->base.flags & VAR_1) ?
        VAR_10 : VAR_8;
 int VAR_22 = *FUNC_7(VAR_17);
 int VAR_23;
 int VAR_24 = FUNC_4(VAR_15);
 struct ahash_edesc *VAR_25;
 struct dpaa2_sg_entry *VAR_26;
 int VAR_27;


 VAR_25 = FUNC_20(VAR_9 | VAR_21);
 if (!VAR_25)
  return -VAR_6;

 VAR_23 = FUNC_18(1 + (VAR_22 ? 1 : 0)) * sizeof(*VAR_26);
 VAR_26 = &VAR_25->sgt[0];

 VAR_27 = FUNC_6(VAR_16->dev, VAR_17, VAR_16->ctx_len, VAR_26,
          VAR_2);
 if (VAR_27)
  goto unmap_ctx;

 VAR_27 = FUNC_2(VAR_16->dev, VAR_26 + 1, VAR_17);
 if (VAR_27)
  goto unmap_ctx;

 FUNC_16(VAR_26 + (VAR_22 ? 1 : 0), 1);

 VAR_25->qm_sg_dma = FUNC_9(VAR_16->dev, VAR_26, VAR_23,
       VAR_3);
 if (FUNC_10(VAR_16->dev, VAR_25->qm_sg_dma)) {
  FUNC_8(VAR_16->dev, "unable to map S/G table\n");
  VAR_27 = -VAR_6;
  goto unmap_ctx;
 }
 VAR_25->qm_sg_bytes = VAR_23;

 FUNC_17(&VAR_18->fd_flt, 0, sizeof(VAR_18->fd_flt));
 FUNC_13(VAR_19, 1);
 FUNC_14(VAR_19, VAR_12);
 FUNC_12(VAR_19, VAR_25->qm_sg_dma);
 FUNC_15(VAR_19, VAR_16->ctx_len + VAR_22);
 FUNC_14(VAR_20, VAR_13);
 FUNC_12(VAR_20, VAR_17->ctx_dma);
 FUNC_15(VAR_20, VAR_24);

 VAR_18->flc = &VAR_16->flc[VAR_7];
 VAR_18->flc_dma = VAR_16->flc_dma[VAR_7];
 VAR_18->cbk = VAR_11;
 VAR_18->ctx = &VAR_14->base;
 VAR_18->edesc = VAR_25;

 VAR_27 = FUNC_11(VAR_16->dev, VAR_18);
 if (VAR_27 == -VAR_5 ||
     (VAR_27 == -VAR_4 && VAR_14->base.flags & VAR_0))
  return VAR_27;

unmap_ctx:
 FUNC_1(VAR_16->dev, VAR_25, VAR_14, VAR_2);
 FUNC_19(VAR_25);
 return VAR_27;
}

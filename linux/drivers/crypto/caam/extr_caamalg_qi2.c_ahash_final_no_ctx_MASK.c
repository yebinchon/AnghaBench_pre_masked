
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct dpaa2_fl_entry {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct caam_request {struct ahash_edesc* edesc; TYPE_1__* ctx; int cbk; int flc_dma; int * flc; struct dpaa2_fl_entry* fd_flt; } ;
struct caam_hash_state {int ctx_dma_len; void* ctx_dma; void* buf_dma; int * caam_ctx; struct caam_request caam_req; } ;
struct caam_hash_ctx {int dev; int * flc_dma; int * flc; } ;
struct TYPE_2__ {int flags; } ;
struct ahash_request {TYPE_1__ base; } ;
struct ahash_edesc {int dummy; } ;
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
 struct caam_hash_ctx* FUNC_2 (struct crypto_ahash*) ;
 int FUNC_3 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_4 (struct ahash_request*) ;
 int * FUNC_5 (struct caam_hash_state*) ;
 int* FUNC_6 (struct caam_hash_state*) ;
 int FUNC_7 (int ,char*) ;
 void* FUNC_8 (int ,int *,int,int ) ;
 scalar_t__ FUNC_9 (int ,void*) ;
 int FUNC_10 (int ,struct caam_request*) ;
 int FUNC_11 (struct dpaa2_fl_entry*,void*) ;
 int FUNC_12 (struct dpaa2_fl_entry*,int) ;
 int FUNC_13 (struct dpaa2_fl_entry*,int ) ;
 int FUNC_14 (struct dpaa2_fl_entry*,int) ;
 int VAR_12 ;
 int FUNC_15 (struct dpaa2_fl_entry**,int ,int) ;
 int FUNC_16 (struct ahash_edesc*) ;
 struct ahash_edesc* FUNC_17 (int) ;

__attribute__((used)) static int FUNC_18(struct ahash_request *VAR_13)
{
 struct crypto_ahash *VAR_14 = FUNC_4(VAR_13);
 struct caam_hash_ctx *VAR_15 = FUNC_2(VAR_14);
 struct caam_hash_state *VAR_16 = FUNC_0(VAR_13);
 struct caam_request *VAR_17 = &VAR_16->caam_req;
 struct dpaa2_fl_entry *VAR_18 = &VAR_17->fd_flt[1];
 struct dpaa2_fl_entry *VAR_19 = &VAR_17->fd_flt[0];
 gfp_t VAR_20 = (VAR_13->base.flags & VAR_1) ?
        VAR_10 : VAR_8;
 u8 *VAR_21 = FUNC_5(VAR_16);
 int VAR_22 = *FUNC_6(VAR_16);
 int VAR_23 = FUNC_3(VAR_14);
 struct ahash_edesc *VAR_24;
 int VAR_25 = -VAR_7;


 VAR_24 = FUNC_17(VAR_9 | VAR_20);
 if (!VAR_24)
  return VAR_25;

 if (VAR_22) {
  VAR_16->buf_dma = FUNC_8(VAR_15->dev, VAR_21, VAR_22,
      VAR_4);
  if (FUNC_9(VAR_15->dev, VAR_16->buf_dma)) {
   FUNC_7(VAR_15->dev, "unable to map src\n");
   goto unmap;
  }
 }

 VAR_16->ctx_dma_len = VAR_23;
 VAR_16->ctx_dma = FUNC_8(VAR_15->dev, VAR_16->caam_ctx, VAR_23,
     VAR_3);
 if (FUNC_9(VAR_15->dev, VAR_16->ctx_dma)) {
  FUNC_7(VAR_15->dev, "unable to map ctx\n");
  VAR_16->ctx_dma = 0;
  goto unmap;
 }

 FUNC_15(&VAR_17->fd_flt, 0, sizeof(VAR_17->fd_flt));
 FUNC_12(VAR_18, 1);






 if (VAR_22) {
  FUNC_13(VAR_18, VAR_12);
  FUNC_11(VAR_18, VAR_16->buf_dma);
  FUNC_14(VAR_18, VAR_22);
 }
 FUNC_13(VAR_19, VAR_12);
 FUNC_11(VAR_19, VAR_16->ctx_dma);
 FUNC_14(VAR_19, VAR_23);

 VAR_17->flc = &VAR_15->flc[VAR_2];
 VAR_17->flc_dma = VAR_15->flc_dma[VAR_2];
 VAR_17->cbk = VAR_11;
 VAR_17->ctx = &VAR_13->base;
 VAR_17->edesc = VAR_24;

 VAR_25 = FUNC_10(VAR_15->dev, VAR_17);
 if (VAR_25 == -VAR_6 ||
     (VAR_25 == -VAR_5 && VAR_13->base.flags & VAR_0))
  return VAR_25;

unmap:
 FUNC_1(VAR_15->dev, VAR_24, VAR_13, VAR_3);
 FUNC_16(VAR_24);
 return VAR_25;
}

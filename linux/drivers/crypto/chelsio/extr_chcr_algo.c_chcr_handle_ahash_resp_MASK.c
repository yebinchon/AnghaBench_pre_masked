
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* pdev; } ;
struct uld_ctx {TYPE_2__ lldi; } ;
struct crypto_ahash {int dummy; } ;
struct cpl_fw6_pld {int dummy; } ;
struct chcr_hctx_per_wr {scalar_t__ processed; int result; scalar_t__ is_sg_map; scalar_t__ isfinal; scalar_t__ dma_addr; int dma_len; } ;
struct chcr_dev {int dummy; } ;
struct chcr_ahash_req_ctx {scalar_t__ reqlen; int partial_hash; struct chcr_hctx_per_wr hctx_wr; } ;
struct TYPE_8__ {int (* complete ) (TYPE_3__*,int) ;} ;
struct ahash_request {scalar_t__ nbytes; TYPE_3__ base; int result; } ;
struct TYPE_9__ {struct chcr_dev* dev; } ;
struct TYPE_6__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct uld_ctx* FUNC_0 (TYPE_4__*) ;
 struct chcr_ahash_req_ctx* FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct chcr_dev*) ;
 int FUNC_4 (int *,struct ahash_request*) ;
 int FUNC_5 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_6 (struct ahash_request*) ;
 int FUNC_7 (int *,scalar_t__,int ,int ) ;
 TYPE_4__* FUNC_8 (struct crypto_ahash*) ;
 int FUNC_9 (int ,unsigned char*,int) ;
 int FUNC_10 (TYPE_3__*,int) ;

__attribute__((used)) static inline void FUNC_11(struct ahash_request *VAR_5,
       unsigned char *VAR_6,
       int VAR_7)
{
 struct chcr_ahash_req_ctx *VAR_8 = FUNC_1(VAR_5);
 struct chcr_hctx_per_wr *VAR_9 = &VAR_8->hctx_wr;
 int VAR_10, VAR_11;
 struct crypto_ahash *VAR_12 = FUNC_6(VAR_5);
 struct uld_ctx *VAR_13 = FUNC_0(FUNC_8(VAR_12));
 struct chcr_dev *VAR_14 = FUNC_8(VAR_12)->dev;

 if (VAR_6 == ((void*)0))
  goto out;
 VAR_10 = FUNC_5(FUNC_6(VAR_5));
 VAR_11 = VAR_10;
 if (VAR_10 == VAR_1)
  VAR_11 = VAR_2;
 else if (VAR_10 == VAR_3)
  VAR_11 = VAR_4;

 if (VAR_9->dma_addr) {
  FUNC_7(&VAR_13->lldi.pdev->dev, VAR_9->dma_addr,
     VAR_9->dma_len, VAR_0);
  VAR_9->dma_addr = 0;
 }
 if (VAR_9->isfinal || ((VAR_9->processed + VAR_8->reqlen) ==
     VAR_5->nbytes)) {
  if (VAR_9->result == 1) {
   VAR_9->result = 0;
   FUNC_9(VAR_5->result, VAR_6 + sizeof(struct cpl_fw6_pld),
          VAR_10);
  } else {
   FUNC_9(VAR_8->partial_hash,
          VAR_6 + sizeof(struct cpl_fw6_pld),
          VAR_11);

  }
  goto unmap;
 }
 FUNC_9(VAR_8->partial_hash, VAR_6 + sizeof(struct cpl_fw6_pld),
        VAR_11);

 VAR_7 = FUNC_2(VAR_5);
 if (VAR_7)
  goto unmap;
 return;
unmap:
 if (VAR_9->is_sg_map)
  FUNC_4(&VAR_13->lldi.pdev->dev, VAR_5);


out:
 FUNC_3(VAR_14);
 VAR_5->base.complete(&VAR_5->base, VAR_7);
}

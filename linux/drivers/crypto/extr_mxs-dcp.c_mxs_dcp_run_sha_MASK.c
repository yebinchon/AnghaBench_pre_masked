
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct hash_alg_common {int digestsize; } ;
struct dcp_sha_req_ctx {scalar_t__ fini; scalar_t__ init; } ;
struct dcp_dma_desc {int control0; scalar_t__ control1; scalar_t__ size; void* payload; scalar_t__ status; scalar_t__ destination; void* source; scalar_t__ next_cmd_addr; } ;
struct dcp_async_ctx {size_t chan; scalar_t__ alg; scalar_t__ fill; } ;
struct dcp {int dev; TYPE_1__* coh; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;
typedef void* dma_addr_t ;
struct TYPE_2__ {int sha_out_buf; int sha_in_buf; struct dcp_dma_desc* desc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 struct dcp_sha_req_ctx* FUNC_0 (struct ahash_request*) ;
 struct dcp_async_ctx* FUNC_1 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_2 (struct ahash_request*) ;
 struct hash_alg_common* FUNC_3 (struct crypto_ahash*) ;
 void* FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,void*,int ,int ) ;
 struct dcp* VAR_10 ;
 int FUNC_6 (int ,int const*,int ) ;
 int FUNC_7 (struct dcp_async_ctx*) ;
 int * VAR_11 ;
 int * VAR_12 ;

__attribute__((used)) static int FUNC_8(struct ahash_request *VAR_13)
{
 struct dcp *VAR_14 = VAR_10;
 int VAR_15;

 struct crypto_ahash *VAR_16 = FUNC_2(VAR_13);
 struct dcp_async_ctx *VAR_17 = FUNC_1(VAR_16);
 struct dcp_sha_req_ctx *VAR_18 = FUNC_0(VAR_13);
 struct dcp_dma_desc *VAR_19 = &VAR_14->coh->desc[VAR_17->chan];

 dma_addr_t VAR_20 = 0;
 dma_addr_t VAR_21 = FUNC_4(VAR_14->dev, VAR_14->coh->sha_in_buf,
          VAR_0, VAR_3);


 VAR_19->control0 = VAR_4 |
      VAR_8 |
      VAR_5;
 if (VAR_18->init)
  VAR_19->control0 |= VAR_6;

 VAR_19->control1 = VAR_17->alg;
 VAR_19->next_cmd_addr = 0;
 VAR_19->source = VAR_21;
 VAR_19->destination = 0;
 VAR_19->size = VAR_17->fill;
 VAR_19->payload = 0;
 VAR_19->status = 0;




 if (VAR_18->init && VAR_18->fini && VAR_19->size == 0) {
  struct hash_alg_common *VAR_22 = FUNC_3(VAR_16);
  const uint8_t *VAR_23 =
   (VAR_17->alg == VAR_9) ?
   VAR_11 : VAR_12;
  FUNC_6(VAR_14->coh->sha_out_buf, VAR_23, VAR_22->digestsize);
  VAR_15 = 0;
  goto done_run;
 }


 if (VAR_18->fini) {
  VAR_20 = FUNC_4(VAR_14->dev, VAR_14->coh->sha_out_buf,
          VAR_1, VAR_2);
  VAR_19->control0 |= VAR_7;
  VAR_19->payload = VAR_20;
 }

 VAR_15 = FUNC_7(VAR_17);

 if (VAR_18->fini)
  FUNC_5(VAR_14->dev, VAR_20, VAR_1,
     VAR_2);

done_run:
 FUNC_5(VAR_14->dev, VAR_21, VAR_0, VAR_3);

 return VAR_15;
}

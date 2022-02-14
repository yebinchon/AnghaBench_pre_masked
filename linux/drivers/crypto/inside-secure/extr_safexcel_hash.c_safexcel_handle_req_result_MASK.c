
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct safexcel_result_desc {int dummy; } ;
struct safexcel_crypto_priv {int dev; TYPE_1__* ring; } ;
struct safexcel_ahash_req {scalar_t__ digest; int cache_next; int cache; int state; scalar_t__ hmac; scalar_t__ block_sz; scalar_t__ processed; scalar_t__ len; scalar_t__ state_sz; scalar_t__ finish; scalar_t__ cache_sz; scalar_t__ cache_dma; scalar_t__ result_dma; scalar_t__ nents; } ;
struct TYPE_4__ {int needs_inv; } ;
struct safexcel_ahash_ctx {TYPE_2__ base; int opad; } ;
struct crypto_async_request {int dummy; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int result; scalar_t__ nbytes; int src; } ;
struct TYPE_3__ {int rdr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct safexcel_result_desc*) ;
 int FUNC_1 (struct safexcel_result_desc*) ;
 struct ahash_request* FUNC_2 (struct crypto_async_request*) ;
 struct safexcel_ahash_req* FUNC_3 (struct ahash_request*) ;
 struct safexcel_ahash_ctx* FUNC_4 (struct crypto_ahash*) ;
 scalar_t__ FUNC_5 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_6 (struct ahash_request*) ;
 int FUNC_7 (int ,char*) ;
 int FUNC_8 (int ,int ,scalar_t__,int ) ;
 int FUNC_9 (int ,scalar_t__,scalar_t__,int ) ;
 int FUNC_10 (int ,int ,scalar_t__) ;
 int FUNC_11 (struct ahash_request*) ;
 int FUNC_12 (struct safexcel_crypto_priv*,int) ;
 scalar_t__ FUNC_13 (struct safexcel_ahash_req*) ;
 int FUNC_14 (struct safexcel_crypto_priv*,struct safexcel_result_desc*) ;
 struct safexcel_result_desc* FUNC_15 (struct safexcel_crypto_priv*,int *) ;

__attribute__((used)) static int FUNC_16(struct safexcel_crypto_priv *VAR_3,
          int VAR_4,
          struct crypto_async_request *VAR_5,
          bool *VAR_6, int *VAR_7)
{
 struct safexcel_result_desc *VAR_8;
 struct ahash_request *VAR_9 = FUNC_2(VAR_5);
 struct crypto_ahash *VAR_10 = FUNC_6(VAR_9);
 struct safexcel_ahash_req *VAR_11 = FUNC_3(VAR_9);
 struct safexcel_ahash_ctx *VAR_12 = FUNC_4(VAR_10);
 u64 VAR_13;

 *VAR_7 = 0;

 VAR_8 = FUNC_15(VAR_3, &VAR_3->ring[VAR_4].rdr);
 if (FUNC_0(VAR_8)) {
  FUNC_7(VAR_3->dev,
   "hash: result: could not retrieve the result descriptor\n");
  *VAR_7 = FUNC_1(VAR_8);
 } else {
  *VAR_7 = FUNC_14(VAR_3, VAR_8);
 }

 FUNC_12(VAR_3, VAR_4);

 if (VAR_11->nents) {
  FUNC_8(VAR_3->dev, VAR_9->src, VAR_11->nents, VAR_2);
  VAR_11->nents = 0;
 }

 if (VAR_11->result_dma) {
  FUNC_9(VAR_3->dev, VAR_11->result_dma, VAR_11->state_sz,
     VAR_1);
  VAR_11->result_dma = 0;
 }

 if (VAR_11->cache_dma) {
  FUNC_9(VAR_3->dev, VAR_11->cache_dma, VAR_11->cache_sz,
     VAR_2);
  VAR_11->cache_dma = 0;
  VAR_11->cache_sz = 0;
 }

 if (VAR_11->finish) {
  if (VAR_11->hmac &&
      (VAR_11->digest != VAR_0)) {

   FUNC_10(VAR_11->cache, VAR_11->state,
          FUNC_5(VAR_10));

   FUNC_10(VAR_11->state, VAR_12->opad, VAR_11->state_sz);

   VAR_11->len = VAR_11->block_sz +
        FUNC_5(VAR_10);
   VAR_11->processed = VAR_11->block_sz;
   VAR_11->hmac = 0;

   VAR_12->base.needs_inv = 1;
   VAR_9->nbytes = 0;
   FUNC_11(VAR_9);

   *VAR_6 = 0;
   return 1;
  }

  FUNC_10(VAR_9->result, VAR_11->state,
         FUNC_5(VAR_10));
 }

 VAR_13 = FUNC_13(VAR_11);
 if (VAR_13)
  FUNC_10(VAR_11->cache, VAR_11->cache_next, VAR_13);

 *VAR_6 = 1;

 return 1;
}

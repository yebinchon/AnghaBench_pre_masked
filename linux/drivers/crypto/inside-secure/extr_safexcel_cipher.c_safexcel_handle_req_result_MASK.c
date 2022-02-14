
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_request {int iv; } ;
struct scatterlist {int dummy; } ;
struct safexcel_result_desc {int dummy; } ;
struct safexcel_crypto_priv {int dev; TYPE_1__* ring; } ;
struct safexcel_cipher_req {scalar_t__ direction; int nr_dst; int nr_src; int rdescs; } ;
struct safexcel_cipher_ctx {scalar_t__ mode; int aead; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_async_request {int dummy; } ;
struct TYPE_2__ {int rdr; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct safexcel_result_desc*) ;
 int FUNC_1 (struct safexcel_result_desc*) ;
 scalar_t__ VAR_4 ;
 struct safexcel_cipher_ctx* FUNC_2 (struct crypto_skcipher*) ;
 scalar_t__ FUNC_3 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_4 (struct skcipher_request*) ;
 int FUNC_5 (int ,char*) ;
 int FUNC_6 (int ,struct scatterlist*,int ,int ) ;
 scalar_t__ FUNC_7 (int) ;
 int FUNC_8 (struct safexcel_crypto_priv*,int) ;
 int FUNC_9 (struct safexcel_crypto_priv*,struct safexcel_result_desc*) ;
 struct safexcel_result_desc* FUNC_10 (struct safexcel_crypto_priv*,int *) ;
 int FUNC_11 (struct scatterlist*,int ,int ,scalar_t__,scalar_t__) ;
 struct skcipher_request* FUNC_12 (struct crypto_async_request*) ;
 scalar_t__ FUNC_13 (int) ;

__attribute__((used)) static int FUNC_14(struct safexcel_crypto_priv *VAR_5, int VAR_6,
          struct crypto_async_request *VAR_7,
          struct scatterlist *VAR_8,
          struct scatterlist *VAR_9,
          unsigned int VAR_10,
          struct safexcel_cipher_req *VAR_11,
          bool *VAR_12, int *VAR_13)
{
 struct skcipher_request *VAR_14 = FUNC_12(VAR_7);
 struct crypto_skcipher *VAR_15 = FUNC_4(VAR_14);
 struct safexcel_cipher_ctx *VAR_16 = FUNC_2(VAR_15);
 struct safexcel_result_desc *VAR_17;
 int VAR_18 = 0;

 *VAR_13 = 0;

 if (FUNC_13(!VAR_11->rdescs))
  return 0;

 while (VAR_11->rdescs--) {
  VAR_17 = FUNC_10(VAR_5, &VAR_5->ring[VAR_6].rdr);
  if (FUNC_0(VAR_17)) {
   FUNC_5(VAR_5->dev,
    "cipher: result: could not retrieve the result descriptor\n");
   *VAR_13 = FUNC_1(VAR_17);
   break;
  }

  if (FUNC_7(!*VAR_13))
   *VAR_13 = FUNC_9(VAR_5, VAR_17);

  VAR_18++;
 }

 FUNC_8(VAR_5, VAR_6);

 if (VAR_8 == VAR_9) {
  FUNC_6(VAR_5->dev, VAR_8, VAR_11->nr_src, VAR_1);
 } else {
  FUNC_6(VAR_5->dev, VAR_8, VAR_11->nr_src, VAR_3);
  FUNC_6(VAR_5->dev, VAR_9, VAR_11->nr_dst, VAR_2);
 }




 if ((!VAR_16->aead) && (VAR_16->mode == VAR_0) &&
     (VAR_11->direction == VAR_4)) {

  FUNC_11(VAR_9, VAR_11->nr_dst, VAR_14->iv,
       FUNC_3(VAR_15),
       (VAR_10 -
        FUNC_3(VAR_15)));
 }

 *VAR_12 = 1;

 return VAR_18;
}

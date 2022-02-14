
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int tfm; } ;
struct skcipher_request {int cryptlen; int dst; int src; int iv; TYPE_1__ base; } ;
struct safexcel_crypto_priv {int flags; } ;
struct safexcel_cipher_req {int rdescs; scalar_t__ needs_inv; } ;
struct safexcel_cipher_ctx {struct safexcel_crypto_priv* priv; } ;
struct crypto_skcipher {int dummy; } ;
struct crypto_async_request {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_2 (struct skcipher_request*) ;
 struct safexcel_cipher_ctx* FUNC_3 (int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (struct crypto_async_request*,int,int*,int*) ;
 int FUNC_6 (struct crypto_async_request*,int,struct safexcel_cipher_req*,int ,int ,int ,int ,int ,int *,int*,int*) ;
 struct skcipher_request* FUNC_7 (struct crypto_async_request*) ;
 struct safexcel_cipher_req* FUNC_8 (struct skcipher_request*) ;

__attribute__((used)) static int FUNC_9(struct crypto_async_request *VAR_2, int VAR_3,
      int *VAR_4, int *VAR_5)
{
 struct skcipher_request *VAR_6 = FUNC_7(VAR_2);
 struct safexcel_cipher_ctx *VAR_7 = FUNC_3(VAR_6->base.tfm);
 struct safexcel_cipher_req *VAR_8 = FUNC_8(VAR_6);
 struct safexcel_crypto_priv *VAR_9 = VAR_7->priv;
 int VAR_10;

 FUNC_0(!(VAR_9->flags & VAR_1) && VAR_8->needs_inv);

 if (VAR_8->needs_inv) {
  VAR_10 = FUNC_5(VAR_2, VAR_3, VAR_4, VAR_5);
 } else {
  struct crypto_skcipher *VAR_11 = FUNC_2(VAR_6);
  u8 VAR_12[VAR_0];





  FUNC_4(VAR_12, VAR_6->iv, FUNC_1(VAR_11));

  VAR_10 = FUNC_6(VAR_2, VAR_3, VAR_8, VAR_6->src,
     VAR_6->dst, VAR_6->cryptlen, 0, 0, VAR_12,
     VAR_4, VAR_5);
 }

 VAR_8->rdescs = *VAR_5;
 return VAR_10;
}

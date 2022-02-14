
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct safexcel_crypto_priv {int flags; } ;
struct safexcel_cipher_req {int rdescs; scalar_t__ needs_inv; } ;
struct safexcel_cipher_ctx {struct safexcel_crypto_priv* priv; } ;
struct crypto_async_request {int dummy; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {int tfm; } ;
struct aead_request {int iv; int assoclen; int cryptlen; int dst; int src; TYPE_1__ base; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 struct aead_request* FUNC_1 (struct crypto_async_request*) ;
 struct safexcel_cipher_req* FUNC_2 (struct aead_request*) ;
 int FUNC_3 (struct crypto_aead*) ;
 struct crypto_aead* FUNC_4 (struct aead_request*) ;
 struct safexcel_cipher_ctx* FUNC_5 (int ) ;
 int FUNC_6 (struct crypto_async_request*,int,int*,int*) ;
 int FUNC_7 (struct crypto_async_request*,int,struct safexcel_cipher_req*,int ,int ,int ,int ,int ,int ,int*,int*) ;

__attribute__((used)) static int FUNC_8(struct crypto_async_request *VAR_1, int VAR_2,
         int *VAR_3, int *VAR_4)
{
 struct aead_request *VAR_5 = FUNC_1(VAR_1);
 struct crypto_aead *VAR_6 = FUNC_4(VAR_5);
 struct safexcel_cipher_ctx *VAR_7 = FUNC_5(VAR_5->base.tfm);
 struct safexcel_cipher_req *VAR_8 = FUNC_2(VAR_5);
 struct safexcel_crypto_priv *VAR_9 = VAR_7->priv;
 int VAR_10;

 FUNC_0(!(VAR_9->flags & VAR_0) && VAR_8->needs_inv);

 if (VAR_8->needs_inv)
  VAR_10 = FUNC_6(VAR_1, VAR_2, VAR_3, VAR_4);
 else
  VAR_10 = FUNC_7(VAR_1, VAR_2, VAR_8, VAR_5->src, VAR_5->dst,
     VAR_5->cryptlen, VAR_5->assoclen,
     FUNC_3(VAR_6), VAR_5->iv,
     VAR_3, VAR_4);
 VAR_8->rdescs = *VAR_4;
 return VAR_10;
}

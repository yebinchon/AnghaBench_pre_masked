
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_crypto_ablkcipher_ctx {int * vcrypto; } ;
struct crypto_tfm {int dummy; } ;


 struct virtio_crypto_ablkcipher_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct virtio_crypto_ablkcipher_ctx*,int) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_0)
{
 struct virtio_crypto_ablkcipher_ctx *VAR_1 = FUNC_0(VAR_0);

 if (!VAR_1->vcrypto)
  return;

 FUNC_2(VAR_1, 1);
 FUNC_2(VAR_1, 0);
 FUNC_1(VAR_1->vcrypto);
 VAR_1->vcrypto = ((void*)0);
}

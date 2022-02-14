
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct virtio_crypto_request {int alg_cb; struct data_queue* dataq; } ;
struct virtio_crypto_sym_request {int encrypt; struct ablkcipher_request* ablkcipher_req; struct virtio_crypto_ablkcipher_ctx* ablkcipher_ctx; struct virtio_crypto_request base; } ;
struct virtio_crypto_ablkcipher_ctx {struct virtio_crypto* vcrypto; } ;
struct virtio_crypto {struct data_queue* data_vq; } ;
struct data_queue {int engine; } ;
struct crypto_ablkcipher {int dummy; } ;
struct ablkcipher_request {int dummy; } ;


 struct virtio_crypto_sym_request* FUNC_0 (struct ablkcipher_request*) ;
 struct virtio_crypto_ablkcipher_ctx* FUNC_1 (struct crypto_ablkcipher*) ;
 struct crypto_ablkcipher* FUNC_2 (struct ablkcipher_request*) ;
 int FUNC_3 (int ,struct ablkcipher_request*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct ablkcipher_request *VAR_1)
{
 struct crypto_ablkcipher *VAR_2 = FUNC_2(VAR_1);
 struct virtio_crypto_ablkcipher_ctx *VAR_3 = FUNC_1(VAR_2);
 struct virtio_crypto_sym_request *VAR_4 =
    FUNC_0(VAR_1);
 struct virtio_crypto_request *VAR_5 = &VAR_4->base;
 struct virtio_crypto *VAR_6 = VAR_3->vcrypto;

 struct data_queue *VAR_7 = &VAR_6->data_vq[0];

 VAR_5->dataq = VAR_7;
 VAR_5->alg_cb = VAR_0;
 VAR_4->ablkcipher_ctx = VAR_3;
 VAR_4->ablkcipher_req = VAR_1;
 VAR_4->encrypt = 1;

 return FUNC_3(VAR_7->engine, VAR_1);
}

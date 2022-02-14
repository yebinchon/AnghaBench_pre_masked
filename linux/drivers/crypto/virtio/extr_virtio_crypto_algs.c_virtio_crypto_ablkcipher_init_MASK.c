
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct virtio_crypto_sym_request {int dummy; } ;
struct TYPE_6__ {int * unprepare_request; int * prepare_request; int do_one_request; } ;
struct TYPE_5__ {TYPE_3__ op; } ;
struct virtio_crypto_ablkcipher_ctx {TYPE_2__ enginectx; struct crypto_tfm* tfm; } ;
struct TYPE_4__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;


 struct virtio_crypto_ablkcipher_ctx* FUNC_0 (struct crypto_tfm*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_1)
{
 struct virtio_crypto_ablkcipher_ctx *VAR_2 = FUNC_0(VAR_1);

 VAR_1->crt_ablkcipher.reqsize = sizeof(struct virtio_crypto_sym_request);
 VAR_2->tfm = VAR_1;

 VAR_2->enginectx.op.do_one_request = VAR_0;
 VAR_2->enginectx.op.prepare_request = ((void*)0);
 VAR_2->enginectx.op.unprepare_request = ((void*)0);
 return 0;
}

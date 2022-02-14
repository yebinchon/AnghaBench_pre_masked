
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;
struct TYPE_4__ {int start; } ;
struct atmel_aes_xts_ctx {TYPE_2__ base; } ;
struct atmel_aes_reqctx {int dummy; } ;


 int VAR_0 ;
 struct atmel_aes_xts_ctx* FUNC_0 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_1)
{
 struct atmel_aes_xts_ctx *VAR_2 = FUNC_0(VAR_1);

 VAR_1->crt_ablkcipher.reqsize = sizeof(struct atmel_aes_reqctx);
 VAR_2->base.start = VAR_0;

 return 0;
}

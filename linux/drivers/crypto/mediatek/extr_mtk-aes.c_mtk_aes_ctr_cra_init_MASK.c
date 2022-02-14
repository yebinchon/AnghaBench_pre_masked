
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct mtk_aes_reqctx {int dummy; } ;
struct TYPE_4__ {int start; } ;
struct mtk_aes_ctx {TYPE_2__ base; } ;
struct TYPE_3__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;


 struct mtk_aes_ctx* FUNC_0 (struct crypto_tfm*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_1)
{
 struct mtk_aes_ctx *VAR_2 = FUNC_0(VAR_1);

 VAR_1->crt_ablkcipher.reqsize = sizeof(struct mtk_aes_reqctx);
 VAR_2->base.start = VAR_0;
 return 0;
}

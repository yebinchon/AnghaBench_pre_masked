
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct s5p_aes_reqctx {int dummy; } ;
struct s5p_aes_ctx {int dev; } ;
struct TYPE_2__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;


 struct s5p_aes_ctx* FUNC_0 (struct crypto_tfm*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_1(struct crypto_tfm *VAR_1)
{
 struct s5p_aes_ctx *VAR_2 = FUNC_0(VAR_1);

 VAR_2->dev = VAR_0;
 VAR_1->crt_ablkcipher.reqsize = sizeof(struct s5p_aes_reqctx);

 return 0;
}

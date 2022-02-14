
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct qce_cipher_reqctx {int dummy; } ;
struct qce_cipher_ctx {int fallback; } ;
struct TYPE_2__ {int reqsize; } ;
struct crypto_tfm {TYPE_1__ crt_ablkcipher; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct crypto_tfm*) ;
 struct qce_cipher_ctx* FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (struct qce_cipher_ctx*,int ,int) ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_1)
{
 struct qce_cipher_ctx *VAR_2 = FUNC_3(VAR_1);

 FUNC_4(VAR_2, 0, sizeof(*VAR_2));
 VAR_1->crt_ablkcipher.reqsize = sizeof(struct qce_cipher_reqctx);

 VAR_2->fallback = FUNC_1(FUNC_2(VAR_1),
         0, VAR_0);
 return FUNC_0(VAR_2->fallback);
}

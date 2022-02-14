
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_tfm {int dummy; } ;
struct atmel_sha_reqctx {int dummy; } ;
struct TYPE_2__ {int start; } ;
struct atmel_sha_hmac_ctx {int hkey; TYPE_1__ base; } ;


 int FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int FUNC_2 (int ,int) ;
 struct atmel_sha_hmac_ctx* FUNC_3 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_4(struct crypto_tfm *VAR_1)
{
 struct atmel_sha_hmac_ctx *VAR_2 = FUNC_3(VAR_1);

 FUNC_2(FUNC_0(VAR_1),
     sizeof(struct atmel_sha_reqctx));
 VAR_2->base.start = VAR_0;
 FUNC_1(&VAR_2->hkey);

 return 0;
}

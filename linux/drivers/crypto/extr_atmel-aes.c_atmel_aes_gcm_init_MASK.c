
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct crypto_aead {int dummy; } ;
struct atmel_aes_reqctx {int dummy; } ;
struct TYPE_2__ {int start; } ;
struct atmel_aes_gcm_ctx {TYPE_1__ base; } ;


 int VAR_0 ;
 struct atmel_aes_gcm_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*,int) ;

__attribute__((used)) static int FUNC_2(struct crypto_aead *VAR_1)
{
 struct atmel_aes_gcm_ctx *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1, sizeof(struct atmel_aes_reqctx));
 VAR_2->base.start = VAR_0;

 return 0;
}

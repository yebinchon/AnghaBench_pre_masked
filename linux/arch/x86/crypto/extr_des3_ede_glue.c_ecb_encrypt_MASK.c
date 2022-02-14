
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct skcipher_request {int dummy; } ;
struct TYPE_2__ {int expkey; } ;
struct des3_ede_x86_ctx {TYPE_1__ enc; } ;
struct crypto_skcipher {int dummy; } ;


 struct des3_ede_x86_ctx* FUNC_0 (struct crypto_skcipher*) ;
 struct crypto_skcipher* FUNC_1 (struct skcipher_request*) ;
 int FUNC_2 (struct skcipher_request*,int ) ;

__attribute__((used)) static int FUNC_3(struct skcipher_request *VAR_0)
{
 struct crypto_skcipher *VAR_1 = FUNC_1(VAR_0);
 struct des3_ede_x86_ctx *VAR_2 = FUNC_0(VAR_1);

 return FUNC_2(VAR_0, VAR_2->enc.expkey);
}

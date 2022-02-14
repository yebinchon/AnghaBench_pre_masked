
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct simd_aead_ctx {TYPE_1__* cryptd_tfm; } ;
struct crypto_aead {int dummy; } ;
struct aead_request {int dummy; } ;
struct TYPE_3__ {struct crypto_aead base; } ;


 struct aead_request* FUNC_0 (struct aead_request*) ;
 int FUNC_1 (struct aead_request*,struct crypto_aead*) ;
 struct crypto_aead* FUNC_2 (TYPE_1__*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 struct simd_aead_ctx* FUNC_4 (struct crypto_aead*) ;
 int FUNC_5 (struct aead_request*) ;
 struct crypto_aead* FUNC_6 (struct aead_request*) ;
 int FUNC_7 () ;
 scalar_t__ FUNC_8 () ;

__attribute__((used)) static int FUNC_9(struct aead_request *VAR_0)
{
 struct crypto_aead *VAR_1 = FUNC_6(VAR_0);
 struct simd_aead_ctx *VAR_2 = FUNC_4(VAR_1);
 struct aead_request *VAR_3;
 struct crypto_aead *VAR_4;

 VAR_3 = FUNC_0(VAR_0);
 *VAR_3 = *VAR_0;

 if (!FUNC_7() ||
     (FUNC_8() && FUNC_3(VAR_2->cryptd_tfm)))
  VAR_4 = &VAR_2->cryptd_tfm->base;
 else
  VAR_4 = FUNC_2(VAR_2->cryptd_tfm);

 FUNC_1(VAR_3, VAR_4);

 return FUNC_5(VAR_3);
}

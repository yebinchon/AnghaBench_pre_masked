
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct simd_aead_ctx {TYPE_1__* cryptd_tfm; } ;
struct crypto_aead {int dummy; } ;
struct TYPE_2__ {struct crypto_aead base; } ;


 struct simd_aead_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct crypto_aead *VAR_0, unsigned int VAR_1)
{
 struct simd_aead_ctx *VAR_2 = FUNC_0(VAR_0);
 struct crypto_aead *VAR_3 = &VAR_2->cryptd_tfm->base;

 return FUNC_1(VAR_3, VAR_1);
}

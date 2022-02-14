
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int aead; } ;
struct essiv_tfm_ctx {TYPE_1__ u; } ;
struct crypto_aead {int dummy; } ;


 struct essiv_tfm_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (int ,unsigned int) ;

__attribute__((used)) static int FUNC_2(struct crypto_aead *VAR_0,
      unsigned int VAR_1)
{
 struct essiv_tfm_ctx *VAR_2 = FUNC_0(VAR_0);

 return FUNC_1(VAR_2->u.aead, VAR_1);
}

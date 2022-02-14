
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmac_tfm_ctx {int cipher; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (int ) ;
 struct vmac_tfm_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_0)
{
 struct vmac_tfm_ctx *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->cipher);
}

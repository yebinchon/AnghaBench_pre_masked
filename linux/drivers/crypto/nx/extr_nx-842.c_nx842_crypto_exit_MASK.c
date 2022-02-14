
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nx842_crypto_ctx {scalar_t__ dbounce; scalar_t__ sbounce; int wmem; } ;
struct crypto_tfm {int dummy; } ;


 struct nx842_crypto_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (unsigned long) ;
 int FUNC_2 (int ) ;

void FUNC_3(struct crypto_tfm *VAR_0)
{
 struct nx842_crypto_ctx *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(VAR_1->wmem);
 FUNC_1((unsigned long)VAR_1->sbounce);
 FUNC_1((unsigned long)VAR_1->dbounce);
}

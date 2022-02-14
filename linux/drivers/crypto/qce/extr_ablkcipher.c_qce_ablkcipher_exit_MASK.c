
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qce_cipher_ctx {int fallback; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (int ) ;
 struct qce_cipher_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_0)
{
 struct qce_cipher_ctx *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->fallback);
}

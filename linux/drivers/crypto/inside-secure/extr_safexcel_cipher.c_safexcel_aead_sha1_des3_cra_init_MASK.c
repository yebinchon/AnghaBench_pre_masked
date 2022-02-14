
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_cipher_ctx {int alg; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 struct safexcel_cipher_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_1)
{
 struct safexcel_cipher_ctx *VAR_2 = FUNC_0(VAR_1);

 FUNC_1(VAR_1);
 VAR_2->alg = VAR_0;
 return 0;
}

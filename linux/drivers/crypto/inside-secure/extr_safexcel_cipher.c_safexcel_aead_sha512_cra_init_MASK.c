
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_cipher_ctx {int state_sz; int hash_alg; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct safexcel_cipher_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_2)
{
 struct safexcel_cipher_ctx *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_2);
 VAR_3->hash_alg = VAR_0;
 VAR_3->state_sz = VAR_1;
 return 0;
}

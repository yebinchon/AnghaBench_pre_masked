
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_cipher_ctx {int state_sz; int mode; int xcm; int hash_alg; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct safexcel_cipher_ctx* FUNC_0 (struct crypto_tfm*) ;
 int FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_2(struct crypto_tfm *VAR_4)
{
 struct safexcel_cipher_ctx *VAR_5 = FUNC_0(VAR_4);

 FUNC_1(VAR_4);
 VAR_5->hash_alg = VAR_1;
 VAR_5->state_sz = 3 * VAR_0;
 VAR_5->xcm = VAR_3;
 VAR_5->mode = VAR_2;
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_cipher_ctx {int hkaes; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (int ) ;
 struct safexcel_cipher_ctx* FUNC_1 (struct crypto_tfm*) ;
 int FUNC_2 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_0)
{
 struct safexcel_cipher_ctx *VAR_1 = FUNC_1(VAR_0);

 FUNC_0(VAR_1->hkaes);
 FUNC_2(VAR_0);
}

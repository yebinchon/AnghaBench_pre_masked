
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct safexcel_cipher_ctx {int hkaes; int mode; int xcm; int state_sz; int hash_alg; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (char*,int ,int ) ;
 struct safexcel_cipher_ctx* FUNC_3 (struct crypto_tfm*) ;
 int FUNC_4 (struct crypto_tfm*) ;

__attribute__((used)) static int FUNC_5(struct crypto_tfm *VAR_4)
{
 struct safexcel_cipher_ctx *VAR_5 = FUNC_3(VAR_4);

 FUNC_4(VAR_4);
 VAR_5->hash_alg = VAR_0;
 VAR_5->state_sz = VAR_3;
 VAR_5->xcm = VAR_2;
 VAR_5->mode = VAR_1;

 VAR_5->hkaes = FUNC_2("aes", 0, 0);
 if (FUNC_0(VAR_5->hkaes))
  return FUNC_1(VAR_5->hkaes);

 return 0;
}

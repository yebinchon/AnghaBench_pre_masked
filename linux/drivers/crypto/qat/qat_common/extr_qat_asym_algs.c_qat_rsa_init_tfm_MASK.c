
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct qat_rsa_ctx {struct qat_crypto_instance* inst; scalar_t__ key_sz; } ;
struct qat_crypto_instance {int dummy; } ;
struct crypto_akcipher {int dummy; } ;


 int VAR_0 ;
 struct qat_rsa_ctx* FUNC_0 (struct crypto_akcipher*) ;
 int FUNC_1 () ;
 struct qat_crypto_instance* FUNC_2 (int ) ;

__attribute__((used)) static int FUNC_3(struct crypto_akcipher *VAR_1)
{
 struct qat_rsa_ctx *VAR_2 = FUNC_0(VAR_1);
 struct qat_crypto_instance *VAR_3 =
   FUNC_2(FUNC_1());

 if (!VAR_3)
  return -VAR_0;

 VAR_2->key_sz = 0;
 VAR_2->inst = VAR_3;
 return 0;
}

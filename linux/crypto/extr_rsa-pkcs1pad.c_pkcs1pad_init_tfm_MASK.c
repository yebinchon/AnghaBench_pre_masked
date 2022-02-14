
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs1pad_inst_ctx {int spawn; } ;
struct pkcs1pad_ctx {struct crypto_akcipher* child; } ;
struct crypto_akcipher {int dummy; } ;
struct akcipher_instance {int dummy; } ;


 scalar_t__ FUNC_0 (struct crypto_akcipher*) ;
 int FUNC_1 (struct crypto_akcipher*) ;
 struct akcipher_instance* FUNC_2 (struct crypto_akcipher*) ;
 struct pkcs1pad_inst_ctx* FUNC_3 (struct akcipher_instance*) ;
 struct pkcs1pad_ctx* FUNC_4 (struct crypto_akcipher*) ;
 struct crypto_akcipher* FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct crypto_akcipher *VAR_0)
{
 struct akcipher_instance *VAR_1 = FUNC_2(VAR_0);
 struct pkcs1pad_inst_ctx *VAR_2 = FUNC_3(VAR_1);
 struct pkcs1pad_ctx *VAR_3 = FUNC_4(VAR_0);
 struct crypto_akcipher *VAR_4;

 VAR_4 = FUNC_5(&VAR_2->spawn);
 if (FUNC_0(VAR_4))
  return FUNC_1(VAR_4);

 VAR_3->child = VAR_4;
 return 0;
}

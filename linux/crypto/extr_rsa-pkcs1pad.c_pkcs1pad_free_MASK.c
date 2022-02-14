
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_akcipher_spawn {int dummy; } ;
struct pkcs1pad_inst_ctx {struct crypto_akcipher_spawn spawn; } ;
struct akcipher_instance {int dummy; } ;


 struct pkcs1pad_inst_ctx* FUNC_0 (struct akcipher_instance*) ;
 int FUNC_1 (struct crypto_akcipher_spawn*) ;
 int FUNC_2 (struct akcipher_instance*) ;

__attribute__((used)) static void FUNC_3(struct akcipher_instance *VAR_0)
{
 struct pkcs1pad_inst_ctx *VAR_1 = FUNC_0(VAR_0);
 struct crypto_akcipher_spawn *VAR_2 = &VAR_1->spawn;

 FUNC_1(VAR_2);
 FUNC_2(VAR_0);
}

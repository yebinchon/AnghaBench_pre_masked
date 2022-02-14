
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pkcs1pad_ctx {int child; } ;
struct crypto_akcipher {int dummy; } ;


 struct pkcs1pad_ctx* FUNC_0 (struct crypto_akcipher*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct crypto_akcipher *VAR_0)
{
 struct pkcs1pad_ctx *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->child);
}

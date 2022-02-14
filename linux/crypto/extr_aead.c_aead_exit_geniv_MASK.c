
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct aead_geniv_ctx {int child; } ;


 struct aead_geniv_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 () ;

void FUNC_3(struct crypto_aead *VAR_0)
{
 struct aead_geniv_ctx *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(VAR_1->child);
 FUNC_2();
}

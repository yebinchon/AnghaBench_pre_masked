
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct crypto_aead {int dummy; } ;
struct chcr_aead_ctx {int sw_cipher; } ;


 struct chcr_aead_ctx* FUNC_0 (int ) ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct crypto_aead *VAR_0)
{
 struct chcr_aead_ctx *VAR_1 = FUNC_0(FUNC_1(VAR_0));

 FUNC_2(VAR_1->sw_cipher);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_aes_ctx {scalar_t__ ctr; } ;
struct crypto_aead {int dummy; } ;


 struct omap_aes_ctx* FUNC_0 (struct crypto_aead*) ;
 int FUNC_1 (struct crypto_aead*) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct crypto_aead *VAR_0)
{
 struct omap_aes_ctx *VAR_1 = FUNC_0(VAR_0);

 FUNC_3(FUNC_1(VAR_0));

 if (VAR_1->ctr)
  FUNC_2(VAR_1->ctr);
}

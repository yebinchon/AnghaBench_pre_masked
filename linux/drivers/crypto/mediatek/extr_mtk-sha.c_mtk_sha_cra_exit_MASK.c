
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_sha_hmac_ctx {int shash; } ;
struct mtk_sha_ctx {int flags; struct mtk_sha_hmac_ctx* base; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 struct mtk_sha_ctx* FUNC_1 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_2(struct crypto_tfm *VAR_1)
{
 struct mtk_sha_ctx *VAR_2 = FUNC_1(VAR_1);

 if (VAR_2->flags & VAR_0) {
  struct mtk_sha_hmac_ctx *VAR_3 = VAR_2->base;

  FUNC_0(VAR_3->shash);
 }
}

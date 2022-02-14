
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap_sham_hmac_ctx {int * shash; } ;
struct omap_sham_ctx {int flags; struct omap_sham_hmac_ctx* base; int * fallback; } ;
struct crypto_tfm {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 struct omap_sham_ctx* FUNC_2 (struct crypto_tfm*) ;

__attribute__((used)) static void FUNC_3(struct crypto_tfm *VAR_1)
{
 struct omap_sham_ctx *VAR_2 = FUNC_2(VAR_1);

 FUNC_1(VAR_2->fallback);
 VAR_2->fallback = ((void*)0);

 if (VAR_2->flags & FUNC_0(VAR_0)) {
  struct omap_sham_hmac_ctx *VAR_3 = VAR_2->base;
  FUNC_1(VAR_3->shash);
 }
}

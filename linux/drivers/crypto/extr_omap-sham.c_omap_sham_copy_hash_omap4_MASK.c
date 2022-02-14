
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap_sham_reqctx {int flags; struct omap_sham_dev* dd; } ;
struct omap_sham_hmac_ctx {scalar_t__ opad; } ;
struct omap_sham_dev {TYPE_1__* pdata; int req; } ;
struct omap_sham_ctx {struct omap_sham_hmac_ctx* base; } ;
struct crypto_ahash {int dummy; } ;
struct ahash_request {int dummy; } ;
struct TYPE_2__ {int digest_size; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (struct omap_sham_dev*,int) ;
 struct omap_sham_reqctx* FUNC_2 (struct ahash_request*) ;
 struct omap_sham_ctx* FUNC_3 (struct crypto_ahash*) ;
 struct crypto_ahash* FUNC_4 (int ) ;
 int FUNC_5 (struct ahash_request*,int) ;
 int FUNC_6 (struct omap_sham_dev*,int ) ;
 int FUNC_7 (struct omap_sham_dev*,int ,int ) ;

__attribute__((used)) static void FUNC_8(struct ahash_request *VAR_1, int VAR_2)
{
 struct omap_sham_reqctx *VAR_3 = FUNC_2(VAR_1);
 struct omap_sham_dev *VAR_4 = VAR_3->dd;
 int VAR_5;

 if (VAR_3->flags & FUNC_0(VAR_0)) {
  struct crypto_ahash *VAR_6 = FUNC_4(VAR_4->req);
  struct omap_sham_ctx *VAR_7 = FUNC_3(VAR_6);
  struct omap_sham_hmac_ctx *VAR_8 = VAR_7->base;
  u32 *VAR_9 = (u32 *)VAR_8->opad;

  for (VAR_5 = 0; VAR_5 < VAR_4->pdata->digest_size / sizeof(u32); VAR_5++) {
   if (VAR_2)
    VAR_9[VAR_5] = FUNC_6(VAR_4,
      FUNC_1(VAR_4, VAR_5));
   else
    FUNC_7(VAR_4, FUNC_1(VAR_4, VAR_5),
      VAR_9[VAR_5]);
  }
 }

 FUNC_5(VAR_1, VAR_2);
}

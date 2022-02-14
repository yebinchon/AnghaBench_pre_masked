
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_sha_reqctx {int dummy; } ;
struct mtk_sha_hmac_ctx {int shash; } ;
struct mtk_sha_ctx {int flags; struct mtk_sha_hmac_ctx* base; } ;
struct mtk_cryp {int dummy; } ;
struct crypto_tfm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_2 ;
 int FUNC_2 (struct crypto_tfm*) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (char const*,int ,int ) ;
 struct mtk_sha_ctx* FUNC_5 (struct crypto_tfm*) ;
 struct mtk_cryp* FUNC_6 (struct mtk_sha_ctx*) ;
 int FUNC_7 (char*,char const*) ;

__attribute__((used)) static int FUNC_8(struct crypto_tfm *VAR_3,
    const char *VAR_4)
{
 struct mtk_sha_ctx *VAR_5 = FUNC_5(VAR_3);
 struct mtk_cryp *VAR_6 = ((void*)0);

 VAR_6 = FUNC_6(VAR_5);
 if (!VAR_6)
  return -VAR_1;

 FUNC_3(FUNC_2(VAR_3),
     sizeof(struct mtk_sha_reqctx));

 if (VAR_4) {
  struct mtk_sha_hmac_ctx *VAR_7 = VAR_5->base;

  VAR_5->flags |= VAR_2;
  VAR_7->shash = FUNC_4(VAR_4, 0,
     VAR_0);
  if (FUNC_0(VAR_7->shash)) {
   FUNC_7("base driver %s could not be loaded.\n",
          VAR_4);

   return FUNC_1(VAR_7->shash);
  }
 }
 return 0;
}

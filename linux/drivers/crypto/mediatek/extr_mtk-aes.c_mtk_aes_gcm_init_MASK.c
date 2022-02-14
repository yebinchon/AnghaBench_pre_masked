
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mtk_aes_reqctx {int dummy; } ;
struct TYPE_2__ {int start; } ;
struct mtk_aes_gcm_ctx {TYPE_1__ base; int ctr; } ;
struct crypto_aead {int dummy; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 struct mtk_aes_gcm_ctx* FUNC_2 (struct crypto_aead*) ;
 int FUNC_3 (struct crypto_aead*,int) ;
 int FUNC_4 (char*,int ,int ) ;
 int VAR_1 ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct crypto_aead *VAR_2)
{
 struct mtk_aes_gcm_ctx *VAR_3 = FUNC_2(VAR_2);

 VAR_3->ctr = FUNC_4("ctr(aes)", 0,
      VAR_0);
 if (FUNC_0(VAR_3->ctr)) {
  FUNC_5("Error allocating ctr(aes)\n");
  return FUNC_1(VAR_3->ctr);
 }

 FUNC_3(VAR_2, sizeof(struct mtk_aes_reqctx));
 VAR_3->base.start = VAR_1;
 return 0;
}

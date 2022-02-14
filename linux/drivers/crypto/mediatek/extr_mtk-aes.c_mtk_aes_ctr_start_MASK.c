
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cryp {int dummy; } ;
struct mtk_aes_reqctx {int dummy; } ;
struct mtk_aes_rec {int (* resume ) (struct mtk_cryp*,struct mtk_aes_rec*) ;scalar_t__ total; int areq; int ctx; } ;
struct mtk_aes_ctr_ctx {scalar_t__ offset; int iv; } ;
struct ablkcipher_request {int info; } ;


 int VAR_0 ;
 struct ablkcipher_request* FUNC_0 (int ) ;
 struct mtk_aes_reqctx* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (int ,int ,int ) ;
 struct mtk_aes_ctr_ctx* FUNC_3 (int ) ;
 int FUNC_4 (struct mtk_cryp*,struct mtk_aes_rec*) ;
 int FUNC_5 (struct mtk_aes_rec*,struct mtk_aes_reqctx*) ;

__attribute__((used)) static int FUNC_6(struct mtk_cryp *VAR_1, struct mtk_aes_rec *VAR_2)
{
 struct mtk_aes_ctr_ctx *VAR_3 = FUNC_3(VAR_2->ctx);
 struct ablkcipher_request *VAR_4 = FUNC_0(VAR_2->areq);
 struct mtk_aes_reqctx *VAR_5 = FUNC_1(VAR_4);

 FUNC_5(VAR_2, VAR_5);

 FUNC_2(VAR_3->iv, VAR_4->info, VAR_0);
 VAR_3->offset = 0;
 VAR_2->total = 0;
 VAR_2->resume = FUNC_4;

 return FUNC_4(VAR_1, VAR_2);
}

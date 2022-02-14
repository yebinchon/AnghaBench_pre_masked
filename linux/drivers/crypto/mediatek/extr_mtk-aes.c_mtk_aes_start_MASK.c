
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_cryp {int dummy; } ;
struct mtk_aes_reqctx {int dummy; } ;
struct mtk_aes_rec {int resume; int areq; } ;
struct ablkcipher_request {int nbytes; int dst; int src; } ;


 struct ablkcipher_request* FUNC_0 (int ) ;
 struct mtk_aes_reqctx* FUNC_1 (struct ablkcipher_request*) ;
 int FUNC_2 (struct mtk_cryp*,struct mtk_aes_rec*,int ,int ,int ) ;
 int FUNC_3 (struct mtk_aes_rec*,struct mtk_aes_reqctx*) ;
 int VAR_0 ;

__attribute__((used)) static int FUNC_4(struct mtk_cryp *VAR_1, struct mtk_aes_rec *VAR_2)
{
 struct ablkcipher_request *VAR_3 = FUNC_0(VAR_2->areq);
 struct mtk_aes_reqctx *VAR_4 = FUNC_1(VAR_3);

 FUNC_3(VAR_2, VAR_4);
 VAR_2->resume = VAR_0;

 return FUNC_2(VAR_1, VAR_2, VAR_3->src, VAR_3->dst, VAR_3->nbytes);
}

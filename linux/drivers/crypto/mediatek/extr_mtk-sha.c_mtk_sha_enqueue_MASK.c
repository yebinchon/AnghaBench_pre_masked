
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mtk_sha_reqctx {int op; } ;
struct mtk_sha_ctx {int id; int cryp; } ;
struct TYPE_2__ {int tfm; } ;
struct ahash_request {TYPE_1__ base; } ;


 struct mtk_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 struct mtk_sha_ctx* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_0, u32 VAR_1)
{
 struct mtk_sha_reqctx *VAR_2 = FUNC_0(VAR_0);
 struct mtk_sha_ctx *VAR_3 = FUNC_1(VAR_0->base.tfm);

 VAR_2->op = VAR_1;

 return FUNC_2(VAR_3->cryp, VAR_3->id, VAR_0);
}

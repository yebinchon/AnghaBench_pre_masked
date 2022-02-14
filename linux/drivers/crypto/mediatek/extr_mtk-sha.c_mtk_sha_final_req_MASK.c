
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_sha_reqctx {size_t bufcnt; } ;
struct mtk_sha_rec {int flags; int req; } ;
struct mtk_cryp {int dummy; } ;


 int VAR_0 ;
 struct mtk_sha_reqctx* FUNC_0 (int ) ;
 int FUNC_1 (struct mtk_cryp*,struct mtk_sha_rec*,struct mtk_sha_reqctx*,size_t) ;
 int FUNC_2 (struct mtk_sha_reqctx*,int ) ;

__attribute__((used)) static int FUNC_3(struct mtk_cryp *VAR_1,
        struct mtk_sha_rec *VAR_2)
{
 struct mtk_sha_reqctx *VAR_3 = FUNC_0(VAR_2->req);
 size_t VAR_4;

 FUNC_2(VAR_3, 0);

 VAR_2->flags |= VAR_0;
 VAR_4 = VAR_3->bufcnt;
 VAR_3->bufcnt = 0;

 return FUNC_1(VAR_1, VAR_2, VAR_3, VAR_4);
}

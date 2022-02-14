
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct mtk_sha_reqctx {int flags; size_t bufcnt; scalar_t__ total; } ;
struct mtk_sha_rec {int flags; int req; } ;
struct mtk_cryp {int dev; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mtk_sha_reqctx* FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,size_t) ;
 int FUNC_2 (struct mtk_sha_reqctx*) ;
 int FUNC_3 (struct mtk_cryp*,struct mtk_sha_rec*,struct mtk_sha_reqctx*,size_t) ;
 int FUNC_4 (struct mtk_sha_reqctx*,int ) ;

__attribute__((used)) static int FUNC_5(struct mtk_cryp *VAR_3,
          struct mtk_sha_rec *VAR_4)
{
 struct mtk_sha_reqctx *VAR_5 = FUNC_0(VAR_4->req);
 size_t VAR_6;
 u32 VAR_7;

 FUNC_2(VAR_5);

 VAR_7 = (VAR_5->flags & VAR_2) && !VAR_5->total;

 FUNC_1(VAR_3->dev, "slow: bufcnt: %zu\n", VAR_5->bufcnt);

 if (VAR_7) {
  VAR_4->flags |= VAR_1;
  FUNC_4(VAR_5, 0);
 }

 if (VAR_7 || (VAR_5->bufcnt == VAR_0 && VAR_5->total)) {
  VAR_6 = VAR_5->bufcnt;
  VAR_5->bufcnt = 0;

  return FUNC_3(VAR_3, VAR_4, VAR_5, VAR_6);
 }
 return 0;
}

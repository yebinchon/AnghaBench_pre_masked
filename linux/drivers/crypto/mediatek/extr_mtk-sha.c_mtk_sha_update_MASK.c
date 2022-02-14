
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_sha_reqctx {scalar_t__ total; scalar_t__ bufcnt; int flags; scalar_t__ offset; int sg; } ;
struct ahash_request {scalar_t__ nbytes; int src; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mtk_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct mtk_sha_reqctx*) ;
 int FUNC_2 (struct ahash_request*,int ) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_3)
{
 struct mtk_sha_reqctx *VAR_4 = FUNC_0(VAR_3);

 VAR_4->total = VAR_3->nbytes;
 VAR_4->sg = VAR_3->src;
 VAR_4->offset = 0;

 if ((VAR_4->bufcnt + VAR_4->total < VAR_0) &&
     !(VAR_4->flags & VAR_1))
  return FUNC_1(VAR_4);

 return FUNC_2(VAR_3, VAR_2);
}

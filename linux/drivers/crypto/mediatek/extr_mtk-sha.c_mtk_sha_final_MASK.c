
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_sha_reqctx {int flags; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct mtk_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*,int ) ;
 int FUNC_2 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_3(struct ahash_request *VAR_3)
{
 struct mtk_sha_reqctx *VAR_4 = FUNC_0(VAR_3);

 VAR_4->flags |= VAR_0;

 if (VAR_4->flags & VAR_1)
  return FUNC_2(VAR_3);

 return FUNC_1(VAR_3, VAR_2);
}

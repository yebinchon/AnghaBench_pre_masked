
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mtk_sha_reqctx {int flags; } ;
struct ahash_request {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct mtk_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*) ;
 int FUNC_2 (struct ahash_request*) ;
 int FUNC_3 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_4(struct ahash_request *VAR_4)
{
 struct mtk_sha_reqctx *VAR_5 = FUNC_0(VAR_4);
 int VAR_6, VAR_7;

 VAR_5->flags |= VAR_3;

 VAR_6 = FUNC_3(VAR_4);
 if (VAR_6 == -VAR_2 ||
     (VAR_6 == -VAR_1 && (FUNC_1(VAR_4) &
    VAR_0)))
  return VAR_6;




 VAR_7 = FUNC_2(VAR_4);

 return VAR_6 ?: VAR_7;
}

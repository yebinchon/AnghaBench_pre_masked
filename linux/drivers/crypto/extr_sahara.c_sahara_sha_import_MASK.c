
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sahara_sha_reqctx {int dummy; } ;
struct ahash_request {int dummy; } ;


 struct sahara_sha_reqctx* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct sahara_sha_reqctx*,void const*,int) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_0, const void *VAR_1)
{
 struct sahara_sha_reqctx *VAR_2 = FUNC_0(VAR_0);

 FUNC_1(VAR_2, VAR_1, sizeof(struct sahara_sha_reqctx));

 return 0;
}

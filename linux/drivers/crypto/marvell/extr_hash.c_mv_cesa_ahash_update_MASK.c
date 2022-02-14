
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_ahash_req {int len; } ;
struct ahash_request {scalar_t__ nbytes; } ;


 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_0)
{
 struct mv_cesa_ahash_req *VAR_1 = FUNC_0(VAR_0);

 VAR_1->len += VAR_0->nbytes;

 return FUNC_1(VAR_0);
}

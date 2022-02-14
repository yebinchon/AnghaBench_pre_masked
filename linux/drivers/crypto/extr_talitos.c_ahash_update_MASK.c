
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct talitos_ahash_req_ctx {scalar_t__ last; } ;
struct ahash_request {int nbytes; } ;


 int FUNC_0 (struct ahash_request*,int ) ;
 struct talitos_ahash_req_ctx* FUNC_1 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_2(struct ahash_request *VAR_0)
{
 struct talitos_ahash_req_ctx *VAR_1 = FUNC_1(VAR_0);

 VAR_1->last = 0;

 return FUNC_0(VAR_0, VAR_0->nbytes);
}

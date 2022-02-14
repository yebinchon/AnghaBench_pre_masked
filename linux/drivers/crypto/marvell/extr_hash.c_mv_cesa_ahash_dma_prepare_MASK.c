
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_req {int engine; } ;
struct mv_cesa_ahash_req {struct mv_cesa_req base; } ;
struct ahash_request {int dummy; } ;


 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct mv_cesa_req*,int ) ;

__attribute__((used)) static inline void FUNC_2(struct ahash_request *VAR_0)
{
 struct mv_cesa_ahash_req *VAR_1 = FUNC_0(VAR_0);
 struct mv_cesa_req *VAR_2 = &VAR_1->base;

 FUNC_1(VAR_2, VAR_2->engine);
}

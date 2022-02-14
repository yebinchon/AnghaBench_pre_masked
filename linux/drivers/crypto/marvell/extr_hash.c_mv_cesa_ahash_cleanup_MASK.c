
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mv_cesa_ahash_req {int base; } ;
struct ahash_request {int dummy; } ;


 scalar_t__ VAR_0 ;
 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (struct ahash_request*) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static inline void FUNC_3(struct ahash_request *VAR_1)
{
 struct mv_cesa_ahash_req *VAR_2 = FUNC_0(VAR_1);

 if (FUNC_2(&VAR_2->base) == VAR_0)
  FUNC_1(VAR_1);
}

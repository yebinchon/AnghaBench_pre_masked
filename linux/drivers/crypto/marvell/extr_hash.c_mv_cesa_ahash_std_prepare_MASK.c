
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mv_cesa_ahash_std_req {scalar_t__ offset; } ;
struct TYPE_2__ {struct mv_cesa_ahash_std_req std; } ;
struct mv_cesa_ahash_req {TYPE_1__ req; } ;
struct ahash_request {int dummy; } ;


 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;

__attribute__((used)) static void FUNC_1(struct ahash_request *VAR_0)
{
 struct mv_cesa_ahash_req *VAR_1 = FUNC_0(VAR_0);
 struct mv_cesa_ahash_std_req *VAR_2 = &VAR_1->req.std;

 VAR_2->offset = 0;
}

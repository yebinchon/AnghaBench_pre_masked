
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct mv_cesa_ahash_std_req {scalar_t__ offset; } ;
struct TYPE_2__ {struct mv_cesa_ahash_std_req std; } ;
struct mv_cesa_ahash_req {scalar_t__ cache_ptr; TYPE_1__ req; } ;
struct ahash_request {scalar_t__ nbytes; } ;


 int VAR_0 ;
 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;

__attribute__((used)) static int FUNC_1(struct ahash_request *VAR_1, u32 VAR_2)
{
 struct mv_cesa_ahash_req *VAR_3 = FUNC_0(VAR_1);
 struct mv_cesa_ahash_std_req *VAR_4 = &VAR_3->req.std;

 if (VAR_4->offset < (VAR_1->nbytes - VAR_3->cache_ptr))
  return -VAR_0;

 return 0;
}

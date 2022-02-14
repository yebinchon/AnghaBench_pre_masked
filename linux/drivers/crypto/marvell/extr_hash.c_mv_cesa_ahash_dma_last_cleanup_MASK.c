
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int dma; } ;
struct mv_cesa_ahash_req {TYPE_1__ req; } ;
struct ahash_request {int dummy; } ;


 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static inline void FUNC_2(struct ahash_request *VAR_0)
{
 struct mv_cesa_ahash_req *VAR_1 = FUNC_0(VAR_0);

 FUNC_1(&VAR_1->req.dma);
}

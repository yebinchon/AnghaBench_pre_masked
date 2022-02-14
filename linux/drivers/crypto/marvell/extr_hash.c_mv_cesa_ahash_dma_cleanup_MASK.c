
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int dma; } ;
struct mv_cesa_ahash_req {int base; TYPE_1__ req; int src_nents; } ;
struct ahash_request {int src; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 struct mv_cesa_ahash_req* FUNC_0 (struct ahash_request*) ;
 TYPE_2__* VAR_1 ;
 int FUNC_1 (int ,int ,int ,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static inline void FUNC_4(struct ahash_request *VAR_2)
{
 struct mv_cesa_ahash_req *VAR_3 = FUNC_0(VAR_2);

 FUNC_1(VAR_1->dev, VAR_2->src, VAR_3->src_nents, VAR_0);
 FUNC_2(&VAR_3->req.dma);
 FUNC_3(&VAR_3->base);
}

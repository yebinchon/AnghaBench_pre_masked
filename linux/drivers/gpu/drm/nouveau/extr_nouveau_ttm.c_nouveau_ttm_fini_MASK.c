
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_device {TYPE_1__* func; } ;
struct TYPE_6__ {scalar_t__ mtrr; int bdev; } ;
struct TYPE_5__ {int device; } ;
struct nouveau_drm {TYPE_3__ ttm; TYPE_2__ client; } ;
struct TYPE_4__ {int (* resource_size ) (struct nvkm_device*,int) ;int (* resource_addr ) (struct nvkm_device*,int) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 struct nvkm_device* FUNC_2 (int *) ;
 int FUNC_3 (struct nvkm_device*,int) ;
 int FUNC_4 (struct nvkm_device*,int) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;

void
FUNC_7(struct nouveau_drm *VAR_2)
{
 struct nvkm_device *VAR_3 = FUNC_2(&VAR_2->client.device);

 FUNC_5(&VAR_2->ttm.bdev, VAR_1);
 FUNC_5(&VAR_2->ttm.bdev, VAR_0);

 FUNC_6(&VAR_2->ttm.bdev);

 FUNC_1(VAR_2->ttm.mtrr);
 VAR_2->ttm.mtrr = 0;
 FUNC_0(VAR_3->func->resource_addr(VAR_3, 1),
    VAR_3->func->resource_size(VAR_3, 1));

}

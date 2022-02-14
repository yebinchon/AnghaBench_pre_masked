
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_16__ TYPE_8__ ;
typedef struct TYPE_15__ TYPE_7__ ;
typedef struct TYPE_14__ TYPE_6__ ;
typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct TYPE_12__ {scalar_t__ mem_type; scalar_t__ start; scalar_t__ num_pages; } ;
struct ttm_buffer_object {TYPE_4__ mem; int bdev; } ;
struct nvkm_device {TYPE_1__* func; } ;
struct TYPE_10__ {scalar_t__ family; } ;
struct TYPE_16__ {TYPE_2__ info; } ;
struct TYPE_11__ {TYPE_8__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct TYPE_14__ {int num_placement; int num_busy_placement; } ;
struct nouveau_bo {TYPE_7__* busy_placements; TYPE_6__ placement; TYPE_5__* placements; int kind; } ;
struct TYPE_15__ {scalar_t__ lpfn; scalar_t__ fpfn; } ;
struct TYPE_13__ {scalar_t__ lpfn; scalar_t__ fpfn; } ;
struct TYPE_9__ {scalar_t__ (* resource_size ) (struct nvkm_device*,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 struct nouveau_drm* FUNC_0 (int ) ;
 struct nouveau_bo* FUNC_1 (struct ttm_buffer_object*) ;
 int FUNC_2 (struct nouveau_bo*,int ,int ) ;
 int FUNC_3 (struct nouveau_bo*,int,int) ;
 struct nvkm_device* FUNC_4 (TYPE_8__*) ;
 scalar_t__ FUNC_5 (struct nvkm_device*,int) ;

__attribute__((used)) static int
FUNC_6(struct ttm_buffer_object *VAR_6)
{
 struct nouveau_drm *VAR_7 = FUNC_0(VAR_6->bdev);
 struct nouveau_bo *VAR_8 = FUNC_1(VAR_6);
 struct nvkm_device *VAR_9 = FUNC_4(&VAR_7->client.device);
 u32 VAR_10 = VAR_9->func->resource_size(VAR_9, 1) >> VAR_1;
 int VAR_11, VAR_12;




 if (VAR_6->mem.mem_type != VAR_5) {
  if (VAR_7->client.device.info.family < VAR_0 ||
      !VAR_8->kind)
   return 0;

  if (VAR_6->mem.mem_type == VAR_3) {
   FUNC_2(VAR_8, VAR_4, 0);

   VAR_12 = FUNC_3(VAR_8, 0, 0);
   if (VAR_12)
    return VAR_12;
  }
  return 0;
 }


 if (VAR_7->client.device.info.family >= VAR_0 ||
     VAR_6->mem.start + VAR_6->mem.num_pages < VAR_10)
  return 0;

 for (VAR_11 = 0; VAR_11 < VAR_8->placement.num_placement; ++VAR_11) {
  VAR_8->placements[VAR_11].fpfn = 0;
  VAR_8->placements[VAR_11].lpfn = VAR_10;
 }

 for (VAR_11 = 0; VAR_11 < VAR_8->placement.num_busy_placement; ++VAR_11) {
  VAR_8->busy_placements[VAR_11].fpfn = 0;
  VAR_8->busy_placements[VAR_11].lpfn = VAR_10;
 }

 FUNC_2(VAR_8, VAR_2, 0);
 return FUNC_3(VAR_8, 0, 0);
}

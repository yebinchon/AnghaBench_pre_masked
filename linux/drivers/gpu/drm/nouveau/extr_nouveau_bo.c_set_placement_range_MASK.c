
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


typedef int uint32_t ;
typedef int u32 ;
struct TYPE_9__ {int ram_size; scalar_t__ family; } ;
struct TYPE_10__ {TYPE_1__ info; } ;
struct TYPE_11__ {TYPE_2__ device; } ;
struct nouveau_drm {TYPE_3__ client; } ;
struct TYPE_15__ {unsigned int num_placement; unsigned int num_busy_placement; } ;
struct TYPE_12__ {int num_pages; } ;
struct TYPE_13__ {TYPE_4__ mem; int bdev; } ;
struct nouveau_bo {TYPE_8__* busy_placements; TYPE_7__ placement; TYPE_6__* placements; scalar_t__ zeta; TYPE_5__ bo; scalar_t__ mode; } ;
struct TYPE_16__ {unsigned int fpfn; unsigned int lpfn; } ;
struct TYPE_14__ {unsigned int fpfn; unsigned int lpfn; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct nouveau_drm* FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(struct nouveau_bo *VAR_3, uint32_t VAR_4)
{
 struct nouveau_drm *VAR_5 = FUNC_0(VAR_3->bo.bdev);
 u32 VAR_6 = VAR_5->client.device.info.ram_size >> VAR_1;
 unsigned VAR_7, VAR_8, VAR_9;

 if (VAR_5->client.device.info.family == VAR_0 &&
     VAR_3->mode && (VAR_4 & VAR_2) &&
     VAR_3->bo.mem.num_pages < VAR_6 / 4) {






  if (VAR_3->zeta) {
   VAR_8 = VAR_6 / 2;
   VAR_9 = ~0;
  } else {
   VAR_8 = 0;
   VAR_9 = VAR_6 / 2;
  }
  for (VAR_7 = 0; VAR_7 < VAR_3->placement.num_placement; ++VAR_7) {
   VAR_3->placements[VAR_7].fpfn = VAR_8;
   VAR_3->placements[VAR_7].lpfn = VAR_9;
  }
  for (VAR_7 = 0; VAR_7 < VAR_3->placement.num_busy_placement; ++VAR_7) {
   VAR_3->busy_placements[VAR_7].fpfn = VAR_8;
   VAR_3->busy_placements[VAR_7].lpfn = VAR_9;
  }
 }
}

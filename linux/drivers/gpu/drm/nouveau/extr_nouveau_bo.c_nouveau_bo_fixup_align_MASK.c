
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct TYPE_6__ {scalar_t__ family; int chipset; } ;
struct nvif_device {TYPE_3__ info; } ;
struct TYPE_5__ {struct nvif_device device; } ;
struct nouveau_drm {TYPE_2__ client; } ;
struct TYPE_4__ {int bdev; } ;
struct nouveau_bo {int mode; int page; TYPE_1__ bo; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int,int) ;
 struct nouveau_drm* FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

__attribute__((used)) static void
FUNC_3(struct nouveau_bo *VAR_2, u32 VAR_3,
         int *VAR_4, u64 *VAR_5)
{
 struct nouveau_drm *VAR_6 = FUNC_1(VAR_2->bo.bdev);
 struct nvif_device *VAR_7 = &VAR_6->client.device;

 if (VAR_7->info.family < VAR_0) {
  if (VAR_2->mode) {
   if (VAR_7->info.chipset >= 0x40) {
    *VAR_4 = 65536;
    *VAR_5 = FUNC_2(*VAR_5, 64 * VAR_2->mode);

   } else if (VAR_7->info.chipset >= 0x30) {
    *VAR_4 = 32768;
    *VAR_5 = FUNC_2(*VAR_5, 64 * VAR_2->mode);

   } else if (VAR_7->info.chipset >= 0x20) {
    *VAR_4 = 16384;
    *VAR_5 = FUNC_2(*VAR_5, 64 * VAR_2->mode);

   } else if (VAR_7->info.chipset >= 0x10) {
    *VAR_4 = 16384;
    *VAR_5 = FUNC_2(*VAR_5, 32 * VAR_2->mode);
   }
  }
 } else {
  *VAR_5 = FUNC_2(*VAR_5, (1 << VAR_2->page));
  *VAR_4 = FUNC_0((1 << VAR_2->page), *VAR_4);
 }

 *VAR_5 = FUNC_2(*VAR_5, VAR_1);
}

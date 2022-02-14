
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


typedef int u32 ;
struct TYPE_14__ {int size; int cma; int base; scalar_t__ bridge; } ;
struct nvkm_pci {TYPE_1__ agp; } ;
struct nvkm_device {TYPE_4__* func; struct nvkm_pci* pci; } ;
struct nvif_mmu {int dmabits; } ;
struct TYPE_12__ {int vram_available; int gart_available; } ;
struct TYPE_22__ {int type_vram; int bdev; int mtrr; } ;
struct TYPE_21__ {int size; scalar_t__ bridge; int cma; int base; } ;
struct TYPE_18__ {int limit; } ;
struct TYPE_19__ {TYPE_5__ vmm; } ;
struct TYPE_16__ {scalar_t__ family; int chipset; scalar_t__ platform; int ram_user; } ;
struct TYPE_13__ {TYPE_3__ info; } ;
struct TYPE_20__ {TYPE_6__ vmm; TYPE_11__ device; struct nvif_mmu mmu; } ;
struct nouveau_drm {TYPE_10__ gem; TYPE_9__ ttm; TYPE_8__ agp; TYPE_7__ client; struct drm_device* dev; } ;
struct drm_device {TYPE_2__* anon_inode; } ;
struct TYPE_17__ {int (* resource_size ) (struct nvkm_device*,int) ;int (* resource_addr ) (struct nvkm_device*,int) ;} ;
struct TYPE_15__ {int i_mapping; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct nouveau_drm*,char*,int) ;
 int FUNC_1 (struct nouveau_drm*,char*,int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_11 ;
 int FUNC_4 (struct nouveau_drm*,int) ;
 int FUNC_5 (struct nvif_mmu*,int) ;
 struct nvkm_device* FUNC_6 (TYPE_11__*) ;
 int FUNC_7 (struct nvkm_device*,int) ;
 int FUNC_8 (struct nvkm_device*,int) ;
 int FUNC_9 (struct nvkm_device*,int) ;
 int FUNC_10 (struct nvkm_device*,int) ;
 int FUNC_11 (int *,int *,int ,int) ;
 int FUNC_12 (int *,int ,int) ;

int
FUNC_13(struct nouveau_drm *VAR_12)
{
 struct nvkm_device *VAR_13 = FUNC_6(&VAR_12->client.device);
 struct nvkm_pci *VAR_14 = VAR_13->pci;
 struct nvif_mmu *VAR_15 = &VAR_12->client.mmu;
 struct drm_device *VAR_16 = VAR_12->dev;
 int VAR_17, VAR_18;

 VAR_18 = FUNC_4(VAR_12, 0);
 if (VAR_18)
  return VAR_18;

 if (VAR_12->client.device.info.family >= VAR_7 &&
     VAR_12->client.device.info.chipset != 0x50) {
  VAR_18 = FUNC_4(VAR_12, VAR_3);
  if (VAR_18)
   return VAR_18;
 }

 if (VAR_12->client.device.info.platform != VAR_6 &&
     VAR_12->client.device.info.family >= VAR_7) {
  VAR_17 = FUNC_5(VAR_15, VAR_5 | VAR_4 |
        VAR_3 |
        VAR_1 |
        VAR_2);
  if (VAR_17 < 0)
   return -VAR_0;

  VAR_12->ttm.type_vram = VAR_17;
 } else {
  VAR_12->ttm.type_vram = -1;
 }

 if (VAR_14 && VAR_14->agp.bridge) {
  VAR_12->agp.bridge = VAR_14->agp.bridge;
  VAR_12->agp.base = VAR_14->agp.base;
  VAR_12->agp.size = VAR_14->agp.size;
  VAR_12->agp.cma = VAR_14->agp.cma;
 }

 VAR_18 = FUNC_11(&VAR_12->ttm.bdev,
      &VAR_11,
      VAR_16->anon_inode->i_mapping,
      VAR_12->client.mmu.dmabits <= 32 ? 1 : 0);
 if (VAR_18) {
  FUNC_0(VAR_12, "error initialising bo driver, %d\n", VAR_18);
  return VAR_18;
 }


 VAR_12->gem.vram_available = VAR_12->client.device.info.ram_user;

 FUNC_2(VAR_13->func->resource_addr(VAR_13, 1),
       VAR_13->func->resource_size(VAR_13, 1));

 VAR_18 = FUNC_12(&VAR_12->ttm.bdev, VAR_10,
         VAR_12->gem.vram_available >> VAR_8);
 if (VAR_18) {
  FUNC_0(VAR_12, "VRAM mm init failed, %d\n", VAR_18);
  return VAR_18;
 }

 VAR_12->ttm.mtrr = FUNC_3(VAR_13->func->resource_addr(VAR_13, 1),
      VAR_13->func->resource_size(VAR_13, 1));


 if (!VAR_12->agp.bridge) {
  VAR_12->gem.gart_available = VAR_12->client.vmm.vmm.limit;
 } else {
  VAR_12->gem.gart_available = VAR_12->agp.size;
 }

 VAR_18 = FUNC_12(&VAR_12->ttm.bdev, VAR_9,
         VAR_12->gem.gart_available >> VAR_8);
 if (VAR_18) {
  FUNC_0(VAR_12, "GART mm init failed, %d\n", VAR_18);
  return VAR_18;
 }

 FUNC_1(VAR_12, "VRAM: %d MiB\n", (u32)(VAR_12->gem.vram_available >> 20));
 FUNC_1(VAR_12, "GART: %d MiB\n", (u32)(VAR_12->gem.gart_available >> 20));
 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_ram_func {int dummy; } ;
struct nvkm_ram {int part_mask; int ranks; int vram; int parts; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_fb {TYPE_1__ subdev; } ;
struct nvkm_device {struct nvkm_bios* bios; } ;
struct nvkm_bios {int dummy; } ;
typedef enum nvkm_ram_type { ____Placeholder_nvkm_ram_type } nvkm_ram_type ;


 int VAR_0 ;
 int const VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int) ;
 int const FUNC_1 (struct nvkm_ram*) ;
 int FUNC_2 (struct nvkm_bios*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int const,int,int const) ;
 int FUNC_5 (struct nvkm_ram_func const*,struct nvkm_fb*,int,int,struct nvkm_ram*) ;
 int FUNC_6 (struct nvkm_device*,int) ;

int
FUNC_7(const struct nvkm_ram_func *VAR_9,
       struct nvkm_fb *VAR_10, struct nvkm_ram *VAR_11)
{
 struct nvkm_device *VAR_12 = VAR_10->subdev.device;
 struct nvkm_bios *VAR_13 = VAR_12->bios;
 const u32 VAR_14 = ( 256 * 1024);
 const u32 VAR_15 = (1024 * 1024);
 u64 VAR_16 = FUNC_6(VAR_12, 0x10020c);
 enum nvkm_ram_type VAR_17 = VAR_8;
 int VAR_18;

 switch (FUNC_6(VAR_12, 0x100714) & 0x00000007) {
 case 0: VAR_17 = VAR_2; break;
 case 1:
  if (FUNC_2(VAR_13) == VAR_4)
   VAR_17 = VAR_4;
  else
   VAR_17 = VAR_3;
  break;
 case 2: VAR_17 = VAR_5; break;
 case 3: VAR_17 = VAR_6; break;
 case 4: VAR_17 = VAR_7; break;
 default:
  break;
 }

 VAR_16 = (VAR_16 & 0x000000ff) << 32 | (VAR_16 & 0xffffff00);

 VAR_18 = FUNC_5(VAR_9, VAR_10, VAR_17, VAR_16, VAR_11);
 if (VAR_18)
  return VAR_18;

 VAR_11->part_mask = (FUNC_6(VAR_12, 0x001540) & 0x00ff0000) >> 16;
 VAR_11->parts = FUNC_0(VAR_11->part_mask);
 VAR_11->ranks = (FUNC_6(VAR_12, 0x100200) & 0x4) ? 2 : 1;
 FUNC_3(&VAR_11->vram);

 return FUNC_4(&VAR_11->vram, VAR_0,
       VAR_14 >> VAR_1,
       (VAR_16 - VAR_14 - VAR_15) >> VAR_1,
       FUNC_1(VAR_11) >> VAR_1);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_ram {int parts; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_fb {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;
typedef enum nvkm_ram_type { ____Placeholder_nvkm_ram_type } nvkm_ram_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct nvkm_fb*,int,int,struct nvkm_ram**) ;
 int FUNC_1 (struct nvkm_device*,int) ;

int
FUNC_2(struct nvkm_fb *VAR_4, struct nvkm_ram **VAR_5)
{
 struct nvkm_device *VAR_6 = VAR_4->subdev.device;
 u32 VAR_7 = FUNC_1(VAR_6, 0x10020c) & 0xff000000;
 u32 VAR_8 = FUNC_1(VAR_6, 0x100474);
 enum nvkm_ram_type VAR_9 = VAR_3;
 int VAR_10;

 if (VAR_8 & 0x00000004)
  VAR_9 = VAR_2;
 if (VAR_8 & 0x00000002)
  VAR_9 = VAR_1;
 if (VAR_8 & 0x00000001)
  VAR_9 = VAR_0;

 VAR_10 = FUNC_0(VAR_4, VAR_9, VAR_7, VAR_5);
 if (VAR_10)
  return VAR_10;

 (*VAR_5)->parts = (FUNC_1(VAR_6, 0x100200) & 0x00000003) + 1;
 return 0;
}

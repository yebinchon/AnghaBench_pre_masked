
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_ram {int dummy; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_fb {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;
typedef enum nvkm_ram_type { ____Placeholder_nvkm_ram_type } nvkm_ram_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,struct nvkm_fb*,int,int,struct nvkm_ram**) ;
 int FUNC_1 (struct nvkm_device*,int) ;

int
FUNC_2(struct nvkm_fb *VAR_3, struct nvkm_ram **VAR_4)
{
 struct nvkm_device *VAR_5 = VAR_3->subdev.device;
 u32 VAR_6 = FUNC_1(VAR_5, 0x10020c) & 0xff000000;
 u32 VAR_7 = FUNC_1(VAR_5, 0x100200);
 enum nvkm_ram_type VAR_8;

 if (VAR_7 & 0x00000001)
  VAR_8 = VAR_0;
 else
  VAR_8 = VAR_1;

 return FUNC_0(&VAR_2, VAR_3, VAR_8, VAR_6, VAR_4);
}

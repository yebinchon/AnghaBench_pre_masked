
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
 int VAR_4 ;
 int FUNC_0 (struct nvkm_fb*,int,int,struct nvkm_ram**) ;
 int FUNC_1 (struct nvkm_device*,int) ;

int
FUNC_2(struct nvkm_fb *VAR_5, struct nvkm_ram **VAR_6)
{
 struct nvkm_device *VAR_7 = VAR_5->subdev.device;
 u32 VAR_8 = FUNC_1(VAR_7, 0x001218);
 u32 VAR_9 = FUNC_1(VAR_7, 0x10020c) & 0xff000000;
 enum nvkm_ram_type VAR_10 = VAR_4;
 int VAR_11;

 switch (VAR_8 & 0x00000300) {
 case 0x00000000: VAR_10 = VAR_3; break;
 case 0x00000100: VAR_10 = VAR_0 ; break;
 case 0x00000200: VAR_10 = VAR_2; break;
 case 0x00000300: VAR_10 = VAR_1 ; break;
 }

 VAR_11 = FUNC_0(VAR_5, VAR_10, VAR_9, VAR_6);
 if (VAR_11)
  return VAR_11;

 (*VAR_6)->parts = (FUNC_1(VAR_7, 0x100200) & 0x00000003) + 1;
 return 0;
}

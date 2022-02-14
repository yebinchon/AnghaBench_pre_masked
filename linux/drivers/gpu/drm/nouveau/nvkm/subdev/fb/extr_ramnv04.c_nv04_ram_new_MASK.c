
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct nvkm_ram {int dummy; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_fb {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;
typedef enum nvkm_ram_type { ____Placeholder_nvkm_ram_type } nvkm_ram_type ;


 int VAR_0 ;
 int VAR_1 ;




 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,struct nvkm_fb*,int,int,struct nvkm_ram**) ;
 int FUNC_1 (struct nvkm_device*,int ) ;

int
FUNC_2(struct nvkm_fb *VAR_5, struct nvkm_ram **VAR_6)
{
 struct nvkm_device *VAR_7 = VAR_5->subdev.device;
 u32 VAR_8 = FUNC_1(VAR_7, VAR_0);
 u64 VAR_9;
 enum nvkm_ram_type VAR_10;

 if (VAR_8 & 0x00000100) {
  VAR_9 = ((VAR_8 >> 12) & 0xf) * 2 + 2;
  VAR_9 *= 1024 * 1024;
 } else {
  switch (VAR_8 & VAR_1) {
  case 130:
   VAR_9 = 32 * 1024 * 1024;
   break;
  case 131:
   VAR_9 = 16 * 1024 * 1024;
   break;
  case 128:
   VAR_9 = 8 * 1024 * 1024;
   break;
  case 129:
   VAR_9 = 4 * 1024 * 1024;
   break;
  }
 }

 if ((VAR_8 & 0x00000038) <= 0x10)
  VAR_10 = VAR_3;
 else
  VAR_10 = VAR_2;

 return FUNC_0(&VAR_4, VAR_5, VAR_10, VAR_9, VAR_6);
}

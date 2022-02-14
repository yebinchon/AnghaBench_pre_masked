
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


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,struct nvkm_fb*,int ,int,struct nvkm_ram**) ;
 int FUNC_1 (struct nvkm_device*,int) ;

int
FUNC_2(struct nvkm_fb *VAR_2, struct nvkm_ram **VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_2->subdev.device;
 u32 VAR_5 = FUNC_1(VAR_4, 0x10020c) & 0xff000000;
 return FUNC_0(&VAR_1, VAR_2, VAR_0,
        VAR_5, VAR_3);
}

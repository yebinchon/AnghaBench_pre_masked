
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_mc {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int) ;

u32
FUNC_1(struct nvkm_mc *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 u32 VAR_2 = FUNC_0(VAR_1, 0x000100);
 u32 VAR_3 = FUNC_0(VAR_1, 0x000104);
 return VAR_2 | VAR_3;
}

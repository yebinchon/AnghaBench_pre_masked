
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_therm {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_device*,int) ;

int
FUNC_1(struct nvkm_therm *VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_1->subdev.device;
 u32 VAR_3 = FUNC_0(VAR_2, 0x00e728) & 0x0000ffff;
 u32 VAR_4 = FUNC_0(VAR_2, 0x00e720);
 if (VAR_4 & 0x00000001)
  return VAR_3 * 60 / 2;
 return -VAR_0;
}

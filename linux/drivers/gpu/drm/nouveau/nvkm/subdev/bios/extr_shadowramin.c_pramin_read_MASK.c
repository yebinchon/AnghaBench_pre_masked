
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_device {int dummy; } ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_bios {int * data; TYPE_1__ subdev; } ;


 int FUNC_0 (struct nvkm_device*,int) ;

__attribute__((used)) static u32
FUNC_1(void *VAR_0, u32 VAR_1, u32 VAR_2, struct nvkm_bios *VAR_3)
{
 struct nvkm_device *VAR_4 = VAR_3->subdev.device;
 u32 VAR_5;
 if (VAR_1 + VAR_2 <= 0x00100000) {
  for (VAR_5 = VAR_1; VAR_5 < VAR_1 + VAR_2; VAR_5 += 4)
   *(u32 *)&VAR_3->data[VAR_5] = FUNC_0(VAR_4, 0x700000 + VAR_5);
  return VAR_2;
 }
 return 0;
}

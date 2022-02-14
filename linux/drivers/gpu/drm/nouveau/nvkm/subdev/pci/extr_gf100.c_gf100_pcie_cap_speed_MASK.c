
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_pci {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int) ;

int
FUNC_1(struct nvkm_pci *VAR_0)
{
 struct nvkm_device *VAR_1 = VAR_0->subdev.device;
 u8 VAR_2 = FUNC_0(VAR_1, 0x02241c) & 0x80;
 if (VAR_2 == 0x80)
  return 1;
 return 0;
}

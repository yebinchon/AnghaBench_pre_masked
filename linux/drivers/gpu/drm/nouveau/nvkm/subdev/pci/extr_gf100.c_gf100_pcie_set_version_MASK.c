
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_pci {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;

void
FUNC_1(struct nvkm_pci *VAR_0, u8 VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->subdev.device;
 FUNC_0(VAR_2, 0x02241c, 0x1, VAR_1 > 1 ? 1 : 0);
}

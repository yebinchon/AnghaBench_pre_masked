
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_pci {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,int,int,int) ;

__attribute__((used)) static void
FUNC_1(struct nvkm_pci *VAR_0, bool VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->subdev.device;
 FUNC_0(VAR_2, 0x00154c, 0x80, VAR_1 ? 0x80 : 0x0);
}

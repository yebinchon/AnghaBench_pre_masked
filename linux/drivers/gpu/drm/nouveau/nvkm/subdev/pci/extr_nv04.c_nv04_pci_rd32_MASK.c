
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_2__ {struct nvkm_device* device; } ;
struct nvkm_pci {TYPE_1__ subdev; } ;
struct nvkm_device {int dummy; } ;


 int FUNC_0 (struct nvkm_device*,scalar_t__) ;

__attribute__((used)) static u32
FUNC_1(struct nvkm_pci *VAR_0, u16 VAR_1)
{
 struct nvkm_device *VAR_2 = VAR_0->subdev.device;
 return FUNC_0(VAR_2, 0x001800 + VAR_1);
}

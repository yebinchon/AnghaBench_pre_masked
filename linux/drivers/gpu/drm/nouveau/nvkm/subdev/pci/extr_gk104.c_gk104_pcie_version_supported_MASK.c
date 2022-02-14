
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int device; } ;
struct nvkm_pci {TYPE_1__ subdev; } ;


 int FUNC_0 (int ,int) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_pci *VAR_0)
{
 return (FUNC_0(VAR_0->subdev.device, 0x8c1c0) & 0x4) == 0x4 ? 2 : 1;
}

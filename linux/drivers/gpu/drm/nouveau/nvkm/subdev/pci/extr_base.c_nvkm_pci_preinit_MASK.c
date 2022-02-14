
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct TYPE_2__ {scalar_t__ bridge; } ;
struct nvkm_pci {TYPE_1__ agp; } ;


 int FUNC_0 (struct nvkm_pci*) ;
 struct nvkm_pci* FUNC_1 (struct nvkm_subdev*) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_subdev *VAR_0)
{
 struct nvkm_pci *VAR_1 = FUNC_1(VAR_0);
 if (VAR_1->agp.bridge)
  FUNC_0(VAR_1);
 return 0;
}

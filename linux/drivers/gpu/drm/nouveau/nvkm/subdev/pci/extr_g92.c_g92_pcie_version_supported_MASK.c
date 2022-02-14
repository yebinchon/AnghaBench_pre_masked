
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_pci {int dummy; } ;


 int FUNC_0 (struct nvkm_pci*,int) ;

int
FUNC_1(struct nvkm_pci *VAR_0)
{
 if ((FUNC_0(VAR_0, 0x460) & 0x200) == 0x200)
  return 2;
 return 1;
}

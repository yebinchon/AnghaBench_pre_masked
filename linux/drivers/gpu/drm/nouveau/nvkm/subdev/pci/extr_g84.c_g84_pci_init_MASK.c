
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_pci {int pdev; } ;


 int FUNC_0 (struct nvkm_pci*,int,int,int) ;
 int FUNC_1 (struct nvkm_pci*,int) ;
 int FUNC_2 (int ) ;

void
FUNC_3(struct nvkm_pci *VAR_0)
{

 if (!FUNC_2(VAR_0->pdev))
  return;
 if (FUNC_1(VAR_0, 0x007c) & 0x00000020)
  FUNC_0(VAR_0, 0x0080, 0x00000100, 0x00000100);
 else
  FUNC_0(VAR_0, 0x041c, 0x00000060, 0x00000000);
}

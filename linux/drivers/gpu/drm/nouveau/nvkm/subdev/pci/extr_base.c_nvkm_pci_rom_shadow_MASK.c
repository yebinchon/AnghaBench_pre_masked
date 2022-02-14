
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct nvkm_pci {int dummy; } ;


 int FUNC_0 (struct nvkm_pci*,int) ;
 int FUNC_1 (struct nvkm_pci*,int,int) ;

void
FUNC_2(struct nvkm_pci *VAR_0, bool VAR_1)
{
 u32 VAR_2 = FUNC_0(VAR_0, 0x0050);
 if (VAR_1)
  VAR_2 |= 0x00000001;
 else
  VAR_2 &= ~0x00000001;
 FUNC_1(VAR_0, 0x0050, VAR_2);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct nvkm_pci {TYPE_1__* func; } ;
struct TYPE_2__ {int (* rd32 ) (struct nvkm_pci*,int ) ;int (* wr32 ) (struct nvkm_pci*,int ,int) ;} ;


 int FUNC_0 (struct nvkm_pci*,int ) ;
 int FUNC_1 (struct nvkm_pci*,int ,int) ;

u32
FUNC_2(struct nvkm_pci *VAR_0, u16 VAR_1, u32 VAR_2, u32 VAR_3)
{
 u32 VAR_4 = VAR_0->func->rd32(VAR_0, VAR_1);
 VAR_0->func->wr32(VAR_0, VAR_1, (VAR_4 & ~VAR_2) | VAR_3);
 return VAR_4;
}

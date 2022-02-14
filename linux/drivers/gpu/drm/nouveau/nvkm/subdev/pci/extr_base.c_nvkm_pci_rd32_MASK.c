
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct nvkm_pci {TYPE_1__* func; } ;
struct TYPE_2__ {int (* rd32 ) (struct nvkm_pci*,int ) ;} ;


 int FUNC_0 (struct nvkm_pci*,int ) ;

u32
FUNC_1(struct nvkm_pci *VAR_0, u16 VAR_1)
{
 return VAR_0->func->rd32(VAR_0, VAR_1);
}

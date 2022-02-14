
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct nvkm_pci {TYPE_1__* func; } ;
struct TYPE_2__ {int (* wr08 ) (struct nvkm_pci*,int ,int ) ;} ;


 int FUNC_0 (struct nvkm_pci*,int ,int ) ;

void
FUNC_1(struct nvkm_pci *VAR_0, u16 VAR_1, u8 VAR_2)
{
 VAR_0->func->wr08(VAR_0, VAR_1, VAR_2);
}

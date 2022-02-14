
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_pci {TYPE_2__* func; } ;
struct TYPE_3__ {int (* version_supported ) (struct nvkm_pci*) ;} ;
struct TYPE_4__ {TYPE_1__ pcie; } ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_pci*) ;

__attribute__((used)) static int
FUNC_1(struct nvkm_pci *VAR_1)
{
 if (!VAR_1->func->pcie.version_supported)
  return -VAR_0;

 return VAR_1->func->pcie.version_supported(VAR_1);
}

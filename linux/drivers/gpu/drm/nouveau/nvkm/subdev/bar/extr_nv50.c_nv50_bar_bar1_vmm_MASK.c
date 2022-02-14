
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_vmm {int dummy; } ;
struct nvkm_bar {int dummy; } ;
struct TYPE_2__ {struct nvkm_vmm* bar1_vmm; } ;


 TYPE_1__* FUNC_0 (struct nvkm_bar*) ;

struct nvkm_vmm *
FUNC_1(struct nvkm_bar *VAR_0)
{
 return FUNC_0(VAR_0)->bar1_vmm;
}

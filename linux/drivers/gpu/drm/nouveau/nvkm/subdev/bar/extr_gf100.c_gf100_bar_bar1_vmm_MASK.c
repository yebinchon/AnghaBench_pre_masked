
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_vmm {int dummy; } ;
struct nvkm_bar {int dummy; } ;
struct TYPE_4__ {TYPE_1__* bar; } ;
struct TYPE_3__ {struct nvkm_vmm* vmm; } ;


 TYPE_2__* FUNC_0 (struct nvkm_bar*) ;

struct nvkm_vmm *
FUNC_1(struct nvkm_bar *VAR_0)
{
 return FUNC_0(VAR_0)->bar[1].vmm;
}

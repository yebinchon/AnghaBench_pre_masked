
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_vmm {int dummy; } ;
struct nvkm_device {struct nvkm_bar* bar; } ;
struct nvkm_bar {TYPE_2__* func; scalar_t__ bar2; } ;
struct TYPE_3__ {struct nvkm_vmm* (* vmm ) (struct nvkm_bar*) ;} ;
struct TYPE_4__ {TYPE_1__ bar2; } ;


 struct nvkm_vmm* FUNC_0 (struct nvkm_bar*) ;

struct nvkm_vmm *
FUNC_1(struct nvkm_device *VAR_0)
{



 struct nvkm_bar *VAR_1 = VAR_0->bar;
 if (VAR_1 && VAR_1->bar2)
  return VAR_1->func->bar2.vmm(VAR_1);
 return ((void*)0);
}

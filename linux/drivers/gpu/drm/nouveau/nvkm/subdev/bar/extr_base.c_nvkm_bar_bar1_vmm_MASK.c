
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nvkm_vmm {int dummy; } ;
struct nvkm_device {TYPE_3__* bar; } ;
struct TYPE_6__ {TYPE_2__* func; } ;
struct TYPE_4__ {struct nvkm_vmm* (* vmm ) (TYPE_3__*) ;} ;
struct TYPE_5__ {TYPE_1__ bar1; } ;


 struct nvkm_vmm* FUNC_0 (TYPE_3__*) ;

struct nvkm_vmm *
FUNC_1(struct nvkm_device *VAR_0)
{
 return VAR_0->bar->func->bar1.vmm(VAR_0->bar);
}

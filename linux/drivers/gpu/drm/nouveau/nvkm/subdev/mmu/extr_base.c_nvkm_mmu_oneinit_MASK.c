
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct nvkm_subdev {int device; } ;
struct TYPE_10__ {TYPE_4__* device; } ;
struct nvkm_mmu {int vmm; TYPE_2__* func; TYPE_5__ subdev; } ;
struct TYPE_9__ {TYPE_3__* fb; } ;
struct TYPE_8__ {scalar_t__ ram; } ;
struct TYPE_6__ {scalar_t__ global; } ;
struct TYPE_7__ {TYPE_1__ vmm; } ;


 struct nvkm_mmu* FUNC_0 (struct nvkm_subdev*) ;
 int FUNC_1 (struct nvkm_mmu*) ;
 int FUNC_2 (struct nvkm_mmu*) ;
 int FUNC_3 (int ,int ,int ,int *,int ,int *,char*,int *) ;

__attribute__((used)) static int
FUNC_4(struct nvkm_subdev *VAR_0)
{
 struct nvkm_mmu *VAR_1 = FUNC_0(VAR_0);


 if (VAR_1->subdev.device->fb && VAR_1->subdev.device->fb->ram)
  FUNC_2(VAR_1);
 else
  FUNC_1(VAR_1);

 if (VAR_1->func->vmm.global) {
  int VAR_2 = FUNC_3(VAR_0->device, 0, 0, ((void*)0), 0, ((void*)0),
           "gart", &VAR_1->vmm);
  if (VAR_2)
   return VAR_2;
 }

 return 0;
}

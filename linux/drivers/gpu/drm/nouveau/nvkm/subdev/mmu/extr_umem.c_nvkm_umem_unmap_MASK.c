
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_umem {int * map; int * bar; TYPE_2__* mmu; scalar_t__ io; } ;
struct nvkm_object {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_3__ {struct nvkm_device* device; } ;
struct TYPE_4__ {TYPE_1__ subdev; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvkm_device*) ;
 struct nvkm_umem* FUNC_2 (struct nvkm_object*) ;
 int FUNC_3 (int ,int **) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5(struct nvkm_object *VAR_1)
{
 struct nvkm_umem *VAR_2 = FUNC_2(VAR_1);

 if (!VAR_2->map)
  return -VAR_0;

 if (VAR_2->io) {
  if (!FUNC_0(VAR_2->bar)) {
   struct nvkm_device *VAR_3 = VAR_2->mmu->subdev.device;
   FUNC_3(FUNC_1(VAR_3), &VAR_2->bar);
  } else {
   VAR_2->bar = ((void*)0);
  }
 } else {
  FUNC_4(VAR_2->map);
  VAR_2->map = ((void*)0);
 }

 return 0;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct nvkm_subdev {int mutex; TYPE_2__* device; } ;
struct nvkm_memory {int dummy; } ;
struct TYPE_9__ {int * ptrs; } ;
struct TYPE_10__ {TYPE_3__ memory; } ;
struct TYPE_11__ {int next; } ;
struct nv50_instobj {TYPE_4__ base; TYPE_5__ lru; scalar_t__ map; int maps; struct nv50_instmem* imem; } ;
struct TYPE_7__ {struct nvkm_subdev subdev; } ;
struct nv50_instmem {int lru; TYPE_1__ base; } ;
struct TYPE_8__ {int bar; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (TYPE_5__*) ;
 int FUNC_4 (int *) ;
 struct nv50_instobj* FUNC_5 (struct nvkm_memory*) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int *,int *) ;
 int FUNC_8 () ;

__attribute__((used)) static void
FUNC_9(struct nvkm_memory *VAR_0)
{
 struct nv50_instobj *VAR_1 = FUNC_5(VAR_0);
 struct nv50_instmem *VAR_2 = VAR_1->imem;
 struct nvkm_subdev *VAR_3 = &VAR_2->base.subdev;

 FUNC_8();
 FUNC_6(VAR_3->device->bar);

 if (FUNC_7(&VAR_1->maps, &VAR_3->mutex)) {



  if (FUNC_1(VAR_1->lru.next) && VAR_1->map) {
   FUNC_0(!FUNC_3(&VAR_1->lru));
   FUNC_2(&VAR_1->lru, &VAR_2->lru);
  }


  VAR_1->base.memory.ptrs = ((void*)0);
  FUNC_4(&VAR_3->mutex);
 }
}

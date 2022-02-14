
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_object {int dummy; } ;
struct nvkm_fifo_chan {TYPE_2__* inst; TYPE_2__* push; scalar_t__ vmm; scalar_t__ user; int head; int chid; TYPE_1__* func; struct nvkm_fifo* fifo; } ;
struct nvkm_fifo {int lock; int mask; } ;
struct TYPE_4__ {int memory; } ;
struct TYPE_3__ {void* (* dtor ) (struct nvkm_fifo_chan*) ;} ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct nvkm_fifo_chan* FUNC_4 (struct nvkm_object*) ;
 int FUNC_5 (TYPE_2__**) ;
 int FUNC_6 (scalar_t__,int ) ;
 int FUNC_7 (scalar_t__*) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (int *,unsigned long) ;
 void* FUNC_10 (struct nvkm_fifo_chan*) ;

__attribute__((used)) static void *
FUNC_11(struct nvkm_object *VAR_0)
{
 struct nvkm_fifo_chan *VAR_1 = FUNC_4(VAR_0);
 struct nvkm_fifo *VAR_2 = VAR_1->fifo;
 void *VAR_3 = VAR_1->func->dtor(VAR_1);
 unsigned long VAR_4;

 FUNC_8(&VAR_2->lock, VAR_4);
 if (!FUNC_3(&VAR_1->head)) {
  FUNC_0(VAR_1->chid, VAR_2->mask);
  FUNC_2(&VAR_1->head);
 }
 FUNC_9(&VAR_2->lock, VAR_4);

 if (VAR_1->user)
  FUNC_1(VAR_1->user);

 if (VAR_1->vmm) {
  FUNC_6(VAR_1->vmm, VAR_1->inst->memory);
  FUNC_7(&VAR_1->vmm);
 }

 FUNC_5(&VAR_1->push);
 FUNC_5(&VAR_1->inst);
 return VAR_3;
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_msgqueue_queue {int dummy; } ;
struct nvkm_msgqueue {int dummy; } ;
struct msgqueue_0137c63d {int base; struct nvkm_msgqueue_queue* queue; } ;


 size_t VAR_0 ;
 struct msgqueue_0137c63d* FUNC_0 (struct nvkm_msgqueue*) ;
 int FUNC_1 (int *,struct nvkm_msgqueue_queue*) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_msgqueue *VAR_1)
{
 struct msgqueue_0137c63d *VAR_2 = FUNC_0(VAR_1);
 struct nvkm_msgqueue_queue *VAR_3 =
  &VAR_2->queue[VAR_0];

 FUNC_1(&VAR_2->base, VAR_3);
}

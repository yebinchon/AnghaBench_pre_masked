
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_msgqueue_queue {int dummy; } ;
struct nvkm_msgqueue {int dummy; } ;
struct msgqueue_0148cdec {struct nvkm_msgqueue_queue* queue; } ;
typedef enum msgqueue_msg_priority { ____Placeholder_msgqueue_msg_priority } msgqueue_msg_priority ;


 size_t VAR_0 ;
 struct msgqueue_0148cdec* FUNC_0 (struct nvkm_msgqueue*) ;

__attribute__((used)) static struct nvkm_msgqueue_queue *
FUNC_1(struct nvkm_msgqueue *VAR_1,
       enum msgqueue_msg_priority VAR_2)
{
 struct msgqueue_0148cdec *VAR_3 = FUNC_0(VAR_1);

 return &VAR_3->queue[VAR_0];
}

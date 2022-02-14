
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_subdev {int dummy; } ;
struct nvkm_msgqueue_queue {int dummy; } ;
struct nvkm_msgqueue {int dummy; } ;
struct TYPE_4__ {TYPE_1__* falcon; } ;
struct msgqueue_0137c63d {struct nvkm_msgqueue_queue* queue; TYPE_2__ base; } ;
typedef enum msgqueue_msg_priority { ____Placeholder_msgqueue_msg_priority } msgqueue_msg_priority ;
struct TYPE_3__ {struct nvkm_subdev* owner; } ;


 int VAR_0 ;
 struct nvkm_msgqueue_queue* FUNC_0 (int ) ;
 size_t VAR_1 ;
 size_t VAR_2 ;


 struct msgqueue_0137c63d* FUNC_1 (struct nvkm_msgqueue*) ;
 int FUNC_2 (struct nvkm_subdev const*,char*) ;

__attribute__((used)) static struct nvkm_msgqueue_queue *
FUNC_3(struct nvkm_msgqueue *VAR_3,
       enum msgqueue_msg_priority VAR_4)
{
 struct msgqueue_0137c63d *VAR_5 = FUNC_1(VAR_3);
 const struct nvkm_subdev *VAR_6 = VAR_5->base.falcon->owner;

 switch (VAR_4) {
 case 129:
  return &VAR_5->queue[VAR_1];
 case 128:
  return &VAR_5->queue[VAR_2];
 default:
  FUNC_2(VAR_6, "invalid command queue!\n");
  return FUNC_0(-VAR_0);
 }
}

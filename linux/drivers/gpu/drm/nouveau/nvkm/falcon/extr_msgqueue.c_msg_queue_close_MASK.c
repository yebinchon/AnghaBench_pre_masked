
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_msgqueue_queue {int mutex; int position; int tail_reg; } ;
struct nvkm_msgqueue {struct nvkm_falcon* falcon; } ;
struct nvkm_falcon {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvkm_falcon*,int ,int ) ;

__attribute__((used)) static void
FUNC_2(struct nvkm_msgqueue *VAR_0, struct nvkm_msgqueue_queue *VAR_1,
  bool VAR_2)
{
 struct nvkm_falcon *VAR_3 = VAR_0->falcon;

 if (VAR_2)
  FUNC_1(VAR_3, VAR_1->tail_reg, VAR_1->position);

 FUNC_0(&VAR_1->mutex);
}

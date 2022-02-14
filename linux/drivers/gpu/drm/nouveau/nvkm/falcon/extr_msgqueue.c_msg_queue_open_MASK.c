
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_msgqueue_queue {int tail_reg; int position; int mutex; } ;
struct nvkm_msgqueue {struct nvkm_falcon* falcon; } ;
struct nvkm_falcon {int dummy; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvkm_falcon*,int ) ;

__attribute__((used)) static int
FUNC_2(struct nvkm_msgqueue *VAR_0, struct nvkm_msgqueue_queue *VAR_1)
{
 struct nvkm_falcon *VAR_2 = VAR_0->falcon;

 FUNC_0(&VAR_1->mutex);

 VAR_1->position = FUNC_1(VAR_2, VAR_1->tail_reg);

 return 0;
}

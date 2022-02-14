
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_msgqueue_func {int dummy; } ;
struct nvkm_msgqueue {int init_done; TYPE_1__* seq; int seq_lock; struct nvkm_falcon* falcon; struct nvkm_msgqueue_func const* func; } ;
struct nvkm_falcon {int dummy; } ;
struct TYPE_2__ {int id; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void
FUNC_2(const struct nvkm_msgqueue_func *VAR_1,
     struct nvkm_falcon *VAR_2,
     struct nvkm_msgqueue *VAR_3)
{
 int VAR_4;

 VAR_3->func = VAR_1;
 VAR_3->falcon = VAR_2;
 FUNC_1(&VAR_3->seq_lock);
 for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
  VAR_3->seq[VAR_4].id = VAR_4;

 FUNC_0(&VAR_3->init_done);


}

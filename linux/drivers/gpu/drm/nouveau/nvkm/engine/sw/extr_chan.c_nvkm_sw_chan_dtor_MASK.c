
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nvkm_sw_chan {int head; int event; TYPE_2__* func; struct nvkm_sw* sw; } ;
struct TYPE_3__ {int lock; } ;
struct nvkm_sw {TYPE_1__ engine; } ;
struct nvkm_object {int dummy; } ;
struct TYPE_4__ {void* (* dtor ) (struct nvkm_sw_chan*) ;} ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 struct nvkm_sw_chan* FUNC_2 (struct nvkm_object*) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 void* FUNC_5 (struct nvkm_sw_chan*) ;

__attribute__((used)) static void *
FUNC_6(struct nvkm_object *VAR_0)
{
 struct nvkm_sw_chan *VAR_1 = FUNC_2(VAR_0);
 struct nvkm_sw *VAR_2 = VAR_1->sw;
 unsigned long VAR_3;
 void *VAR_4 = VAR_1;

 if (VAR_1->func->dtor)
  VAR_4 = VAR_1->func->dtor(VAR_1);
 FUNC_1(&VAR_1->event);

 FUNC_3(&VAR_2->engine.lock, VAR_3);
 FUNC_0(&VAR_1->head);
 FUNC_4(&VAR_2->engine.lock, VAR_3);
 return VAR_4;
}

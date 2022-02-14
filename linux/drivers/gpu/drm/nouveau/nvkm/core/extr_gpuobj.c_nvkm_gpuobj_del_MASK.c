
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_gpuobj {int memory; int heap; int node; TYPE_1__* parent; } ;
struct TYPE_2__ {int heap; } ;


 int FUNC_0 (struct nvkm_gpuobj*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;

void
FUNC_4(struct nvkm_gpuobj **VAR_0)
{
 struct nvkm_gpuobj *VAR_1 = *VAR_0;
 if (VAR_1) {
  if (VAR_1->parent)
   FUNC_3(&VAR_1->parent->heap, &VAR_1->node);
  FUNC_2(&VAR_1->heap);
  FUNC_1(&VAR_1->memory);
  FUNC_0(*VAR_0);
  *VAR_0 = ((void*)0);
 }
}

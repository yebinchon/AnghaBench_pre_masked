
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_memory_func {int dummy; } ;
struct nvkm_instobj {int head; int * suspend; int memory; } ;
struct nvkm_instmem {int lock; int list; } ;


 int FUNC_0 (int *,int *) ;
 int FUNC_1 (struct nvkm_memory_func const*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void
FUNC_4(const struct nvkm_memory_func *VAR_0,
    struct nvkm_instmem *VAR_1, struct nvkm_instobj *VAR_2)
{
 FUNC_1(VAR_0, &VAR_2->memory);
 VAR_2->suspend = ((void*)0);
 FUNC_2(&VAR_1->lock);
 FUNC_0(&VAR_2->head, &VAR_1->list);
 FUNC_3(&VAR_1->lock);
}

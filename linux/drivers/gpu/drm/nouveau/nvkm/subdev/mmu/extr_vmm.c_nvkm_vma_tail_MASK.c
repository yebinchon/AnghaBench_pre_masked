
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct nvkm_vma {scalar_t__ size; scalar_t__ addr; int head; int mapped; int busy; int user; int part; int used; int refd; int page; int sparse; int mapref; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int *,int *) ;
 struct nvkm_vma* FUNC_2 (scalar_t__,scalar_t__) ;

struct nvkm_vma *
FUNC_3(struct nvkm_vma *VAR_0, u64 VAR_1)
{
 struct nvkm_vma *VAR_2;

 FUNC_0(VAR_0->size == VAR_1);

 if (!(VAR_2 = FUNC_2(VAR_0->addr + (VAR_0->size - VAR_1), VAR_1)))
  return ((void*)0);
 VAR_0->size -= VAR_1;

 VAR_2->mapref = VAR_0->mapref;
 VAR_2->sparse = VAR_0->sparse;
 VAR_2->page = VAR_0->page;
 VAR_2->refd = VAR_0->refd;
 VAR_2->used = VAR_0->used;
 VAR_2->part = VAR_0->part;
 VAR_2->user = VAR_0->user;
 VAR_2->busy = VAR_0->busy;
 VAR_2->mapped = VAR_0->mapped;
 FUNC_1(&VAR_2->head, &VAR_0->head);
 return VAR_2;
}

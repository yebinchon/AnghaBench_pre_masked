
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_memory_func {int dummy; } ;
struct nvkm_memory {int kref; struct nvkm_memory_func const* func; } ;


 int FUNC_0 (int *) ;

void
FUNC_1(const struct nvkm_memory_func *VAR_0,
   struct nvkm_memory *VAR_1)
{
 VAR_1->func = VAR_0;
 FUNC_0(&VAR_1->kref);
}


typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_gpuobj {void* map; int * func; int memory; } ;


 scalar_t__ FUNC_0 (void*) ;
 int VAR_0 ;
 int VAR_1 ;
 void* FUNC_1 (int ) ;

__attribute__((used)) static void *
FUNC_2(struct nvkm_gpuobj *VAR_2)
{
 VAR_2->map = FUNC_1(VAR_2->memory);
 if (FUNC_0(VAR_2->map))
  VAR_2->func = &VAR_0;
 else
  VAR_2->func = &VAR_1;
 return VAR_2->map;
}

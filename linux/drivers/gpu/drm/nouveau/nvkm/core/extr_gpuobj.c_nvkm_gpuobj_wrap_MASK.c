
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_memory {int dummy; } ;
struct nvkm_gpuobj {int size; int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct nvkm_gpuobj* FUNC_0 (int,int ) ;
 int FUNC_1 (struct nvkm_memory*) ;
 int FUNC_2 (struct nvkm_memory*) ;

int
FUNC_3(struct nvkm_memory *VAR_2, struct nvkm_gpuobj **VAR_3)
{
 if (!(*VAR_3 = FUNC_0(sizeof(**VAR_3), VAR_1)))
  return -VAR_0;

 (*VAR_3)->addr = FUNC_1(VAR_2);
 (*VAR_3)->size = FUNC_2(VAR_2);
 return 0;
}

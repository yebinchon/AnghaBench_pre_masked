
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nvkm_ramht {int gpuobj; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct nvkm_ramht*) ;

void
FUNC_2(struct nvkm_ramht **VAR_0)
{
 struct nvkm_ramht *VAR_1 = *VAR_0;
 if (VAR_1) {
  FUNC_0(&VAR_1->gpuobj);
  FUNC_1(*VAR_0);
  *VAR_0 = ((void*)0);
 }
}

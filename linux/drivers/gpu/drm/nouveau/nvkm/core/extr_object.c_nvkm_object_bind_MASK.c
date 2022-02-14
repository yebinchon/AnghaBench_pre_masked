
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct nvkm_object {TYPE_1__* func; } ;
struct nvkm_gpuobj {int dummy; } ;
struct TYPE_2__ {int (* bind ) (struct nvkm_object*,struct nvkm_gpuobj*,int,struct nvkm_gpuobj**) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct nvkm_object*,struct nvkm_gpuobj*,int,struct nvkm_gpuobj**) ;

int
FUNC_1(struct nvkm_object *VAR_1, struct nvkm_gpuobj *VAR_2,
   int VAR_3, struct nvkm_gpuobj **VAR_4)
{
 if (VAR_1->func->bind)
  return VAR_1->func->bind(VAR_1, VAR_2, VAR_3, VAR_4);
 return -VAR_0;
}

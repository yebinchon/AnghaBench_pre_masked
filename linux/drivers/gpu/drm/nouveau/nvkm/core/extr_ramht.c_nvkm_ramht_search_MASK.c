
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct nvkm_ramht {size_t size; TYPE_1__* data; } ;
struct nvkm_gpuobj {int dummy; } ;
struct TYPE_2__ {int chid; size_t handle; struct nvkm_gpuobj* inst; } ;


 size_t FUNC_0 (struct nvkm_ramht*,int,size_t) ;

struct nvkm_gpuobj *
FUNC_1(struct nvkm_ramht *VAR_0, int VAR_1, u32 VAR_2)
{
 u32 VAR_3, VAR_4;

 VAR_3 = VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2);
 do {
  if (VAR_0->data[VAR_3].chid == VAR_1) {
   if (VAR_0->data[VAR_3].handle == VAR_2)
    return VAR_0->data[VAR_3].inst;
  }

  if (++VAR_3 >= VAR_0->size)
   VAR_3 = 0;
 } while (VAR_3 != VAR_4);

 return ((void*)0);
}

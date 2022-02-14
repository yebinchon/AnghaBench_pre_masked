
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct nvkm_ramht {int size; int gpuobj; struct nvkm_gpuobj* parent; struct nvkm_device* device; TYPE_1__* data; int bits; } ;
struct nvkm_gpuobj {int dummy; } ;
struct nvkm_device {int dummy; } ;
struct TYPE_2__ {int chid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct nvkm_device*,int,int,int,struct nvkm_gpuobj*,int *) ;
 int FUNC_1 (struct nvkm_ramht**) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct nvkm_ramht*,int ,int) ;
 struct nvkm_ramht* FUNC_4 (int ) ;

int
FUNC_5(struct nvkm_device *VAR_2, u32 VAR_3, u32 VAR_4,
        struct nvkm_gpuobj *VAR_5, struct nvkm_ramht **VAR_6)
{
 struct nvkm_ramht *VAR_7;
 int VAR_8, VAR_9;

 if (!(VAR_7 = *VAR_6 = FUNC_4(FUNC_3(VAR_7, VAR_1, (VAR_3 >> 3)))))
  return -VAR_0;

 VAR_7->device = VAR_2;
 VAR_7->parent = VAR_5;
 VAR_7->size = VAR_3 >> 3;
 VAR_7->bits = FUNC_2(VAR_7->size);
 for (VAR_9 = 0; VAR_9 < VAR_7->size; VAR_9++)
  VAR_7->data[VAR_9].chid = -1;

 VAR_8 = FUNC_0(VAR_7->device, VAR_3, VAR_4, 1,
         VAR_7->parent, &VAR_7->gpuobj);
 if (VAR_8)
  FUNC_1(VAR_6);
 return VAR_8;
}
